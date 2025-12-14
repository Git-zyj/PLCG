/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182071
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)149))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 3202160485U)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned char)106))))));
                            var_15 = ((/* implicit */int) max((2482017968U), (((/* implicit */unsigned int) (unsigned char)195))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) (-(((((unsigned long long int) var_6)) << (((((/* implicit */int) (unsigned char)171)) - (123)))))));
}

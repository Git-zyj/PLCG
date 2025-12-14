/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185787
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
    var_14 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) (~(-1LL)));
                var_16 = min((((((/* implicit */int) ((short) arr_2 [i_0]))) - (((/* implicit */int) (unsigned short)16383)))), (((/* implicit */int) (signed char)13)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((short) arr_9 [i_2] [i_2 + 4] [i_2]));
                            var_18 = ((/* implicit */long long int) ((signed char) min(((unsigned short)49165), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) arr_8 [i_0] [i_0]))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)49165)));
                var_20 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)4067)) : (((/* implicit */int) (short)-32757)))));
            }
        } 
    } 
}

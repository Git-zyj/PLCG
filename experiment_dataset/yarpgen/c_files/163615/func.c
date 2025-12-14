/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163615
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
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)210))))))));
                            arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((int) var_11))));
                        }
                    } 
                } 
                arr_11 [4U] &= ((/* implicit */short) arr_9 [i_0] [(unsigned short)4] [i_0 - 2] [i_0]);
                arr_12 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
    var_16 &= ((/* implicit */long long int) var_1);
    var_17 = ((/* implicit */unsigned int) var_1);
    var_18 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_9))))))));
    var_19 = ((/* implicit */unsigned short) var_9);
}

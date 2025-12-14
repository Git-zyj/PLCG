/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14852
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) arr_0 [i_0]);
                                arr_10 [i_0] [i_0] [(unsigned short)13] [i_3] [i_0] = ((/* implicit */long long int) var_11);
                                var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_10)))) ? (var_2) : (((/* implicit */unsigned long long int) 543816726U))))));
                            }
                        } 
                    } 
                } 
                var_21 *= ((/* implicit */unsigned int) (-(var_0)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (short i_5 = 2; i_5 < 14; i_5 += 3) 
    {
        arr_14 [14] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) % (var_17)))) ? (var_17) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_17)) : (var_4)))))));
        var_23 = (short)-10944;
    }
}

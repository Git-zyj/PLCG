/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140148
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
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [(signed char)0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (short)1844))) ^ (var_14)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)1823))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)-7164)))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        arr_17 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_0 + 1] [i_2 + 2])) || (((/* implicit */_Bool) arr_7 [i_4 - 1] [i_0 - 3] [i_2 + 3]))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0 + 2] [i_4] [10LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_5 - 1])) - (((/* implicit */int) arr_10 [i_5 - 1]))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((var_2) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (short)-1823))))));
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))));
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) (unsigned short)44482);
                            arr_24 [i_2] [i_4] = ((/* implicit */unsigned char) (+(65535U)));
                            var_21 = ((/* implicit */unsigned char) (signed char)-122);
                        }
                    }
                    var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) -2024151956))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_1])) ? (max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)21053)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43395))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16)) || (((/* implicit */_Bool) (short)-2817))));
}

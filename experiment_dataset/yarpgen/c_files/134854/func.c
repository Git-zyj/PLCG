/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134854
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
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) var_11)))))), (var_0)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) ((unsigned long long int) arr_9 [i_2 + 2] [i_2 + 1] [i_3 - 1]));
                            var_21 = ((((/* implicit */int) ((arr_5 [i_3 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) / (((((/* implicit */int) (signed char)40)) & (((/* implicit */int) var_9)))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_18 [i_5] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) (+(arr_9 [i_0] [i_0] [i_0])));
                            arr_19 [(unsigned char)8] [i_3 - 1] [i_3 - 1] [i_2] [i_3 - 2] = ((/* implicit */unsigned long long int) ((long long int) ((int) var_13)));
                            var_22 = ((/* implicit */short) (~(15723225052786768307ULL)));
                            arr_20 [i_5] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_2 + 2] [i_3 + 1] [i_3 - 1])) + (2147483647))) >> (((((/* implicit */int) var_11)) + (69)))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_23 = (-(var_17));
                            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-28))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1833)) ? (((/* implicit */long long int) arr_9 [i_2 + 1] [i_3 + 1] [i_6])) : ((~(arr_21 [i_2] [i_1] [i_1] [i_1] [i_6])))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_4))));
                            var_27 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) + (arr_5 [i_0]))));
                        }
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_30 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1023U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))))) ? (var_12) : (((((/* implicit */_Bool) -2147483630)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_9 [i_0] [(unsigned short)6] [(unsigned short)6])))));
                        var_29 ^= ((/* implicit */unsigned long long int) arr_11 [i_2 + 1]);
                    }
                    var_30 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_0] [i_2] [i_2 + 1] [i_0]))))) == (arr_0 [i_1])));
                    arr_31 [i_0] [i_2] = var_6;
                }
            } 
        } 
        var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
    }
}

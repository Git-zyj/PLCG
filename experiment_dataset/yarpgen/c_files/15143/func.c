/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15143
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (-(arr_1 [i_0])));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) * (var_4)))) ? ((+(arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-3)))));
                            var_18 += ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))))) / (((((var_7) + (2147483647))) >> (((-4364929352452673259LL) + (4364929352452673289LL)))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)41430)) ^ (((/* implicit */int) (unsigned short)44631))));
                            arr_12 [i_4] [i_3] [i_2 - 3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_3 - 3] [i_1] [i_2 - 1] [i_3 - 2]))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0])) ? (((/* implicit */unsigned int) arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_4])) : (var_1))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_4 - 2] [i_1])))))));
                            var_20 -= ((/* implicit */short) arr_11 [i_1 + 1] [i_4 - 2]);
                        }
                        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            arr_15 [i_0] = ((/* implicit */short) (!(((((/* implicit */int) arr_0 [i_1] [i_3])) != (((/* implicit */int) arr_3 [i_3] [i_5]))))));
                            var_21 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) && (((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 3] [i_3] [i_3 - 3])));
                        }
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_22 = ((unsigned int) arr_7 [i_1 + 1] [i_3] [i_6] [i_6]);
                            arr_18 [i_6] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_7 [i_0] [i_2] [i_3] [i_6]);
                        }
                        var_23 = ((/* implicit */unsigned char) ((int) arr_0 [i_1 + 1] [i_1 + 1]));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            arr_22 [i_7 + 1] [i_3] [i_3] [i_7] [i_2 + 1] [i_1] [i_0] = arr_1 [i_0];
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1 + 1]))));
                            var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1127))) / (var_1)));
                            arr_23 [i_0] [i_1] [i_7] [i_3] [i_7] = var_10;
                        }
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) var_8);
}

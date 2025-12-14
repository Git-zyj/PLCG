/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140381
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) 1594013657))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */int) (-(arr_9 [13U] [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1] [i_1 - 1])));
                        arr_10 [i_0 - 1] [i_1] [i_1] [i_1 - 1] [i_2] [i_1] = ((((_Bool) arr_6 [i_0] [i_0] [i_1])) ? ((-(((/* implicit */int) arr_4 [i_3])))) : (-1594013627));
                        arr_11 [i_1] [i_1] = ((/* implicit */int) var_6);
                        var_13 = ((/* implicit */unsigned char) ((arr_9 [i_0] [i_0 + 2] [i_2] [9LL] [7U] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
                    }
                }
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_17 [7U] [i_1] [11] [i_1] = ((/* implicit */int) (~(max((((/* implicit */unsigned int) -1594013663)), (max((3350693662U), (((/* implicit */unsigned int) (unsigned char)48))))))));
                        arr_18 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        arr_22 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_4] [i_1] = ((/* implicit */int) (+(14336U)));
                        var_14 = ((/* implicit */int) max((((/* implicit */unsigned int) max(((unsigned char)65), (((/* implicit */unsigned char) var_4))))), (((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1 + 1] [i_1] [i_6] [i_6])) ? (arr_15 [i_0 - 1] [i_1 + 1] [i_1] [i_1 + 1] [(short)9]) : (arr_15 [i_0 - 2] [i_1 - 1] [i_1] [i_1] [i_1])))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        arr_26 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1594013680)) ? (((/* implicit */int) arr_6 [i_4] [i_4] [i_1])) : (((/* implicit */int) ((signed char) max((((/* implicit */int) var_1)), (-1594013659)))))));
                        var_15 = ((/* implicit */unsigned int) (+(((int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_1)) - (57))))))));
                    }
                    arr_27 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)6)) == (min((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1 + 1] [i_0] [i_4])), (555383410)))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            {
                                arr_35 [i_9] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) var_1);
                                var_16 = ((/* implicit */_Bool) 1594013656);
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-16055)) : ((-(-1594013628)))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    arr_39 [i_1] [(_Bool)1] [i_1 - 1] [(_Bool)0] = ((/* implicit */long long int) 14357U);
                    var_18 = ((/* implicit */int) min((var_18), (max((((((/* implicit */_Bool) arr_1 [i_0 + 2] [(unsigned char)11])) ? (((/* implicit */int) arr_29 [i_1 + 1] [i_10])) : (((/* implicit */int) arr_29 [i_0 - 3] [i_10])))), ((((!(((/* implicit */_Bool) 5229601053334246291LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3179851592U)) || (((/* implicit */_Bool) arr_7 [i_0] [(signed char)6] [i_1 - 1] [i_1 + 1] [i_10] [i_10]))))) : (-551415348)))))));
                    arr_40 [i_1] [i_1] [i_1] = ((/* implicit */short) 1594013648);
                    var_19 *= ((/* implicit */short) -1594013649);
                }
                var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_1] [i_0 + 2] [i_0 + 1] [i_1 - 1] [i_0])) ? (arr_23 [i_0 + 2] [i_1] [i_1 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_1 + 1] [i_1] [i_1 + 1]))))));
                var_21 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_1 [i_0 - 2] [i_1 + 1]))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)28)) != (((/* implicit */int) arr_16 [(unsigned short)1] [i_1 - 1] [11LL] [5U] [5U])))))))))))));
                var_23 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(arr_19 [i_1 + 1] [i_0 + 2])))), ((+(32767U)))));
            }
        } 
    } 
    var_24 &= ((/* implicit */int) var_0);
    var_25 = ((/* implicit */signed char) var_1);
    var_26 = ((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_0))))) ? ((+(1594013626))) : (((/* implicit */int) (unsigned short)255)))))));
}

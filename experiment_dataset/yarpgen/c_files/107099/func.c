/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107099
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)0)));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) var_8);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_14 = ((arr_7 [i_1] [i_2 + 1] [i_3]) ? (((/* implicit */unsigned int) arr_12 [i_2 - 1] [i_0] [i_3 - 1] [i_3 + 1])) : (arr_13 [i_3 - 1] [i_2] [i_2 + 2] [i_0] [i_4]));
                            arr_15 [i_3 + 1] [i_0] [i_2 + 2] = ((/* implicit */unsigned short) (((+(808233102U))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))));
                        }
                        var_15 += ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) (short)27133)))), ((~(((/* implicit */int) (unsigned short)65523))))));
                    }
                    for (unsigned char i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_2 - 1] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3486734193U))));
                        arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(min((3356115662785793245LL), (((/* implicit */long long int) (unsigned char)4))))));
                        arr_21 [(unsigned char)0] &= ((/* implicit */unsigned char) var_6);
                    }
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_16 += ((/* implicit */short) max((((/* implicit */unsigned long long int) var_9)), (min(((-(7683628248915734701ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3486734194U)) ? (127752764U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))))))));
                        arr_24 [i_0] [i_0] [i_2 + 1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23001)) || (((/* implicit */_Bool) (unsigned char)130)))))));
                        arr_25 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_4))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)14)) % (((/* implicit */int) (unsigned short)13))));
                        }
                        var_19 = ((/* implicit */unsigned int) (unsigned char)18);
                    }
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_20 = ((/* implicit */short) (unsigned char)18);
                        var_21 ^= ((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_4 [i_0] [i_9])), (((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_30 [i_0] [i_0] [i_1] [i_2] [i_9])) + (31848))))))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)26333)) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_22 = min((min((var_7), (((/* implicit */unsigned int) min((((/* implicit */short) arr_1 [i_0])), (var_10)))))), (max((((unsigned int) (unsigned char)237)), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            arr_40 [i_0] [i_1] [i_2 + 1] [i_10] [i_11] [i_0] = ((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_12)) : (var_11)));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(4294967295U))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), ((((-(var_8))) << ((((~(3511416521U))) - (783550768U)))))));
                            arr_43 [i_0] [i_10] [i_2] [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 808233098U)) ? (891279393) : (((/* implicit */int) (short)-4256))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((15008690265691105866ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (max((((arr_6 [(unsigned short)18] [i_1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (7680ULL))), (((/* implicit */unsigned long long int) (-(arr_31 [i_0] [i_1] [i_2] [i_12] [i_12] [i_2])))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)79))))))))));
                            var_26 = ((/* implicit */unsigned short) ((unsigned int) var_9));
                            arr_44 [i_0] [i_1] [i_2 - 2] [i_10] [i_0] = var_3;
                        }
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_27 &= ((/* implicit */signed char) min((((arr_37 [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2]) | (((/* implicit */unsigned int) 1306222441)))), (((/* implicit */unsigned int) arr_27 [i_1] [i_2 + 1] [i_2 + 2] [i_2 - 2]))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_2 - 1] [i_1] [i_2 + 2] [i_13]), (arr_8 [i_2 + 1] [i_1] [i_14] [i_13])))) ? (((/* implicit */int) arr_8 [i_2 + 2] [i_1] [i_2] [i_0])) : (((/* implicit */int) arr_8 [i_2 - 2] [i_1] [i_1] [i_13]))));
                            var_29 = ((/* implicit */unsigned long long int) max((((var_11) / (((/* implicit */int) arr_30 [i_0] [i_1] [i_2] [i_13] [i_2 - 2])))), (((/* implicit */int) arr_30 [i_14] [i_1] [i_2 + 1] [i_13] [i_2 - 2]))));
                        }
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_10))))))));
}

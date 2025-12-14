/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128984
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)44116)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0]))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_15);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) var_4);
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) (unsigned short)21409);
                            arr_21 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_5);
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (min((((((/* implicit */_Bool) var_2)) ? (799014135U) : (arr_13 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) max((((/* implicit */signed char) arr_19 [i_1] [i_0] [i_1])), (var_12)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
                        }
                        var_23 = ((/* implicit */signed char) min((var_1), (((/* implicit */long long int) var_7))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((signed char) var_1)))));
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        arr_25 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])), (((long long int) var_9))));
                        arr_26 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_0);
                    }
                    for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            arr_32 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)1] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_29 [i_7 + 3] [i_0] [i_7 + 3] [i_7 + 1] [i_7 - 2]))))));
                            var_25 += ((/* implicit */int) ((((min((((/* implicit */unsigned int) arr_18 [i_0 - 1] [i_1] [0] [i_7] [i_2] [i_2] [0])), (205271026U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (799014135U))))))) >> (((/* implicit */int) (_Bool)0))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_7 + 2] [i_0] [i_7] [i_7 + 3] [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) var_15)) > (((/* implicit */int) arr_29 [i_2] [i_0] [i_2] [i_8] [i_8]))))))))) % (min((((/* implicit */unsigned int) var_4)), (1073741824U)))));
                            arr_33 [i_8] [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))), (((((/* implicit */_Bool) max(((unsigned char)96), (((/* implicit */unsigned char) var_6))))) ? (((((/* implicit */_Bool) arr_24 [i_0] [(unsigned short)10] [i_2])) ? (((/* implicit */long long int) 799014135U)) : (arr_27 [i_0] [i_0] [i_0] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3093088547284416396LL))))))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 8; i_9 += 4) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6724175521203753989LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((unsigned short) max((var_7), (((/* implicit */int) var_12)))))) : (((/* implicit */int) var_10))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_7 + 2] [i_0])) >> (((((/* implicit */int) ((unsigned short) var_9))) - (47848)))));
                        }
                        for (unsigned char i_10 = 4; i_10 < 10; i_10 += 4) 
                        {
                            arr_41 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0 + 1] [i_0] [9U] [i_0 + 1]))))) < (((/* implicit */int) (unsigned short)44116)))) ? (max((arr_24 [i_0] [i_0 - 1] [i_0]), (((/* implicit */unsigned int) arr_6 [i_0] [i_7 + 1] [i_0 - 1] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38)))));
                            var_28 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (((+(((/* implicit */int) arr_20 [i_2] [2U] [i_2] [i_7] [i_7] [i_7] [i_7])))) > ((~(var_2))))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_7]))) : (-3540834288410017628LL)))) ? (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */int) (unsigned short)21420)))) : (((/* implicit */int) arr_42 [i_2])))), (((/* implicit */int) var_11)))))));
                            var_30 = ((/* implicit */unsigned char) ((_Bool) ((-3540834288410017628LL) / (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0 - 1] [i_0]))))));
                            arr_44 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (3495953161U)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_15 [i_0] [(_Bool)1] [i_1] [i_1] [i_7] [i_0] [(unsigned char)0])) : (var_2))) : (((/* implicit */int) arr_11 [i_0] [i_0])))))));
                            arr_45 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((unsigned short) var_15));
                        }
                        arr_46 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0] [i_7 - 2] [i_7]))))) ? (max((((/* implicit */long long int) var_12)), (max((((/* implicit */long long int) 3495953161U)), (arr_12 [i_0] [i_2] [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_34 [i_7] [i_7] [i_0] [i_7 + 3] [i_0])) - (min((arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [i_7]), (((/* implicit */unsigned int) (unsigned short)0)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_32 = min((((((/* implicit */int) var_9)) ^ (var_2))), (((((/* implicit */_Bool) arr_47 [i_0])) ? (((/* implicit */int) (unsigned short)44116)) : (((/* implicit */int) var_8)))));
                            var_33 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((max((arr_16 [i_0] [i_0] [i_2]), (((/* implicit */unsigned short) var_6)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_34 [i_12] [i_1] [i_0] [i_7] [(signed char)4])))))))), (min((((/* implicit */long long int) (unsigned short)13709)), (arr_10 [i_7 + 1] [i_0] [i_7 + 2] [i_0] [i_0 + 1])))));
                            arr_49 [i_0] [i_1] = ((/* implicit */int) ((arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_0] [i_12]) <= (((((min((-6359135593858978265LL), (((/* implicit */long long int) (unsigned short)65535)))) + (9223372036854775807LL))) >> (((max((((/* implicit */unsigned int) var_2)), (799014107U))) - (1627537640U)))))));
                            var_34 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0])) : (-792189107))), (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_7))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_17), (var_17)))))))));
                        }
                    }
                }
            } 
        } 
    } 
}

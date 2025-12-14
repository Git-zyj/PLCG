/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18596
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)49)) | (((/* implicit */int) (unsigned char)209))))) + (var_10)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(((unsigned int) -1662030712)))))));
                    var_18 = ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)207)) ? (-504807664) : (-504807662)));
                            var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) + (414806757001830042LL))))) : (max((((long long int) arr_2 [i_0])), (((/* implicit */long long int) ((int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((((/* implicit */_Bool) 3444413420U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207))) : (327928997U))))))));
                            var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 504807661)))) ? (((((/* implicit */_Bool) arr_16 [i_3 + 1])) ? (((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */int) var_3)) - (214))))) : (((/* implicit */long long int) (-(1109805764)))))) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)118)), ((+(((/* implicit */int) var_6)))))))));
                            arr_18 [i_0] [i_0] [i_2] [i_2] [i_5 + 3] [i_3 - 1] [i_2] = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) arr_17 [i_5 + 3] [i_3 - 1] [i_2] [i_2] [i_5]))), (max((((/* implicit */int) (short)-1194)), (-504807676)))));
                            var_22 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (max((((((/* implicit */_Bool) -414806757001830072LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))) : (-414806757001830038LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (arr_9 [i_0] [i_0]))))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))) < (((/* implicit */int) var_2))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [20U] [i_3 + 1] [i_5 - 1])))))));
                        }
                        for (long long int i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            var_23 = (~(min((((((var_1) + (9223372036854775807LL))) << (((var_5) - (3849883219U))))), (max((var_1), (arr_2 [i_0]))))));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (16383U) : (((/* implicit */unsigned int) -455874655))))) ? (min((((/* implicit */unsigned int) var_2)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)21)))))));
                            var_24 ^= ((/* implicit */short) arr_7 [i_0] [i_1] [(unsigned char)20] [i_3]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_7] = ((/* implicit */int) var_8);
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) & (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2])))))))) == (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_26 = ((unsigned int) (~(((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_0 [i_0])) + (32757)))))));
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_3 - 1] [i_2] = ((/* implicit */unsigned char) (((+(var_0))) % (((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_11)) ? (-414806757001830065LL) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_10))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        arr_29 [i_0] = ((/* implicit */int) max((((((arr_28 [i_0] [i_0] [i_0] [i_8] [i_0] [i_2]) >= (((/* implicit */int) var_8)))) ? (var_0) : (-414806757001830082LL))), (min((arr_23 [1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (min((((/* implicit */long long int) var_12)), (arr_10 [i_0] [i_1] [i_2])))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            arr_33 [i_0] [i_0] [i_2] [i_8] [i_9] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_9 [i_0] [i_0]), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18918))) : (2482599780U))))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_13)), (var_12))), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(4294967295U)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_16 [i_0]) : (921643641U))) : (max((((/* implicit */unsigned int) var_11)), (var_5)))))) : (max((((/* implicit */long long int) ((unsigned char) 2840859810U))), (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_36 [i_0] [i_0] = ((/* implicit */unsigned int) -504807651);
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)109)) * (((((/* implicit */_Bool) 3269392757U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_8] [i_10] [i_10]))))))), (414806757001830042LL)));
                        }
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */int) -414806757001830043LL);
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))) : (var_1)));
                            arr_42 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((int) arr_23 [i_0] [i_1] [i_2] [i_8] [i_11] [i_8] [i_11]))));
                            var_30 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) 768492169)) ? (2211240761U) : (4294967295U))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_8)))))));
                        }
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */_Bool) -504807662)) ? (((/* implicit */int) var_15)) : (504807660))) << (((max((var_5), (var_12))) - (3849883201U))))) : (((((/* implicit */_Bool) (~(var_5)))) ? (((int) (unsigned char)31)) : (((((/* implicit */_Bool) 4294967295U)) ? (504807662) : (((/* implicit */int) (unsigned char)135)))))))))));
                    }
                    arr_43 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)109)) >> (((((/* implicit */int) (short)18825)) - (18809)))));
                }
            } 
        } 
    } 
}

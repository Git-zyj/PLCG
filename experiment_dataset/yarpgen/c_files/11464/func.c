/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11464
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_10 ^= ((/* implicit */unsigned short) ((-5507433763524257563LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_11 *= ((/* implicit */long long int) (+(((/* implicit */int) min((min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0]))), (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 - 2])))), (((((/* implicit */int) arr_1 [i_0 + 1])) & (((/* implicit */int) arr_1 [i_0 - 2]))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (min((((/* implicit */long long int) (_Bool)1)), (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    var_13 = ((/* implicit */unsigned short) 4412512970558446441LL);
    /* LoopSeq 3 */
    for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((long long int) arr_4 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [(unsigned short)6]))) : (arr_5 [i_1 - 1] [i_1 - 1]))))) & (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_1] [4LL] [(_Bool)1]), (((/* implicit */unsigned short) min((arr_7 [i_1 + 2] [i_1 + 2] [4LL]), (var_1)))))))))))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-4412512970558446442LL), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [5LL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_1])))))) ? (min((arr_4 [i_2 + 1]), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1])) << (((((/* implicit */int) (unsigned short)65524)) - (65515)))))))) : (max((-1795179235305755909LL), (8660833518254208191LL)))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_1 - 2] [i_1 + 2] [i_3] |= ((/* implicit */_Bool) max((((arr_9 [i_3 - 1]) + (((((/* implicit */_Bool) arr_5 [i_1] [i_3])) ? ((-9223372036854775807LL - 1LL)) : (arr_4 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_3] [i_3])) * (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)24488)))))))));
            arr_14 [i_3] [i_1] = ((/* implicit */long long int) arr_11 [i_1] [i_3] [12LL]);
        }
        arr_15 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4412512970558446441LL)) ? (arr_4 [i_1 + 1]) : (1635760213480915677LL)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)63880))) : (((/* implicit */int) (unsigned short)0))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_16 |= ((/* implicit */long long int) (+(((/* implicit */int) min((arr_1 [i_4]), (arr_18 [i_4]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5 - 1] [i_4])) && (((((/* implicit */_Bool) (unsigned short)18)) && (((/* implicit */_Bool) (unsigned short)63876))))));
            arr_21 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4]))) : ((-9223372036854775807LL - 1LL))));
            var_18 ^= ((/* implicit */long long int) (_Bool)1);
        }
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_19 += ((/* implicit */unsigned short) min((((arr_16 [i_4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)48969)))), (((/* implicit */int) arr_22 [i_4]))));
            arr_24 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_16 [i_4])), ((unsigned short)1040)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_19 [(_Bool)1]), (var_8)))) ? (((/* implicit */int) min(((_Bool)1), (arr_22 [i_6])))) : (((/* implicit */int) arr_20 [(unsigned short)2])))))));
        }
        for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            var_20 += ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_25 [i_7] [i_4] [i_4])))) << (((((/* implicit */int) (unsigned short)48969)) - (48954)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [16LL]))))) ? (((/* implicit */int) max((arr_19 [i_4]), (((/* implicit */unsigned short) arr_16 [i_7]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_25 [i_4] [i_4] [i_4]))))))));
            var_21 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)7549))), (arr_2 [i_8]))))) : (((((arr_29 [i_4] [i_4] [i_8] [i_4]) << (((((/* implicit */int) (unsigned short)16578)) - (16578))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7157)) ? (((/* implicit */int) arr_20 [i_4])) : (((/* implicit */int) var_2)))))))))));
                var_23 = (_Bool)0;
            }
        }
        var_24 ^= ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)5626)), (max((((((/* implicit */_Bool) 7952381032753035434LL)) ? (((/* implicit */int) arr_27 [(unsigned short)4] [i_4] [13LL])) : (((/* implicit */int) arr_17 [i_4] [i_4])))), (((/* implicit */int) arr_17 [i_4] [i_4]))))));
    }
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        var_25 += ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) ((_Bool) ((_Bool) ((((/* implicit */_Bool) arr_32 [i_12] [10LL])) && (((/* implicit */_Bool) var_4))))));
                        var_27 ^= ((/* implicit */unsigned short) arr_40 [i_9] [i_10] [i_11] [i_12]);
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((_Bool) max((max((arr_41 [0LL] [i_11] [i_10] [(_Bool)1]), (arr_38 [i_9] [i_11] [i_9] [i_12]))), (arr_34 [i_9] [i_9] [i_9])))))));
                        var_29 ^= ((/* implicit */long long int) max((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */int) arr_38 [i_9] [i_10] [i_9] [i_12])) << (((/* implicit */int) arr_35 [i_9] [i_10]))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
}

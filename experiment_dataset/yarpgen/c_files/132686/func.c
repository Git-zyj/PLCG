/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132686
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
    var_13 = ((/* implicit */signed char) ((unsigned long long int) var_3));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 134184960)) >= (max((var_1), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_1])))))) || (((/* implicit */_Bool) (((+(arr_4 [10]))) ^ (((/* implicit */unsigned long long int) var_3)))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */int) (signed char)116)) >> (((18014398509481983ULL) - (18014398509481976ULL))))) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 2])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_1] [i_0 - 2] = (-(arr_10 [i_0] [i_1 - 1] [i_2] [i_2] [i_2 - 1] [i_2] [i_1]));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((unsigned long long int) var_2)))));
                            arr_13 [i_4] [i_1] [i_2] [i_0] [i_1 + 1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_1 + 2] [i_0 - 3] [i_0] [i_0])) ? (((7814085369750177178ULL) + (18428729675200069634ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1])))))));
                            arr_14 [i_4] [i_3] [i_4] [i_4] [i_1] [6] &= ((/* implicit */signed char) (~((+(2147483639)))));
                        }
                        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            arr_17 [17] [i_1] [i_1] [i_1] [i_3] [i_1] = (signed char)17;
                            var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1466631679)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7)))) ? (arr_11 [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) (~(-1460032623)))))) ^ (((/* implicit */unsigned long long int) ((arr_16 [i_0] [i_1] [i_0 - 3] [i_0 - 1] [2ULL] [i_0 - 1]) ^ (arr_16 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0 - 2]))))));
                        }
                        var_18 = max((((((/* implicit */_Bool) var_3)) ? ((-(14737687512387297056ULL))) : ((-(10632658703959374410ULL))))), (((/* implicit */unsigned long long int) min(((+(2147483644))), (max((((/* implicit */int) (signed char)55)), (var_9)))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_19 = 2059238330;
                        var_20 = ((/* implicit */int) ((((18446744073709551610ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))))) % (((/* implicit */unsigned long long int) (-(443972318))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18014398509481999ULL)) ? (18446744073709551609ULL) : (18446744073709551615ULL))))));
                            var_22 = ((((/* implicit */_Bool) ((1056964608) << (((1056964611) - (1056964611)))))) ? (((/* implicit */unsigned long long int) 1056964591)) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551596ULL) : (var_7))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 1) 
                        {
                            arr_28 [i_1] [i_2] [i_2 + 4] [i_7] = var_7;
                            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)120))));
                            var_24 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) max(((signed char)64), ((signed char)-13)))), (((((/* implicit */_Bool) (signed char)-107)) ? (17378319048723997145ULL) : (18446744073709551602ULL))))) << ((((~(1710358190))) + (1710358254)))));
                        }
                        arr_29 [0] [i_1] [i_1] [i_7] = ((max((((/* implicit */unsigned long long int) ((int) (signed char)124))), (((((/* implicit */_Bool) arr_1 [7] [(signed char)15])) ? (var_7) : (7229259765792809834ULL))))) ^ ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (7313159296453365978ULL))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (signed char)24)), (17ULL))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_7]))) + (89)))))) && (((/* implicit */_Bool) ((4611686017890516992ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (957270000)))))))));
                        arr_30 [i_1] = ((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_2] [i_7]);
                    }
                    var_26 += ((/* implicit */int) 13ULL);
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 20; i_10 += 2) 
                    {
                        for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            {
                                arr_36 [i_1] [i_0] [i_0] [i_0 + 2] [i_0] = min((((arr_9 [i_11] [19ULL] [i_11] [i_11] [i_10 + 1] [i_10]) >> ((((+(18446744073709551596ULL))) - (18446744073709551545ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (min((18446744073709551603ULL), (764923131430790937ULL)))))));
                                arr_37 [i_11] [i_1] = ((/* implicit */signed char) arr_10 [(signed char)19] [(signed char)19] [i_2 - 1] [i_10 - 2] [(signed char)19] [i_11] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            {
                var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1951858272)) / (max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_25 [i_12] [i_12] [i_12] [i_12] [i_12] [i_13])), (-89574215)))), (min((((/* implicit */unsigned long long int) var_11)), (var_10)))))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (signed char)62))));
            }
        } 
    } 
    var_29 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483644)))))) / (((((/* implicit */_Bool) -1569822128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (629115265241496490ULL)))))));
}

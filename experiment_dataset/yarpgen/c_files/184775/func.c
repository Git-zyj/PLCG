/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184775
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((unsigned int) var_18)) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) > (var_11)));
    var_21 = ((/* implicit */int) var_17);
    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (+(var_0)))) : (max((((/* implicit */unsigned long long int) ((int) var_0))), (var_11)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_0 [i_0]) < (arr_1 [i_0]))))));
        arr_3 [10ULL] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_14) : (var_14)))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) min((var_10), (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8763599063095618860LL)) ? (((/* implicit */long long int) var_15)) : (arr_6 [i_1] [i_1])))) : (arr_7 [2])))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                {
                    var_24 += ((/* implicit */long long int) arr_8 [i_1] [9U]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) var_3);
                                arr_18 [i_1] [i_1] [i_2] [i_2] [i_1] [8U] [i_5] = ((((/* implicit */_Bool) max((-827441466), (((827441465) << (((2098301705414800108ULL) - (2098301705414800108ULL)))))))) ? (((/* implicit */unsigned long long int) (+(max((arr_8 [i_1] [(_Bool)1]), (1789229513U)))))) : ((((!(arr_14 [i_1]))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_13))) : (((/* implicit */unsigned long long int) max((181712013U), (arr_4 [i_1] [i_1])))))));
                                var_26 -= ((var_7) * (((/* implicit */unsigned long long int) 7489221)));
                            }
                        } 
                    } 
                    var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [i_3 - 2] [i_1]), (((/* implicit */long long int) arr_16 [i_1] [i_2] [i_2] [i_3 + 2]))))) ? ((-(3449640849U))) : (((/* implicit */unsigned int) ((int) var_6)))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (1789229513U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(_Bool)1]))))), (((((/* implicit */_Bool) 8763599063095618860LL)) ? (((/* implicit */unsigned int) -827441466)) : (var_19)))))))))));
        arr_19 [i_1] = ((unsigned int) (((!(((/* implicit */_Bool) var_12)))) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_1]))));
    }
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_19), (var_17)))) ? (var_12) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_16)) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((long long int) var_17))) : ((-(((unsigned long long int) var_8))))))));
}

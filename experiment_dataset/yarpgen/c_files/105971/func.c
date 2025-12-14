/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105971
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 6; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_16 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) -7201893587187732141LL)) : (3061539513017446850ULL)))) ? (((((/* implicit */_Bool) 7201893587187732122LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)733))) : (15385204560692104764ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [0LL])))))));
                    arr_10 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1 - 2] [i_2] [i_2])))) || (((/* implicit */_Bool) ((short) arr_3 [i_0])))));
                    var_17 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0]))))) ? (arr_6 [i_0 + 1]) : ((-(-1)))))) ? (min((arr_9 [9ULL] [9ULL] [i_0 + 1] [9ULL]), (((/* implicit */unsigned long long int) ((var_10) || (((/* implicit */_Bool) -7201893587187732124LL))))))) : (arr_1 [i_1] [i_1])));
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_15))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((arr_5 [i_0 + 1]) >> (((-7201893587187732141LL) + (7201893587187732169LL)))))));
                    var_20 += ((/* implicit */int) ((_Bool) var_6));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (15385204560692104766ULL) : (((/* implicit */unsigned long long int) ((var_7) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
                /* vectorizable */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_16 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */int) var_8);
                    arr_17 [i_0] = (+(arr_2 [i_0 - 1]));
                    var_22 += ((/* implicit */long long int) ((unsigned long long int) arr_11 [i_4 - 1] [i_1 + 4] [(_Bool)0] [i_0 + 1]));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_0 [i_0 + 1]))));
                }
                var_24 = ((/* implicit */long long int) max((var_24), (((max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (((-7201893587187732148LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) <= (((/* implicit */int) arr_4 [i_1]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (int i_8 = 1; i_8 < 12; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_28 [12LL] [i_8 + 1] [i_6 + 1])) ? (((/* implicit */long long int) arr_28 [9ULL] [i_8 + 1] [i_6 - 2])) : (-7201893587187732145LL))) + (((/* implicit */long long int) (((_Bool)1) ? (arr_28 [i_5] [i_8 + 1] [i_6 + 1]) : (arr_28 [i_5] [i_8 + 1] [i_6 + 1]))))));
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((((/* implicit */_Bool) arr_30 [i_5] [i_6] [i_7] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_21 [6] [i_5] [i_5]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_5] [i_8] [i_9])) ? (arr_33 [(short)3] [(_Bool)1] [(short)3] [i_8] [4LL]) : (((/* implicit */int) var_9))))))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1071840655))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -7201893587187732134LL))))))))))));
                                var_27 += ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (~(-813172776)))), (arr_21 [i_6 - 1] [i_6] [i_6 - 1]))), (((((/* implicit */unsigned long long int) arr_28 [i_5] [i_5] [i_5])) & (((2201933289181345833ULL) >> (((arr_21 [i_5] [i_5] [i_7]) - (8577229003291131089ULL)))))))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [5ULL] [i_5] [6])) ? (((/* implicit */unsigned long long int) max((7201893587187732144LL), (((/* implicit */long long int) ((int) 7201893587187732134LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_6 + 1])) ? (arr_30 [i_6] [i_6] [i_5] [i_5]) : (var_12)))) ? (arr_21 [i_6 - 1] [(short)5] [i_6 - 1]) : (max((((/* implicit */unsigned long long int) -7201893587187732148LL)), (arr_21 [i_5] [i_5] [i_5])))))));
                var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_18 [i_6] [(_Bool)1])) <= (((/* implicit */int) (short)26808)))))))) >= (((((/* implicit */_Bool) ((var_3) ? (arr_22 [(_Bool)1] [i_5] [i_6]) : (((/* implicit */unsigned long long int) arr_33 [i_5] [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_6 + 1] [i_6 + 1]))) : (((((/* implicit */_Bool) var_7)) ? (15385204560692104766ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_6])))))))));
                var_30 += ((/* implicit */short) min((((/* implicit */long long int) arr_33 [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 - 2])), (7201893587187732109LL)));
            }
        } 
    } 
}

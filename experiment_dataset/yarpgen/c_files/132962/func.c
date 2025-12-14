/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132962
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (((((/* implicit */_Bool) 3229375803U)) ? (2942110450U) : (1942419022U)))));
                var_16 = ((/* implicit */int) max((max((((11576646606996141541ULL) | (6870097466713410074ULL))), (max((arr_2 [i_0]), (var_9))))), (max((((/* implicit */unsigned long long int) min((var_14), (arr_3 [(_Bool)1] [i_1] [i_1])))), (arr_2 [i_0])))));
                arr_5 [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1))));
                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 12599856935908050079ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (11576646606996141541ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        for (unsigned int i_3 = 4; i_3 < 21; i_3 += 1) 
        {
            {
                arr_11 [i_2 - 2] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (((long long int) arr_10 [i_2] [i_3] [i_3 - 4]))))) : (((((/* implicit */unsigned long long int) var_5)) % ((-(var_7))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((arr_13 [i_4 - 1] [i_6 + 4] [i_6]) ^ (arr_13 [i_4 - 1] [i_6 + 1] [i_6])));
                            arr_20 [i_4] [i_3] [i_4] [i_5] [i_6 + 2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((arr_16 [i_6] [12LL] [i_4 - 1] [i_5]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_6 + 3] [i_3])))) : (((/* implicit */int) var_2))));
                        }
                        arr_21 [i_2 + 1] [i_3] [i_4] [i_3] = (+(arr_7 [i_2 + 1] [i_4 + 1]));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_19 += ((/* implicit */unsigned int) arr_13 [i_2] [i_2] [i_2]);
                        arr_24 [i_2 - 3] [i_4] [i_4] [(unsigned char)1] [i_3 - 2] = var_7;
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_2 + 1] [i_2]))));
                    }
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            arr_30 [i_4] = ((/* implicit */unsigned long long int) arr_19 [i_2] [7LL] [i_4] [i_8]);
                            arr_31 [21U] [(signed char)9] [i_3] [i_4] [i_9] [i_8] = (!(((/* implicit */_Bool) var_8)));
                        }
                        for (int i_10 = 4; i_10 < 20; i_10 += 4) 
                        {
                            arr_35 [i_4] [i_3] [i_4 + 1] [i_8] = ((/* implicit */int) var_11);
                            var_21 = ((/* implicit */int) var_1);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_8)));
                            var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        }
                        arr_36 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) (~(arr_7 [i_4 - 1] [i_3 - 2])));
                    }
                    arr_37 [i_4] [i_3] [i_2] [i_4] = ((/* implicit */long long int) ((arr_17 [i_4] [i_4] [i_4 + 1] [i_3] [i_4] [i_2 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [(unsigned char)19] [i_3] [i_2 - 1] [i_2] [i_2]))))))));
                    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_14)) : (var_12))) >> (((((/* implicit */int) (_Bool)1)) >> (((-8261405576861400840LL) + (8261405576861400842LL)))))));
                    var_25 = (((!(((/* implicit */_Bool) arr_10 [i_2] [i_2 - 3] [i_4 + 1])))) ? (((/* implicit */int) ((var_14) >= (arr_33 [(short)6] [i_4] [i_3 + 1] [i_3 + 1] [13ULL])))) : (((/* implicit */int) arr_23 [i_2 + 1] [i_3] [i_4] [i_4] [i_4])));
                }
            }
        } 
    } 
    var_26 |= ((/* implicit */_Bool) (+(((unsigned int) var_8))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138380
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
    var_11 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0 + 4] [i_0]))))), (arr_4 [i_0] [i_0])));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                        var_13 = ((/* implicit */int) var_7);
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) 6195754727660159476ULL))));
                        var_15 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12250989346049392157ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_3 [i_1] [i_0])))))), ((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0 + 2]))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_2] [i_2]) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_2] [i_2]))))) ? ((-(((/* implicit */int) arr_1 [i_2] [i_2])))) : (((/* implicit */int) ((arr_1 [i_2] [i_2]) && (arr_1 [i_2] [i_2])))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0 + 4] [i_0 + 4] [i_1 - 1])) * (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_1 + 4]))));
                        var_18 = ((unsigned long long int) arr_3 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(arr_12 [i_0] [i_0] [i_5] [i_0 + 3] [i_0]))))));
                            arr_16 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_13 [i_0] [i_0]))));
                            arr_17 [i_0] [i_0] = ((/* implicit */long long int) var_6);
                        }
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (short)-21063)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_21 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) var_7))) ^ (((((/* implicit */unsigned long long int) 3286162148544832701LL)) * (6195754727660159458ULL)))));
                        var_21 = arr_14 [i_2] [i_1 + 3] [(short)9] [i_0] [i_6];
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (arr_18 [i_1 + 3] [3ULL] [3ULL]) : (((var_9) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0])))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 3; i_7 < 16; i_7 += 3) 
                        {
                            var_23 = ((((/* implicit */_Bool) arr_11 [i_7] [i_0] [i_0])) ? (((/* implicit */long long int) 1453171161)) : (-1LL));
                            var_24 = ((/* implicit */_Bool) 8637658285948931766LL);
                            var_25 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_0 [i_0] [i_0 - 1])))) ? (((/* implicit */int) (short)21068)) : (arr_19 [i_0] [i_0 - 1] [i_1 - 2] [i_0 - 1] [i_7 + 2] [3LL]));
                        }
                    }
                    arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_10 [i_0] [3U] [i_2])), ((short)-14396))))) % (((9041289805484175602LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) || ((((-(((/* implicit */int) arr_22 [i_0] [i_0 + 1] [10LL] [i_0])))) != (((((/* implicit */_Bool) 264241152U)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_1 - 2] [i_2] [i_2])) : (((/* implicit */int) (short)32))))))));
                }
            } 
        } 
    } 
    var_26 = min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 63355780U)) ? (63355780U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (max(((~(8663083469919239009LL))), (((/* implicit */long long int) var_8)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_8 = 2; i_8 < 22; i_8 += 2) 
    {
        arr_28 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_8])) ^ (((/* implicit */int) arr_26 [i_8] [13LL]))))) ? ((-(var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8 - 1]))));
        var_27 = ((/* implicit */long long int) ((arr_25 [i_8] [i_8 - 1]) >= (arr_25 [i_8 + 1] [i_8 - 1])));
    }
    for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        var_28 |= (-(((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9]))) | ((~(arr_25 [i_9] [(_Bool)0]))))));
        var_29 = (i_9 % 2 == zero) ? (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((arr_30 [i_9] [i_9]) + (7643263232323683762LL)))))) && (((/* implicit */_Bool) arr_29 [i_9]))))), (((((/* implicit */_Bool) max((arr_27 [i_9]), (arr_27 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9]))) : (min((((/* implicit */long long int) arr_27 [i_9])), (arr_30 [i_9] [i_9])))))))) : (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((arr_30 [i_9] [i_9]) + (7643263232323683762LL))) - (7167474665247038123LL)))))) && (((/* implicit */_Bool) arr_29 [i_9]))))), (((((/* implicit */_Bool) max((arr_27 [i_9]), (arr_27 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9]))) : (min((((/* implicit */long long int) arr_27 [i_9])), (arr_30 [i_9] [i_9]))))))));
    }
    var_30 = ((/* implicit */unsigned long long int) var_8);
}

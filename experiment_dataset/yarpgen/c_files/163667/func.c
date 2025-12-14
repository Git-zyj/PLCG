/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163667
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = ((((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551597ULL))) ? (max((((/* implicit */unsigned long long int) var_7)), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_2 - 2]))))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */int) var_14)) >> (((((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) - (16823)))))))));
                    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((6203270485971488463ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18)))))) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) arr_7 [i_2 + 4] [i_2] [i_2 - 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1] [i_1])), (arr_10 [i_3] [i_3] [i_3] [i_1] [i_4] [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != ((-(((/* implicit */int) (unsigned char)168)))))))) : (var_9)));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (max((max((arr_11 [i_0] [i_0] [i_4] [i_3]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_3] [1ULL])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)88)) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) arr_10 [i_4] [i_3] [5ULL] [i_0] [i_1 + 2] [i_0]))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */long long int) arr_5 [i_1 + 2])), ((+(min((-5454729031060278685LL), (820678900896689015LL))))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)-17135)))))));
                            arr_17 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_2 + 4]))))) ? (min((arr_13 [i_0] [i_1] [i_5] [i_2] [i_5] [i_3] [i_1]), (((/* implicit */unsigned long long int) ((arr_10 [i_3] [i_1 + 2] [i_2] [i_3] [8ULL] [i_0]) + (((/* implicit */int) (unsigned char)185))))))) : (var_2)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_23 = (short)1682;
                            arr_22 [i_0] [i_0] [i_2 + 1] [i_3] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_1 [i_0]), (var_7))))))) < (min((arr_11 [10ULL] [i_2 + 1] [i_2 + 1] [i_0]), (((/* implicit */unsigned long long int) var_4))))));
                            arr_23 [i_0] [i_0] [i_1] [(unsigned char)3] [i_3] [i_6] = ((/* implicit */short) var_7);
                            var_24 *= ((/* implicit */unsigned long long int) ((unsigned char) var_3));
                        }
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (min((((unsigned long long int) arr_9 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_1 + 2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_20 [i_3] [i_2] [i_2] [i_1] [i_0]) : (var_12)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [(short)10]))))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_30 [i_9 + 1] [i_9] [i_9])) ? (2241878616983393967ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9 + 1] [i_9] [i_9])))))));
                            arr_36 [i_7] [i_10] [i_9] [i_10] = ((/* implicit */unsigned short) max(((~((+(((/* implicit */int) (unsigned char)168)))))), (((/* implicit */int) (unsigned char)149))));
                            var_27 = ((/* implicit */int) ((((var_13) >= (var_12))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) arr_28 [i_7 + 1] [i_9 - 2] [i_9 - 1]))))) : (((((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [(short)16] [2LL] [i_9 + 1] [i_9 + 1])) || (((/* implicit */_Bool) 536870912)))))) : (min((17ULL), (arr_33 [i_7] [i_7] [i_9] [i_10])))))));
                            arr_37 [i_10] [i_8] [i_10] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_24 [i_9 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) : (arr_33 [i_7 + 1] [i_8] [i_9 - 3] [i_10]))), (max((((/* implicit */unsigned long long int) var_7)), (18446744073709551599ULL)))));
                            var_28 = ((((((/* implicit */int) arr_34 [i_7 + 1] [i_7 - 1])) > (((/* implicit */int) arr_34 [i_7 + 2] [i_7 - 1])))) ? (((unsigned long long int) min((var_15), (((/* implicit */short) var_5))))) : (((/* implicit */unsigned long long int) min((arr_27 [i_7 + 1] [i_7 + 3]), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                        }
                    } 
                } 
                arr_38 [i_7 + 1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) max((arr_29 [i_7]), (var_15)))) % (var_8)))));
                var_29 = (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_7 + 3] [i_8]))))) ? ((~(9223372036854775806ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7 - 1] [i_7 + 3] [i_7] [i_7 + 2]))))));
                var_30 = max((((((((/* implicit */unsigned long long int) var_11)) < (15ULL))) ? (((((/* implicit */_Bool) 7532462481729868192ULL)) ? (17191155148105529333ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19163))))) : (max((((/* implicit */unsigned long long int) var_8)), (9223372036854775808ULL))))), (min((max((((/* implicit */unsigned long long int) (unsigned short)45336)), (1255588925604022281ULL))), (((/* implicit */unsigned long long int) arr_29 [i_8])))));
            }
        } 
    } 
}

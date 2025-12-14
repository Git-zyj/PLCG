/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150521
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_0 - 3])) : (((/* implicit */int) arr_4 [i_1 - 1])));
            /* LoopSeq 1 */
            for (short i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 3])) ? (((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_0 - 1]))));
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_17 += ((/* implicit */unsigned short) arr_14 [i_0] [i_1 - 1] [i_2 + 1] [i_3] [i_2 - 2]);
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0] [i_1])) ? (var_1) : (var_7)));
                    }
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        arr_19 [i_0] [i_1] [i_2 - 4] [i_3] [i_0] = var_0;
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_4))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        arr_22 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_0])) ^ (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 1203080556616484191LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_2 - 4] [i_3] [i_3] [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) var_9)))))));
                        var_20 *= ((/* implicit */int) ((arr_12 [(_Bool)1] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6 + 1] [i_1 - 1] [i_0])))));
                    }
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27710))) * (226149455929552152ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 5184368080763086496LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1306997516)))))));
                    arr_23 [i_1] [i_0] = ((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_2] [i_3] [i_0 - 3]);
                }
            }
            var_22 = ((/* implicit */short) arr_14 [i_0] [i_1] [i_1] [i_0] [i_0 + 1]);
            var_23 = ((/* implicit */long long int) (+(var_9)));
        }
        /* LoopSeq 1 */
        for (int i_7 = 3; i_7 < 12; i_7 += 1) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned short)30397))) % ((-(((/* implicit */int) arr_0 [i_0]))))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((arr_17 [i_0 - 3] [i_0 - 1] [i_7 + 2] [i_7 - 3] [i_7 + 3]) - (((/* implicit */int) var_0)))))));
            arr_26 [i_0 - 2] [i_0] [i_7 + 3] = ((/* implicit */unsigned short) var_2);
        }
        var_26 = ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_0 - 1])) && (((/* implicit */_Bool) 267386880LL)));
    }
    var_27 ^= ((/* implicit */int) var_3);
}

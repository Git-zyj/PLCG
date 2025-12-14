/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108350
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
    var_19 = ((/* implicit */int) var_18);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (((~(8474541402799638186ULL))) | (((/* implicit */unsigned long long int) (+(arr_1 [i_0]))))));
        var_21 ^= ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) -1)) * (8474541402799638177ULL))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
            {
                var_22 = arr_6 [i_1] [i_2];
                /* LoopSeq 1 */
                for (int i_4 = 2; i_4 < 24; i_4 += 4) 
                {
                    var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) 9972202670909913430ULL)) ? (((((/* implicit */int) arr_7 [i_4 - 1])) >> (((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (4503599623176192ULL))) - (35532ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1587251092)))))))));
                    var_24 = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_7 [11U])))));
                }
                arr_12 [i_2] [(_Bool)1] [(unsigned short)4] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_7 [(unsigned short)16]))))) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [(short)0] [11] [(short)0] [(short)0] [17]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (9972202670909913449ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [(_Bool)1])))))))))));
            }
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */long long int) arr_10 [i_2] [i_1] [3LL] [i_5] [i_5] [i_5]);
                arr_16 [i_1] &= ((/* implicit */int) ((min((arr_14 [i_1] [(unsigned short)2] [8LL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_13 [i_1] [11LL] [22])) : (((/* implicit */int) arr_13 [21U] [(unsigned short)10] [i_1]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))));
                var_26 = arr_10 [i_2] [(unsigned short)9] [i_5] [7] [i_5] [24ULL];
                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
            }
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
            {
                arr_20 [i_1] [i_2] [i_2] = ((/* implicit */int) ((max((arr_14 [i_2] [i_2] [3U]), (((/* implicit */unsigned long long int) var_16)))) | (arr_14 [i_2] [i_2] [i_6])));
                var_28 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8474541402799638169ULL)) ? ((-(var_15))) : (((/* implicit */int) min(((unsigned short)63), (var_8)))))))));
            }
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                var_29 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))));
                var_31 = ((/* implicit */unsigned short) 14U);
            }
            arr_25 [i_2] = arr_23 [i_1] [21] [22LL];
            arr_26 [(short)9] [(short)9] [i_2] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned short) 8474541402799638195ULL))))));
        }
        arr_27 [(unsigned short)7] [(unsigned short)7] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) <= ((+(((/* implicit */int) arr_2 [i_1]))))));
    }
}

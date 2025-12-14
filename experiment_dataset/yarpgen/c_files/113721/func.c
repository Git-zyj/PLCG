/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113721
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) | (((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (arr_4 [i_1] [i_3] [i_4])))))))));
                                var_14 -= arr_8 [i_1 - 2] [i_1 + 4];
                                var_15 = ((/* implicit */unsigned long long int) arr_5 [i_3] [i_0] [i_3]);
                                arr_12 [12] [i_1] [i_2 + 2] [i_3] [12] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [(signed char)16] [i_0] [(short)14] [(signed char)16])))) ? (((((/* implicit */_Bool) arr_8 [(signed char)8] [(signed char)8])) ? (((/* implicit */int) arr_11 [i_2] [17ULL])) : (var_0))) : (((/* implicit */int) var_9))))) ? (arr_7 [i_4] [i_4] [i_4] [11ULL]) : ((-(((((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [(short)0])) | (((/* implicit */int) arr_10 [i_1] [i_2] [(signed char)12] [i_4]))))))));
                                var_16 = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [(signed char)7] [i_1] [i_1])))) ? (var_3) : (((((var_8) + (2147483647))) >> (((max((((/* implicit */int) (signed char)74)), (arr_5 [(short)3] [(signed char)1] [(short)3]))) - (73)))))));
                var_18 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -1)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) (-(-1)))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (short)17981)) : (-28))))))));
                var_20 = ((/* implicit */int) (((-(18446744073709551615ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_1 + 2] [i_1])) <= (0)))))));
            }
        } 
    } 
    var_21 = var_7;
    var_22 = ((/* implicit */short) (-((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))));
    var_23 = ((/* implicit */unsigned long long int) var_9);
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((max((((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (var_0))))) + (((/* implicit */int) var_11)))))));
}

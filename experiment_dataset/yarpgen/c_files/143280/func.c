/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143280
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
    var_19 = ((/* implicit */_Bool) var_10);
    var_20 = ((/* implicit */unsigned long long int) var_14);
    var_21 = ((/* implicit */unsigned long long int) var_2);
    var_22 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) max((min((arr_4 [i_0 + 1] [i_2]), (arr_4 [i_0 + 1] [(signed char)3]))), (min(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL))))));
                    var_24 = ((/* implicit */signed char) ((9223372036854775807LL) != ((-9223372036854775807LL - 1LL))));
                    arr_8 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */unsigned char) var_10);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((min((((/* implicit */long long int) (short)-1)), ((-9223372036854775807LL - 1LL)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)21787))) + ((-9223372036854775807LL - 1LL))))));
                                var_26 = ((/* implicit */long long int) (((!(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))) <= (17715672329918719872ULL))))) && (min(((!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1] [(unsigned char)12] [i_3] [i_4] [i_3])))), (((arr_6 [i_0] [i_1] [i_2] [i_3]) >= (arr_10 [(short)13] [i_2] [(short)13] [(_Bool)1])))))));
                                arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                }
                arr_15 [i_0 - 1] [(unsigned short)9] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) var_12);
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (18446744073709551603ULL)))) ? ((-(arr_17 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_18 [i_5] [i_5] [i_1])) : (max((((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [0U] [i_0] [0U])), (arr_6 [i_0 + 1] [i_1] [i_5] [i_6])))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_6] [i_5 + 2] [i_1])) / (((/* implicit */int) arr_7 [i_0 + 1] [i_5 - 1] [i_6]))));
                            var_30 = ((/* implicit */signed char) min((min((9223372036854775807LL), (-9223372036854775807LL))), (((/* implicit */long long int) min((arr_13 [i_0] [i_0] [(unsigned char)0] [(unsigned short)13] [i_0 + 1] [i_6]), (((/* implicit */unsigned char) arr_2 [i_0])))))));
                            arr_21 [i_0 - 1] [i_1] [i_5] [i_6] [i_6] = ((/* implicit */int) arr_4 [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}

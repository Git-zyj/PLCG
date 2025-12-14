/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183985
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
    var_15 += ((/* implicit */long long int) 18446743523953737728ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */short) min((((((/* implicit */_Bool) ((short) arr_3 [i_0] [i_1 + 2]))) ? (min((((/* implicit */long long int) var_1)), (-6278647673401280387LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446743523953737757ULL)) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_1] [i_1])) : (((/* implicit */int) var_5))))))), (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)79))) | (arr_0 [i_0] [i_1]))), (((/* implicit */long long int) var_8))))));
                var_17 -= max((((arr_0 [i_1] [i_1 - 2]) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))), (((/* implicit */long long int) max((arr_3 [i_0 - 1] [i_1 - 1]), (var_1)))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 7; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 += var_1;
                                arr_13 [i_4] [i_1] [i_2] [i_3] [i_4] [i_3] [8ULL] |= ((/* implicit */short) (!(((/* implicit */_Bool) min((var_10), (arr_8 [i_2] [(signed char)9] [i_0 + 1] [i_0]))))));
                                var_19 += ((/* implicit */signed char) max((((arr_5 [i_1 + 1]) + (((arr_5 [(signed char)0]) >> (((((/* implicit */int) var_5)) + (4158))))))), (((/* implicit */unsigned long long int) ((long long int) var_1)))));
                                var_20 = ((/* implicit */signed char) max((var_20), (arr_4 [i_3 + 1] [i_1 - 1])));
                                var_21 -= ((/* implicit */signed char) (-(min((8ULL), (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_2 + 2]))))));
                            }
                        } 
                    } 
                    var_22 += var_14;
                }
                for (short i_5 = 2; i_5 < 7; i_5 += 2) /* same iter space */
                {
                    var_23 += max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1)));
                    var_24 -= ((/* implicit */signed char) (((-((-(var_6))))) * (((((/* implicit */_Bool) ((short) (short)-29269))) ? (((((/* implicit */_Bool) arr_2 [i_5 + 3] [i_1] [i_0 + 1])) ? (18446743523953737728ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_0]))) & (arr_11 [i_5]))))))));
                }
            }
        } 
    } 
}

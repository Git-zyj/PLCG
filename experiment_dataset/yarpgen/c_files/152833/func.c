/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152833
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
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((288230376151711743LL) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-288230376151711755LL))))), (((/* implicit */long long int) (-(min((var_1), (((/* implicit */unsigned int) var_14)))))))));
    var_21 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((288230376151711743LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3088)))))) && ((!(var_18))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [6])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1023ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446744073709550592ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)4096))))) : (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))))) : (min((((((/* implicit */_Bool) arr_1 [3ULL])) ? (18446744073709550592ULL) : (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [(_Bool)0] [(_Bool)0] [i_1])))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [(unsigned short)6] [(unsigned short)6] [(signed char)2] [8ULL] [(unsigned short)5]))))), (arr_3 [i_0] [3] [10U])));
                            var_24 = ((/* implicit */short) 18446744073709550592ULL);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (((-(((/* implicit */int) var_14)))) <= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned char)5] [2ULL] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)35469)))))))));
                var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 288230376151711755LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (2382633608U))) < (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */signed char) arr_4 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_4] = ((/* implicit */short) 18446744073709550592ULL);
                            var_27 -= ((/* implicit */unsigned int) ((var_19) ? (((/* implicit */int) max((arr_1 [i_5 + 2]), (((/* implicit */short) arr_16 [i_0] [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 + 3]))))) : (((/* implicit */int) (!(arr_16 [(_Bool)1] [i_5 + 2] [i_5 + 1] [i_5 - 2] [i_5 + 2]))))));
                            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_10 [i_0])) / (((/* implicit */int) var_11))))))) ? (((((((/* implicit */unsigned long long int) 9223372036854775807LL)) / (arr_6 [i_0] [i_1] [i_4] [i_1]))) / (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    var_30 = ((/* implicit */unsigned short) var_7);
}

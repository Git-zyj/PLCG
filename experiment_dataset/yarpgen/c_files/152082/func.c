/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152082
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_14 -= ((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) (unsigned short)65535)) - (65506))));
                            var_15 = ((/* implicit */short) 18446744073709551606ULL);
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 138538465099776LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32759))) : (arr_8 [i_0] [0ULL] [i_2] [i_3])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)3684)) ? (((/* implicit */int) (short)32767)) : (-1683281385))))))));
                            arr_12 [i_0 - 1] [i_1] [i_0] = ((/* implicit */long long int) min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_3] [i_2] [i_0 - 1]))))) >= (max((6ULL), (((/* implicit */unsigned long long int) 10U)))))))));
                            arr_13 [(unsigned char)7] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 810563702384171439ULL)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 1]))))) ? ((~(arr_10 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0 + 1] [i_0 - 1]) >= (arr_1 [i_0 + 1] [i_0 + 1])))))));
                        }
                    } 
                } 
                arr_14 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) ((((/* implicit */int) var_12)) >> (((arr_10 [i_1 + 2] [i_0 + 1] [i_0] [(short)5] [(signed char)4]) - (11264330136055814962ULL)))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((var_12), (((/* implicit */unsigned short) var_6))))), ((~(-3945115093015931288LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0])) >> (((((/* implicit */int) (unsigned char)102)) - (71)))))) | (var_0)))) : (((((/* implicit */_Bool) (signed char)107)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759)))))));
            }
        } 
    } 
    var_18 = (~(var_2));
    var_19 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57371)) ? (-1683281385) : (((/* implicit */int) (unsigned char)78))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_10)) : (15425006407849235377ULL))))) + (((/* implicit */unsigned long long int) var_5))));
    var_20 |= ((/* implicit */unsigned int) max((((((/* implicit */long long int) (~(var_2)))) % (((long long int) var_6)))), (var_4)));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_1))));
}

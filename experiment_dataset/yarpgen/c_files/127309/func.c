/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127309
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((((min((((/* implicit */int) ((70931694131085312ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))), (((((/* implicit */_Bool) (unsigned short)65526)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) (unsigned short)15)))))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)255)) - (239))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_3 [17]))))) ? (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (unsigned short)37524)) : (((/* implicit */int) (unsigned short)65535))))) : (min((arr_6 [i_0] [i_0]), (arr_0 [i_0] [i_1 - 1])))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+((((~(var_13))) >> (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)1)), ((unsigned short)65535)))))))))));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                var_18 ^= ((/* implicit */_Bool) var_7);
                                arr_13 [i_4] [i_3] [i_0] [i_1] [(unsigned char)16] = ((/* implicit */short) ((((/* implicit */_Bool) 995502023U)) && (((/* implicit */_Bool) (unsigned short)28034))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) min((arr_17 [i_3 + 4] [i_3] [i_3 - 1] [i_3 + 4] [i_3 + 2] [i_0]), (arr_17 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 2] [i_0]))));
                                var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13102928415230680352ULL)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_2] [i_1] [i_0])), (var_13))))))), (((arr_6 [i_0] [i_0 - 1]) << (((var_13) - (4428728738589095549ULL)))))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned short) (+(3417629955U)));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [4])))), (((((((/* implicit */_Bool) var_4)) ? (5343815658478871280ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)20] [4] [(_Bool)1]))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))))))));
                                var_22 = ((/* implicit */long long int) min((5343815658478871270ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_0))));
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 5343815658478871270ULL)) && (((/* implicit */_Bool) (+(130560U)))))));
            }
        } 
    } 
    var_25 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), ((~(var_15)))));
    var_26 -= ((/* implicit */_Bool) var_0);
}

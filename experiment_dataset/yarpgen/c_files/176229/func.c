/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176229
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_3] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4 + 1] [i_4 + 1] [7] [i_4 - 3] [7])) ? (((/* implicit */int) arr_11 [i_0] [i_4 - 3] [i_4 - 3] [i_4] [i_4 - 3] [i_0])) : (((/* implicit */int) arr_13 [(unsigned char)6] [i_1] [i_4] [i_4 - 3] [i_1]))))) || (((/* implicit */_Bool) max((arr_11 [5U] [i_4 - 2] [i_4] [i_4 - 2] [i_4 + 1] [i_3]), (arr_13 [i_4] [i_4] [i_4] [i_4 + 1] [1ULL]))))));
                                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_0))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2 - 2]))))) & (130944U)));
                }
            } 
        } 
    } 
    var_11 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) min((var_7), ((signed char)104))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (signed char)104))))) ? (((/* implicit */int) (unsigned short)45866)) : (((/* implicit */int) (signed char)104)))) : ((~(((((/* implicit */int) var_8)) - (((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (int i_5 = 1; i_5 < 21; i_5 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_5])), (var_0)))) ? (((/* implicit */int) var_9)) : (var_6)))))))));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_5 + 1]))))) ? (((((/* implicit */int) arr_18 [i_5])) + (((/* implicit */int) arr_18 [(signed char)18])))) : (((/* implicit */int) (signed char)106))))) && (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_17 [i_5]))))) < (var_4))))))));
        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
    }
}

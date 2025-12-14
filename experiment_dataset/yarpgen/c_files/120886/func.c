/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120886
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_9) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))) ? (((((/* implicit */_Bool) var_5)) ? (-1267202142130923431LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51147)))));
                        arr_10 [i_3] [i_3] [i_2] [i_0] [i_3] = ((/* implicit */_Bool) ((arr_8 [i_0] [i_1]) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 1751109111))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (+(arr_0 [i_0] [i_4])));
                                var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1581947856)) ? (((/* implicit */int) (unsigned short)14395)) : (1475700521)));
                                var_20 += ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_0 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned short) (signed char)-100);
                    var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1581947841)) ? (117440512ULL) : (((/* implicit */unsigned long long int) 2147483647))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_1])) : (((((/* implicit */int) (signed char)32)) / (((/* implicit */int) arr_3 [i_2]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51141))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [15LL]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 16777215U)) : (var_7)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) max((2147483647), (((/* implicit */int) (signed char)89))));
    var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)15)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))));
    var_25 = ((/* implicit */signed char) (-((~(((/* implicit */int) var_4))))));
}

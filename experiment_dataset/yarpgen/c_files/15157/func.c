/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15157
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
    var_13 |= max(((-((+(((/* implicit */int) var_6)))))), (((/* implicit */int) ((signed char) min((var_1), (var_1))))));
    var_14 = ((/* implicit */_Bool) (~(var_8)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)61294)));
                    arr_7 [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_6 [i_0 - 4])) & (((/* implicit */int) arr_6 [i_0 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    var_16 *= (!(((/* implicit */_Bool) arr_9 [i_3] [i_3 - 1] [i_3 - 1] [i_0])));
                    var_17 = ((/* implicit */unsigned char) ((unsigned int) 1ULL));
                }
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) arr_3 [i_1] [i_4]);
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 - 2] [i_0 - 2] [(unsigned char)20]))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 2; i_5 < 20; i_5 += 3) 
                {
                    var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(arr_9 [i_0 - 1] [i_1] [i_1] [i_5 - 2])))) : (18446744073709551614ULL)));
                    var_21 &= ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) arr_15 [i_0] [i_1] [10]))));
                }
                var_22 &= ((max((1ULL), (((/* implicit */unsigned long long int) 3221225472U)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 4] [i_0] [i_0 - 4])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0 - 2]))))));
                arr_18 [8ULL] [i_0 - 2] = ((/* implicit */unsigned short) (~(23ULL)));
            }
        } 
    } 
}

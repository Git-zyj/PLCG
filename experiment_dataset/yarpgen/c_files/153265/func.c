/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153265
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
    var_13 += (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 7; i_2 += 4) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_8))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_3] [i_3])))))))));
                        var_16 -= ((/* implicit */long long int) ((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-974055156)))) > (min((((/* implicit */long long int) (unsigned short)16384)), ((-9223372036854775807LL - 1LL))))));
                        arr_11 [(short)8] [i_1] [i_1] [i_1] = ((/* implicit */signed char) 2975426857268110703LL);
                    }
                }
                for (unsigned short i_4 = 3; i_4 < 7; i_4 += 4) /* same iter space */
                {
                    var_17 += ((/* implicit */_Bool) (((+(((/* implicit */int) ((short) var_6))))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_4 - 1])) && (((/* implicit */_Bool) arr_5 [i_0 - 1] [i_4 - 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1]))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_4] [i_0] [i_4 + 3])))))) : (((-1LL) | (2251799813685240LL)))));
                        var_20 &= ((/* implicit */signed char) arr_15 [i_0] [i_1] [i_4 - 2]);
                    }
                    var_21 = max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40208)) || (((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1]))))), ((+(((/* implicit */int) var_0)))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) (~(arr_20 [i_4] [i_6] [i_6] [i_6] [(signed char)3])));
                        arr_21 [i_0] [i_4] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_6]);
                    }
                }
                var_23 += ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_0] [i_1])), (2975426857268110703LL)))) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [i_1])), ((unsigned short)29090))))))));
                var_24 = ((/* implicit */unsigned int) ((_Bool) -4452103455097720621LL));
            }
        } 
    } 
}

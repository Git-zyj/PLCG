/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178146
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
    var_16 -= ((/* implicit */unsigned int) -9223372036854775801LL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (1474507545479274496LL) : (((/* implicit */long long int) 2630819870U)))));
        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 1371247757U))))) : (arr_1 [i_0])));
    }
    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_3))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_5]))))), (min((min((3302800703207598390LL), (((/* implicit */long long int) arr_14 [i_1] [i_2])))), (((/* implicit */long long int) min((((/* implicit */unsigned int) 2146959360)), (1371247757U))))))));
                                arr_17 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */signed char) (-2147483647 - 1));
                                var_21 = ((/* implicit */unsigned int) ((max((min((arr_2 [i_2]), (((/* implicit */long long int) arr_12 [i_1] [i_3])))), (((/* implicit */long long int) (+(arr_16 [i_1] [i_2] [i_3] [i_3] [i_5])))))) <= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65526)))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (2923719557U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (min((var_6), (((/* implicit */unsigned int) arr_14 [i_1 + 2] [i_1 + 2]))))));
            }
        } 
    } 
}

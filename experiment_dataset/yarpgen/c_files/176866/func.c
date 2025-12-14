/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176866
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
    var_13 += ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))), (((unsigned int) var_1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */int) arr_5 [(unsigned short)5]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [17LL] [i_1] [12] = ((/* implicit */unsigned long long int) arr_1 [10ULL]);
                            var_15 = ((/* implicit */int) ((unsigned int) var_5));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [13U]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1] [i_4] [i_0] [i_6])) ? (arr_12 [i_1] [i_4] [i_5]) : (((/* implicit */long long int) arr_1 [i_6])))))));
                                var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_19 [i_0 + 1])), (2297094897U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 - 1]))) : (max((arr_7 [i_0] [i_0] [i_4]), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) var_2))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned int) max((var_5), (((/* implicit */unsigned long long int) 1997872398U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_12)), (var_8)))) ? (((/* implicit */long long int) var_4)) : (max((9223372036854775807LL), (((/* implicit */long long int) -1931551057)))))) - (((/* implicit */long long int) ((/* implicit */int) var_10)))));
}

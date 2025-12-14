/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127253
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
    var_15 = ((/* implicit */signed char) ((var_7) >> ((((+(((/* implicit */int) var_13)))) - (58)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((6198720936826185905ULL) | (arr_1 [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (6198720936826185905ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))) | (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) min((arr_2 [i_0] [(signed char)19]), (((/* implicit */short) arr_3 [i_0 + 2] [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (min((((/* implicit */unsigned long long int) (~(((arr_7 [i_1] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_2] [i_1 - 2])))))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (arr_1 [i_0 + 2] [i_1]) : (arr_1 [i_0] [i_1])))))));
                            var_18 ^= arr_1 [i_0 + 2] [i_3];
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 *= ((/* implicit */short) ((signed char) var_9));
}

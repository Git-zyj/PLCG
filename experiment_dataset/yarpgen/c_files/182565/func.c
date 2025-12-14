/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182565
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
    var_14 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) (signed char)126);
                            var_16 = (+(((-2139493718149210110LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4161))))));
                            var_17 = ((/* implicit */long long int) 0ULL);
                            var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (signed char)-106))))))), ((+(-2583154274189872195LL)))));
                            var_19 = ((/* implicit */signed char) 4329228541450680100LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) (+(arr_1 [i_0] [i_0])));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_7);
}

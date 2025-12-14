/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115371
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
    var_14 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) max(((unsigned short)57256), (((/* implicit */unsigned short) (signed char)-67))))), (((((/* implicit */_Bool) 2977969167856027492LL)) ? (-265651634514458842LL) : (2977969167856027486LL))))) - (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (unsigned short)37039)) : (((/* implicit */int) (unsigned short)53688)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [8LL] = -2977969167856027504LL;
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_15 [(unsigned short)9] [i_1] [i_1] [i_0 + 1] [i_2 + 3] [i_2] = ((/* implicit */long long int) arr_0 [i_0]);
                                var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_12 [i_4 - 1]), ((unsigned short)53694))))));
                            }
                        } 
                    } 
                    var_16 = min((-2977969167856027501LL), (-9223372036854775787LL));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / ((-(((((/* implicit */_Bool) (unsigned short)11840)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53672)))))))));
    var_18 = ((long long int) ((long long int) ((unsigned short) -9223372036854775789LL)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137649
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
    var_12 = ((/* implicit */short) (signed char)-12);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 4]))) ^ (var_9)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((unsigned int) (unsigned short)41279);
                                var_15 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))));
                                arr_15 [i_0] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_3 [i_2] [i_2]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)))))));
                    arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) (!((_Bool)1)));
                    var_17 = ((-3362128476556068472LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(signed char)2] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [(short)1] [i_2] [i_2 - 1] [i_2] [7U] [(_Bool)1])) : ((-(((/* implicit */int) (unsigned char)70))))))));
                }
            } 
        } 
    } 
}

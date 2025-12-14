/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123155
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
    var_12 = ((/* implicit */unsigned char) var_9);
    var_13 = ((((/* implicit */_Bool) 10515464577545166806ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((arr_5 [i_0 - 1] [i_0 - 1] [(unsigned char)2] [i_4]) / (arr_5 [i_0 - 1] [i_1] [i_2] [i_4]))) % (arr_5 [i_0 - 1] [i_1] [i_0 - 1] [i_1]))))));
                                var_15 = ((/* implicit */unsigned long long int) var_5);
                                var_16 += ((/* implicit */unsigned int) arr_0 [i_4]);
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */unsigned int) arr_8 [i_1]);
                    var_18 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) / ((-((~(-2549403458078530504LL)))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164210
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
    var_11 &= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (min((((/* implicit */unsigned short) (signed char)63)), ((unsigned short)0))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 -= min((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (unsigned char)245)))), (((/* implicit */int) (unsigned short)27)));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_13 = arr_10 [i_0] [i_1] [i_2] [i_3];
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max((0ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) (-(arr_5 [i_0] [i_2] [i_0]))))))))))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((arr_6 [i_0] [i_0] [i_0]), (min(((~(arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)170)), (arr_9 [i_0] [i_0] [i_2 - 1] [i_3])))))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] [(signed char)6] [i_2] [i_4] [i_4] [(unsigned char)14] |= ((/* implicit */unsigned char) ((_Bool) ((int) arr_16 [i_5 - 1] [i_4 - 3] [i_2 - 1] [i_0])));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (signed char)-110))))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min(((unsigned short)61096), (((/* implicit */unsigned short) (_Bool)1)))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

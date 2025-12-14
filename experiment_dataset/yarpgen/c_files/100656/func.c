/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100656
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
    var_11 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6)))))) | (7282405668665401847ULL))), (((/* implicit */unsigned long long int) var_5)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8)))))), (max((11164338405044149768ULL), (((/* implicit */unsigned long long int) var_0)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) != (var_6)));
                        var_13 = ((/* implicit */unsigned int) arr_6 [i_0]);
                        arr_11 [i_1] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) min((min((7282405668665401875ULL), (((arr_9 [i_0]) & (((/* implicit */unsigned long long int) arr_6 [i_1])))))), (arr_9 [i_0])));
                        var_14 -= ((/* implicit */unsigned char) 7349851527577709418ULL);
                        var_15 &= ((/* implicit */unsigned short) (-(7282405668665401848ULL)));
                    }
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_0] = (!((_Bool)1));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0]))))) * (min((7282405668665401889ULL), (7282405668665401856ULL)))));
                        arr_15 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) var_1))))), ((-(arr_5 [i_0] [i_1] [i_1]))))));
                        arr_16 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_1]);
                    }
                }
            } 
        } 
    } 
}

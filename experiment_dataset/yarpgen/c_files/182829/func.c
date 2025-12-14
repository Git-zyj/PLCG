/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182829
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) arr_6 [i_2] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_6 [i_1] [i_1] [i_1]))))));
                        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        arr_13 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_5 [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1])), (arr_2 [i_0 - 1] [i_0]))))));
                        var_18 = ((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)15] [i_1] [i_2] [i_4]);
                        arr_14 [i_0] [i_2] [i_1] [i_1] [8LL] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (((+(4294967295U))) >= (((/* implicit */unsigned int) var_8)))))));
                    }
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */unsigned long long int) var_14);
    var_20 -= (-((((+(((/* implicit */int) var_4)))) * (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_11)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182139
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
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 = (~(((/* implicit */int) arr_5 [i_1] [4LL] [4LL])));
                arr_8 [5] [(_Bool)1] = ((/* implicit */short) min((((long long int) arr_7 [i_0] [i_0])), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1 - 4] [i_1 + 1])))))));
                arr_9 [i_0] [i_1 - 2] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 3])) ? (((/* implicit */int) arr_2 [i_1] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_14 [i_3] [i_2] [(short)5] [(unsigned char)8] = ((/* implicit */long long int) (+(((/* implicit */int) (short)293))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */short) arr_4 [i_0] [i_0] [i_0]);
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) 4241402191U)) && (arr_13 [6LL] [i_1 - 1] [i_1 + 3] [10]))))));
                                var_18 = ((/* implicit */_Bool) arr_1 [i_0]);
                            }
                            var_19 = ((/* implicit */unsigned char) max(((_Bool)1), (((((/* implicit */int) ((_Bool) arr_18 [i_0] [i_0] [i_2] [4ULL] [i_3]))) >= (((/* implicit */int) ((arr_13 [(unsigned char)4] [i_1] [i_1] [i_1 - 3]) && (((/* implicit */_Bool) arr_1 [8ULL])))))))));
                            arr_20 [(_Bool)1] [i_0] [i_1] [i_2] [i_2] [i_3] = (short)293;
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101920
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
        arr_8 [(unsigned short)5] = ((/* implicit */unsigned int) (unsigned char)247);
        /* LoopNest 2 */
        for (unsigned short i_2 = 4; i_2 < 10; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                {
                    arr_15 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1])) ? (arr_19 [i_2 + 1]) : (arr_19 [i_2 - 3])));
                                var_18 |= ((/* implicit */int) ((unsigned int) (+(arr_0 [11]))));
                                arr_23 [i_1 - 1] [i_2 - 2] [i_4] [i_3] [(unsigned char)3] [i_4] [i_5 + 1] = ((/* implicit */unsigned char) arr_20 [i_1 + 2] [i_1 + 2] [i_2] [i_3] [i_4] [i_5] [i_5 - 1]);
                                arr_24 [(unsigned char)8] [i_3] [i_4] [i_3] |= (unsigned char)228;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) var_8);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188603
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
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) ((unsigned char) 8416207546242764667LL))), (((short) 1348238368U)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 8416207546242764648LL)))))));
                arr_6 [10U] &= ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [(unsigned short)5]);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) min((arr_7 [i_0 + 1] [i_1 + 1] [i_2] [i_2]), (((/* implicit */unsigned char) min((arr_5 [i_0 - 2] [i_1 + 1] [i_1]), (arr_5 [i_0 - 3] [i_1 - 2] [i_1]))))));
                    var_19 = (!(((/* implicit */_Bool) max((((/* implicit */int) var_16)), (((((/* implicit */_Bool) arr_9 [i_0] [4])) ? (((/* implicit */int) arr_1 [0U] [i_1])) : (0)))))));
                    arr_12 [i_0] [(_Bool)0] [i_1 - 3] [i_0] = (_Bool)1;
                }
            }
        } 
    } 
}

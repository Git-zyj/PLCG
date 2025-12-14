/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130829
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0])))));
        var_14 = ((/* implicit */short) (-((-(((/* implicit */int) var_5))))));
    }
    var_15 ^= ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (unsigned int i_2 = 3; i_2 < 8; i_2 += 2) 
        {
            for (unsigned short i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                {
                    var_16 = arr_9 [i_2 - 3] [i_2 + 2];
                    arr_13 [i_3] [i_3] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 3] [i_3 + 1])) ? (arr_9 [i_2 + 1] [i_3 + 1]) : (arr_9 [i_2 - 2] [i_3 + 2])))) ? ((-(arr_9 [i_2 - 3] [i_3 + 2]))) : (((arr_9 [i_2 - 2] [i_3 + 2]) % (arr_9 [i_2 + 2] [i_3 - 2])))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_10 [i_1] [i_3]))));
                }
            } 
        } 
    } 
}

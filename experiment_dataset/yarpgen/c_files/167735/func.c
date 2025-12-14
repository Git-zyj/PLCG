/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167735
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
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))) & (arr_4 [i_0]))))) ? (((((/* implicit */int) ((unsigned short) (unsigned char)125))) & ((+(((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2] [(signed char)8])))))) : (((/* implicit */int) arr_7 [i_0] [i_0]))));
                    var_13 |= ((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned short)1] [(unsigned short)1]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~(((/* implicit */int) var_10)))))));
    var_15 = ((/* implicit */_Bool) (-((~(((/* implicit */int) max((var_11), (((/* implicit */short) var_4)))))))));
}

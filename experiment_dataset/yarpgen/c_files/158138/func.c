/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158138
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_0]))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) min((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12288)) ? (136323103U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), ((unsigned short)65176)))))))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [(unsigned char)16] [i_1] [(unsigned char)16]))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) var_10);
    var_12 ^= ((/* implicit */unsigned short) var_3);
    var_13 = ((/* implicit */short) var_7);
}

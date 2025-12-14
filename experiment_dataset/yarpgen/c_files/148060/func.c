/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148060
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
    var_13 = ((/* implicit */int) (signed char)-61);
    var_14 = ((/* implicit */long long int) (unsigned char)234);
    var_15 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1]))) * (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 2])) : (((/* implicit */int) var_6)))))));
                arr_7 [(unsigned short)7] [i_0 - 3] [i_1] = ((/* implicit */unsigned int) max(((signed char)47), (arr_1 [i_0])));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_9 [i_2] [(signed char)16] [(signed char)16] [i_0])));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (_Bool)0))));
                }
                for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    arr_15 [i_3] = ((/* implicit */_Bool) ((int) ((var_9) < (((/* implicit */int) var_4)))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(218990052945573561LL))))));
                }
            }
        } 
    } 
}

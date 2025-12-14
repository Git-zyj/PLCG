/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138713
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
    var_13 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_14 = arr_2 [(unsigned char)4];
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((arr_8 [i_0] [i_0] [i_0] [i_0] [(short)16] [i_0]) ? (((/* implicit */unsigned int) min((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_3 [4LL])))), (((/* implicit */int) arr_0 [i_0]))))) : (((max((var_1), (((/* implicit */unsigned int) var_0)))) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_0] [i_0] [i_0] [4LL] [i_0] [i_0]), (arr_7 [(unsigned short)2] [i_1] [(unsigned short)2]))))))))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))) + (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [(unsigned short)3] [i_1])) >= (((/* implicit */int) var_5))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) var_2);
            }
        } 
    } 
}

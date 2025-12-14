/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188739
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
    var_10 = ((/* implicit */long long int) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    var_11 = min((((((((/* implicit */int) arr_5 [(unsigned char)2] [(short)15] [i_0])) * (((/* implicit */int) arr_3 [i_0])))) + ((-(((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1 + 1])))))), (min((((((/* implicit */_Bool) arr_5 [(signed char)1] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_5 [(unsigned char)1] [i_1] [2LL])))));
                    var_12 = ((/* implicit */long long int) (~((+(((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 2])))))))));
                    var_13 -= arr_1 [i_1 + 2];
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_4])) <= (((/* implicit */int) ((arr_2 [12]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1]))))))));
                            arr_11 [i_0] [i_3] [i_2] [i_1] [i_0] [(signed char)7] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_5 [i_4] [i_2] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
                        }
                        arr_12 [i_3] [(_Bool)1] [i_0] [(short)6] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 3] [i_3] [i_2 - 4] [i_3]))));
                    }
                }
            } 
        } 
    } 
}

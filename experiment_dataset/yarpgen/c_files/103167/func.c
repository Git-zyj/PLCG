/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103167
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_1 + 2] [i_1] [i_2])) ^ (((/* implicit */int) var_10)))) != (((((/* implicit */int) arr_3 [i_1 + 2] [i_2] [i_2])) ^ (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1] [i_1 + 2]))))));
                    var_12 = ((/* implicit */short) (+((-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) || (((/* implicit */_Bool) arr_7 [i_0] [6LL] [i_2])))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 4; i_3 < 16; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */unsigned char) arr_2 [i_1] [i_2] [i_3 - 3]);
                        arr_12 [i_0] [(signed char)13] [(signed char)6] [i_3 - 1] = ((/* implicit */short) ((((((var_8) % (((/* implicit */unsigned long long int) arr_0 [i_2])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [(unsigned char)9] [i_1 - 1] [(unsigned char)9]) != (((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) ((arr_10 [i_1 + 2]) + (arr_10 [i_1 + 1]))))));
                        arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 1] = ((/* implicit */unsigned int) (-(((long long int) arr_7 [6U] [i_1] [i_2]))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
    var_14 = ((/* implicit */short) ((((((/* implicit */int) ((unsigned char) 268435424ULL))) << (((var_1) - (1889861829))))) == (((/* implicit */int) var_7))));
}

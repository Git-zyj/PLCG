/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125110
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
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_2 [(short)3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0 + 2]) : (((/* implicit */int) var_7))))) / (((unsigned int) var_2))));
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((unsigned char) ((short) var_6))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        for (signed char i_2 = 3; i_2 < 21; i_2 += 2) 
        {
            {
                arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7))))) ^ (((/* implicit */int) ((arr_3 [i_1 - 1] [i_1 + 2]) != (((/* implicit */int) var_2)))))));
                /* LoopNest 2 */
                for (short i_3 = 3; i_3 < 21; i_3 += 2) 
                {
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        {
                            arr_17 [i_1] [i_2 + 1] [(signed char)6] [i_4 + 2] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                            var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) (-2147483647 - 1))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

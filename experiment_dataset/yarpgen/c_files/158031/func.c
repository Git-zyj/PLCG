/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158031
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) (-(arr_1 [i_0])));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */signed char) arr_5 [i_2] [(short)21] [i_0])), (arr_0 [i_0])))) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))));
                    arr_10 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_4 [i_0] [i_1] [i_2])));
                    var_10 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((3771842600U), (((/* implicit */unsigned int) (unsigned short)64)))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) (signed char)-1)), (((1504850611U) << (((/* implicit */int) (_Bool)1)))))), (((/* implicit */unsigned int) var_6))));
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            {
                arr_16 [i_4] [i_4] [i_3] = ((/* implicit */int) (~((~(arr_15 [i_3])))));
                var_11 = ((/* implicit */unsigned int) ((unsigned long long int) max((min((var_8), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) arr_12 [(short)7])))));
                arr_17 [i_4] = ((/* implicit */long long int) ((signed char) var_2));
                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (-(((/* implicit */int) min((var_2), (((/* implicit */short) arr_6 [(short)12] [(unsigned char)12] [i_3])))))))))))));
            }
        } 
    } 
}

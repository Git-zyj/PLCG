/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178824
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
    var_19 = ((/* implicit */long long int) (+((~((~(((/* implicit */int) var_5))))))));
    var_20 = ((/* implicit */unsigned char) ((var_10) > (var_3)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [12] [12] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) | (arr_2 [(unsigned short)3] [i_1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (~(arr_3 [i_0 - 2] [i_1] [i_0 - 2])))) : (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 + 1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(arr_11 [i_0 + 1] [i_3 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [0ULL])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_0 [i_2] [i_1 - 1])))))))) && ((!(((/* implicit */_Bool) max((arr_1 [i_2] [i_1]), (arr_1 [i_0] [(_Bool)1]))))))));
                            arr_12 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */short) arr_2 [i_0 + 1] [i_0 + 1] [i_0]);
                        }
                    } 
                } 
                arr_13 [i_1] [i_1 - 1] = ((/* implicit */short) (+(((arr_11 [i_0] [i_1 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [(signed char)2])))))));
            }
        } 
    } 
}

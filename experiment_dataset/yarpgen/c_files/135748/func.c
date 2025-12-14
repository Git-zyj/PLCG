/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135748
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
    var_17 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1])) * (((((/* implicit */int) arr_8 [9LL] [i_1] [i_1] [i_3])) * (((/* implicit */int) arr_1 [i_0 + 1]))))));
                            arr_9 [i_0] [i_1] [16] [i_3] = ((/* implicit */long long int) arr_0 [i_0]);
                            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)16489)), (max((arr_2 [i_1] [i_1]), (((/* implicit */long long int) (short)28419))))));
                            var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_4 [i_3 + 1] [i_1] [i_3 + 1] [i_3 + 1])) / (var_7)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))) & (arr_7 [i_0] [10] [i_0 - 1] [10]))))))) * (max((-1), (((/* implicit */int) ((unsigned short) arr_6 [(short)12] [i_1] [8ULL] [(short)12]))))))))));
                arr_11 [i_1] [(unsigned char)21] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_3 [i_1] [(_Bool)1] [i_0 - 1]), (arr_3 [i_1] [i_1] [i_0 + 1])))) == (((/* implicit */int) arr_3 [i_1] [i_1] [i_0 - 1]))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min(((~(arr_5 [(unsigned short)18] [i_0] [i_0] [i_1]))), (((/* implicit */unsigned long long int) (_Bool)1)))))));
            }
        } 
    } 
}

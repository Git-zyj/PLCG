/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175344
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [(signed char)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) arr_9 [i_1] [i_3] [i_1] [(unsigned char)14] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_0 + 1] [i_1 + 3] [i_2 + 1])), (max((arr_1 [i_0] [i_1]), (var_13)))))) : (min((562941363486720ULL), (((/* implicit */unsigned long long int) min((arr_4 [(unsigned short)5] [(unsigned char)0] [(unsigned char)0]), (((/* implicit */long long int) -732618521)))))))));
                            arr_11 [i_3] [i_3] [i_1 + 3] [i_3] [i_0 + 1] = arr_0 [i_0 + 1] [i_1 - 1];
                        }
                    } 
                } 
                arr_12 [i_1 - 2] [(unsigned char)10] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 + 2])) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (unsigned char)104)) - (84)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned char)157))))))), (var_16)));
}

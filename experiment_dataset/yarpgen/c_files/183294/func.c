/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183294
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) max((min((arr_4 [i_1]), (arr_4 [i_1]))), (((/* implicit */unsigned int) ((unsigned char) (_Bool)1)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_3])), (var_12)))), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) & (((long long int) arr_5 [i_1] [i_3]))))));
                            arr_13 [i_1] [i_1] [i_1] = ((((/* implicit */int) ((unsigned char) ((unsigned int) arr_7 [i_0] [i_1] [i_2] [i_3])))) + (((((/* implicit */int) arr_10 [17ULL] [i_1])) % (((/* implicit */int) arr_10 [i_0] [i_3])))));
                            arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_7 [i_0] [(unsigned char)16] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (var_3))) : (((/* implicit */unsigned int) min((arr_7 [i_0] [i_0] [i_2] [i_3]), (arr_7 [i_0] [i_1] [(unsigned short)22] [i_3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_1);
    var_16 = ((/* implicit */signed char) -26LL);
}

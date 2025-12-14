/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142622
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
    var_12 = ((/* implicit */short) var_9);
    var_13 = (unsigned char)255;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((_Bool) ((arr_7 [i_0] [i_1]) ? (arr_10 [i_1] [i_1] [i_1] [i_1 + 1]) : (arr_10 [i_1] [i_1] [i_1] [i_1 - 1]))));
                            var_14 = ((/* implicit */unsigned int) var_8);
                            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((((+(((/* implicit */int) var_1)))) >= (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0] [i_0])))))) && (((((long long int) arr_5 [i_0] [i_0] [i_2] [i_0])) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33355)) ^ (((/* implicit */int) (_Bool)0)))))))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) var_0);
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                var_15 = ((/* implicit */unsigned short) arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_8);
    var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9))))))))));
}

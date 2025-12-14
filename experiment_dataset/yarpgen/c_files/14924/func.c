/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14924
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
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))) & (var_4)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_16 = var_3;
                    var_17 = var_14;
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_18 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))));
                    var_19 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0]))));
                }
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    var_20 = ((/* implicit */short) arr_9 [i_0] [i_1] [i_0 - 1] [i_4]);
                    var_21 = ((/* implicit */_Bool) max((var_21), ((((+(((/* implicit */int) var_0)))) < (((/* implicit */int) ((unsigned short) arr_0 [i_4])))))));
                }
                var_22 = ((/* implicit */short) var_3);
            }
        } 
    } 
}

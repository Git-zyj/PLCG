/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144087
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 *= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_4 [i_0] [(short)4]))))), (((int) (signed char)-64))));
            var_19 = ((/* implicit */short) ((((/* implicit */int) var_12)) - ((-(((((/* implicit */int) var_14)) / (((/* implicit */int) arr_4 [i_0] [i_1]))))))));
        }
        arr_6 [i_0] = ((/* implicit */_Bool) (unsigned char)175);
        var_20 = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_2] [i_2] [i_0]))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [i_3]))) ^ (var_1)));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) ((_Bool) var_17));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142332
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
    var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) 955441362)) || (((/* implicit */_Bool) (unsigned char)13))));
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) min((var_15), (max(((+(arr_3 [i_0] [i_1]))), ((-(65520)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_8 [i_2] [i_1] [i_2] [i_1] [i_0] &= (+(arr_4 [i_2] [i_0] [i_0]));
                            var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1])))) || (((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]))));
                            var_17 = ((/* implicit */int) (unsigned char)255);
                        }
                    } 
                } 
                var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)242)) ? (-1546573057) : (72297199)))))) && (((/* implicit */_Bool) arr_3 [i_1] [i_0]))));
                var_19 = (+(max((arr_1 [i_1 - 1] [i_1 + 1]), (arr_1 [i_1 + 1] [i_1 - 1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) (unsigned char)205))))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_7)))))) + (var_9)));
}

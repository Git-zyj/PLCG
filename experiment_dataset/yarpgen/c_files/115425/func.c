/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115425
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
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_14)) >> ((((-(((/* implicit */int) var_12)))) + (52))))), (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))))), (((unsigned char) var_13)))))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) var_12)))) : ((+(((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((unsigned char) var_2))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((unsigned char) var_16)))))) : (((/* implicit */int) var_10))));
                                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_11 [i_0] [i_1])))), (((/* implicit */int) var_7))));
                            var_24 -= ((/* implicit */unsigned char) ((((((/* implicit */int) max((var_5), (var_14)))) - (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_4))))))) != (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (unsigned char)25)))) < (((/* implicit */int) min(((unsigned char)177), ((unsigned char)160)))))))));
                        }
                    } 
                } 
                var_25 = arr_4 [i_0] [i_1] [i_1];
                arr_20 [i_0] [i_1] [i_0] = arr_2 [i_0] [i_0];
            }
        } 
    } 
    var_26 = var_4;
}

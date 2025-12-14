/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118424
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
    var_11 ^= ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)));
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) : (var_8))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_13 ^= arr_1 [i_0];
                    var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-19)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)99)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (131071) : (((/* implicit */int) (_Bool)1))))) ? (((var_1) ? (((/* implicit */int) arr_4 [(unsigned char)6])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [22])))))))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_4))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3] [i_4 - 2] [i_4]);
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18422))) : (1302472367U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_4]))) & (2971295503U))) : (var_8)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
}

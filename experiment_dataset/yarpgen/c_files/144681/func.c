/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144681
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
    var_15 = ((/* implicit */int) ((var_11) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (signed char)114)) - (91)))))) : (var_3)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_0 + 1] [i_1] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1])), (834809435)));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) ((short) arr_0 [2] [2]))) == (((/* implicit */int) ((signed char) arr_1 [i_0 + 1])))))), (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : ((((_Bool)0) ? (1800649698) : (((/* implicit */int) (short)3362)))))))))));
                    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)15862)) ? (((/* implicit */int) (unsigned short)35753)) : (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_2] [i_0])))), (((/* implicit */int) ((_Bool) 3509899729U)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0])) >= (((arr_7 [(_Bool)1] [i_1] [i_2] [i_3]) ? (((/* implicit */int) arr_5 [i_4] [i_3] [i_2] [i_1])) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (_Bool)0)) : (1800649671)))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)57595)))) : (((((/* implicit */_Bool) 1800649671)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))))));
                                var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [9U])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_1]))))));
                                var_20 *= ((_Bool) (unsigned short)15862);
                                arr_11 [i_0] [i_1] [i_1] [i_2] [0] [i_4] = ((/* implicit */unsigned int) arr_0 [(short)0] [0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = var_7;
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_2))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161189
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
    var_19 = var_16;
    var_20 = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) ((_Bool) var_4))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) ((signed char) var_18))), (((short) var_1))))) ? (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) var_8))))) : ((-(((unsigned long long int) var_0))))));
                arr_6 [i_1] [i_0] [8U] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) << (((((((/* implicit */_Bool) (~(var_18)))) ? (((/* implicit */int) min((var_8), (((/* implicit */short) var_3))))) : (((/* implicit */int) ((short) var_16))))) + (3812)))));
                var_22 ^= ((/* implicit */_Bool) ((short) min((var_18), (((/* implicit */unsigned long long int) ((signed char) var_3))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_23 &= ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) ((long long int) var_14))))));
                            var_24 = ((/* implicit */unsigned char) var_3);
                            var_25 = ((/* implicit */short) (~(((((/* implicit */int) ((signed char) var_7))) / (((/* implicit */int) ((signed char) var_5)))))));
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (var_18) : (min((((/* implicit */unsigned long long int) var_4)), (var_14)))))) ? (((/* implicit */int) ((signed char) var_8))) : ((~((~(((/* implicit */int) var_8))))))));
                            var_26 = ((/* implicit */_Bool) (-(max((((/* implicit */int) var_10)), (var_0)))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_17))) ? ((+(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) ((unsigned char) var_17))) ? ((-(((/* implicit */int) var_2)))) : (var_12)))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))), (var_5)));
    var_28 |= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) var_16)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107055
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
    var_18 = var_6;
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)19453)) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) (short)-16))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))))))) : (((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (short)3846)))) : (((/* implicit */int) (unsigned char)193))))));
        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)25949)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-3843))));
        var_21 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32767))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (unsigned char)207);
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        for (unsigned char i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_14))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) (short)-15322)))) : (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-3843)))))))))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15350)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (short)-1024))))) ? (((/* implicit */int) (unsigned char)52)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-3843)) : (((/* implicit */int) var_2))))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)29013)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) (unsigned char)1))));
                arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-3847), (((/* implicit */short) var_17))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (short)540))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)22))));
            }
        } 
    } 
}

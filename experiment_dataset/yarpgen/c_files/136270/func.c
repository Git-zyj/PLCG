/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136270
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */int) max((arr_1 [i_0] [i_0 + 1]), (max((arr_1 [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) 4241588800U)), (var_17)))))));
        var_21 = (_Bool)1;
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */long long int) (_Bool)1);
        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [(unsigned char)9]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (-2147483647 - 1));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        arr_16 [i_3] |= ((/* implicit */int) var_17);
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */long long int) (-(var_4)))) : (var_3)));
                        var_24 = ((/* implicit */unsigned char) ((unsigned short) arr_15 [i_1] [i_2]));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_21 [i_5] = ((/* implicit */long long int) ((1776074771U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5])))));
        var_25 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)(-127 - 1)))));
        var_26 -= var_5;
    }
    var_27 = ((/* implicit */unsigned long long int) var_1);
    var_28 += ((/* implicit */short) (_Bool)1);
}

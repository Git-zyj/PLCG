/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175565
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((short) 1411865665)))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((_Bool) ((signed char) ((unsigned int) var_13)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((unsigned short) var_2)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) var_12)))))));
        var_18 -= ((/* implicit */long long int) ((((int) var_7)) ^ ((~(((/* implicit */int) ((short) var_13)))))));
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
        arr_7 [i_1] |= ((/* implicit */long long int) ((unsigned long long int) ((int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))));
    }
    for (unsigned char i_2 = 4; i_2 < 18; i_2 += 1) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((((((/* implicit */_Bool) (short)63)) ? (((/* implicit */int) (unsigned short)19461)) : (((/* implicit */int) (unsigned char)112)))) % (((/* implicit */int) (unsigned char)112)))))))));
        var_21 -= ((/* implicit */int) ((_Bool) (+(var_6))));
        var_22 = ((/* implicit */unsigned long long int) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((long long int) var_2)))))));
        var_23 = ((/* implicit */unsigned int) ((int) ((unsigned int) ((unsigned short) var_9))));
    }
    var_24 *= ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) ((short) (unsigned short)11435))))));
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                arr_16 [i_3] [i_3] = (-(var_14));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_8))));
            }
        } 
    } 
}

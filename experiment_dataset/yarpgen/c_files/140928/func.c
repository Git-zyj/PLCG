/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140928
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [(short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_4) : (((/* implicit */int) (unsigned short)22323))));
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_16 = ((((((long long int) var_2)) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) - (1013815500U)))))) ? (min((arr_3 [i_1]), (((((/* implicit */_Bool) 1013815496U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))))) : (((/* implicit */long long int) min((3281151795U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_1] [11ULL])))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_17 -= min((3958060581U), (max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)105))))), (arr_4 [i_4]))));
                        var_18 += ((/* implicit */int) ((min((((/* implicit */long long int) (_Bool)1)), (3487529543517242399LL))) / (((/* implicit */long long int) (-(((/* implicit */int) min(((short)-13128), (((/* implicit */short) (_Bool)1))))))))));
                        var_19 *= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_4 [i_4]))) >= (((/* implicit */int) (short)32746))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */signed char) ((unsigned char) (_Bool)1));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3281151795U))))))))));
        arr_18 [i_5] [i_5] = ((/* implicit */int) ((short) (+(arr_3 [i_5]))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) arr_0 [i_6] [i_6]);
        var_22 = ((/* implicit */unsigned long long int) arr_21 [i_6]);
    }
    var_23 &= ((/* implicit */signed char) var_4);
}

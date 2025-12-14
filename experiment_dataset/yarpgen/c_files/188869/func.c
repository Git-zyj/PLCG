/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188869
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [16] = ((/* implicit */signed char) (short)-10319);
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) 917613411)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10318))) : (3047635177U))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(2801644630U)))) ? (((/* implicit */int) arr_10 [14])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [6ULL] [i_2] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)255)))))))))));
                    var_15 *= max(((short)-32761), ((short)(-32767 - 1)));
                    var_16 = ((/* implicit */int) (~(min((6405051283809006213ULL), (((/* implicit */unsigned long long int) 1247332112U))))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) arr_5 [i_1]);
    }
    var_18 = ((/* implicit */long long int) (short)7708);
    var_19 = ((/* implicit */int) min((var_19), (min((((/* implicit */int) var_0)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
    var_20 += ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (min((max((3047635184U), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) min((var_9), ((short)(-32767 - 1)))))))));
}

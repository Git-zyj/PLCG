/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145744
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)11)))))));
    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) ^ (((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)245))))) : (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (0U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))));
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned short) 18446744073709551612ULL));
                    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)55176))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2542)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_11 [8U] [i_3] &= ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3]);
        arr_12 [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 268173312U)), ((((((_Bool)1) ? (((/* implicit */long long int) 3610334094U)) : (2016375901238778482LL))) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)2542)))))))));
    }
}

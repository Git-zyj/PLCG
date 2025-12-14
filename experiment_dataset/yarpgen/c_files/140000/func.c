/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140000
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (min((max((-7202363015946479450LL), (0LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_14))))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_1 - 1] [i_1 - 1]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 995169507626286360LL))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_5 [12] [i_1] [i_2])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (max((var_5), (((/* implicit */unsigned long long int) arr_3 [i_2])))))))));
                    arr_7 [i_2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)20720)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36868)) ? (((/* implicit */int) (unsigned short)44841)) : (((/* implicit */int) (short)-19833))))) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (unsigned short)44803))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (~(max(((~(((/* implicit */int) var_1)))), ((~(((/* implicit */int) (unsigned short)20720))))))));
                }
            } 
        } 
    } 
}

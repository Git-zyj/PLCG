/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113083
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-85))))), (((signed char) arr_2 [i_0] [i_1]))));
                        arr_10 [i_0] = ((/* implicit */unsigned short) 2673615935U);
                        arr_11 [(short)18] [i_1] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_0]);
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_5))));
                    }
                } 
            } 
        } 
        var_16 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)54048), (((/* implicit */unsigned short) (unsigned char)68))))) ^ (((/* implicit */int) (signed char)-93))))) : (4294967295U));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_2))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) arr_12 [i_4]);
        arr_16 [i_4] [9LL] = ((/* implicit */unsigned short) var_1);
        var_18 |= ((/* implicit */unsigned short) 1);
    }
    var_19 |= ((/* implicit */unsigned short) (-(((int) (~(924217716U))))));
    var_20 |= ((/* implicit */unsigned char) var_5);
}

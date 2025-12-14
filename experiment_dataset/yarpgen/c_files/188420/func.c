/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188420
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [12U] = (!(((/* implicit */_Bool) (unsigned short)65530)));
                        var_10 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529))) : (-195299672489305745LL)))));
                    }
                } 
            } 
        } 
        var_11 = ((/* implicit */_Bool) (~(arr_5 [i_0] [i_0])));
        var_12 = ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (((/* implicit */int) var_1)));
    }
    var_13 = ((/* implicit */int) min((var_13), ((((~((~(var_2))))) - (((((/* implicit */int) var_8)) * ((-(((/* implicit */int) var_4))))))))));
}

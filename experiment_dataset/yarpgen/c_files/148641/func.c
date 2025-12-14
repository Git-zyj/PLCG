/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148641
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0]))));
                        arr_12 [i_0] [i_2] = ((/* implicit */int) arr_6 [0] [i_1] [i_1]);
                        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                    }
                    arr_13 [i_2] [i_2] = arr_2 [i_0];
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0]))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)20))))) + (var_1)))) || (((/* implicit */_Bool) var_6))));
    var_19 = ((/* implicit */unsigned long long int) var_2);
}

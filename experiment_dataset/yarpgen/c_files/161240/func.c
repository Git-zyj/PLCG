/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161240
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
    var_12 = ((/* implicit */unsigned short) (short)-32758);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) arr_2 [i_0 + 1]);
        var_14 *= ((/* implicit */int) (unsigned short)23051);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32757))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_2] = ((/* implicit */long long int) arr_2 [i_2]);
                    var_15 = ((/* implicit */short) (~(((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) var_3))))));
                    arr_11 [i_0] [i_1 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_6)) >= (arr_9 [(short)4] [1] [i_2 + 2])));
                    arr_12 [i_1] [(unsigned short)11] = ((/* implicit */unsigned short) ((signed char) (short)32755));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */signed char) (-(min((((((/* implicit */int) var_7)) + (((/* implicit */int) var_7)))), (((/* implicit */int) var_4))))));
    var_17 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1620)) ^ (((/* implicit */int) (short)-32757))))) && (((/* implicit */_Bool) var_8))))));
}

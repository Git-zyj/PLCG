/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18634
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (3211017717U)));
        arr_3 [i_0] = ((/* implicit */long long int) var_13);
        arr_4 [i_0] [(unsigned char)14] |= ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_7))))) % (((/* implicit */int) arr_0 [i_0] [17ULL]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1]))))) ? (((/* implicit */int) arr_5 [i_2])) : ((((+(((/* implicit */int) var_8)))) >> (((((/* implicit */int) var_6)) + (41)))))));
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((3211017717U) * (3211017712U)));
                    arr_12 [i_0] [i_0] [i_2] = ((/* implicit */int) ((long long int) (~(1083949578U))));
                    var_16 = ((/* implicit */unsigned char) arr_9 [i_0] [(short)20] [i_2 - 1] [i_2 - 1]);
                }
            } 
        } 
    }
    var_17 = ((/* implicit */short) var_6);
}

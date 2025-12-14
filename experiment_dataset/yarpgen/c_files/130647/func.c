/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130647
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_5))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)238)) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(517254078U)))) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned char)185)))) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] = ((short) 3777713232U);
        var_12 = ((/* implicit */_Bool) min((((/* implicit */int) ((short) max(((unsigned short)15293), (((/* implicit */unsigned short) var_3)))))), (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_8 [11U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned short)50243)), (9662948893104688380ULL))), (((/* implicit */unsigned long long int) 553064187U)))))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((((/* implicit */unsigned int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 517254063U)))))))), (((unsigned int) var_4)))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) max((var_0), (((/* implicit */long long int) var_9))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_14 = ((/* implicit */int) ((long long int) (short)15926));
        var_15 = (short)-16493;
        arr_14 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)7))))) && (((/* implicit */_Bool) var_7))));
        var_16 = (~(8013442541697029326ULL));
    }
}

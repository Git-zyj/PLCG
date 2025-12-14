/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135214
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)19744)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (short)19749)))))))), (max((((/* implicit */unsigned int) (short)-19744)), (3126942665U)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-19745);
        arr_5 [i_0] = arr_0 [i_0] [i_0];
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (var_13)))) - (21987)))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
    {
        var_20 = var_13;
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_3))));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-19745))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9)));
        var_22 = ((/* implicit */long long int) var_7);
        arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_12), ((unsigned short)60438)))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_1))))));
    }
    var_23 = ((/* implicit */unsigned short) 4218751478U);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (short i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            {
                var_24 = (short)-19727;
                var_25 = 1111105407U;
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_13))) - (var_8))), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) var_1)) ? (((var_4) >> (((var_17) + (7569393882760749268LL))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19744))) : (var_7))))) : (((/* implicit */unsigned long long int) (-(var_2))))));
    var_27 = ((/* implicit */short) min((var_27), (max(((short)-19744), ((short)26532)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130037
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
    var_20 = ((/* implicit */signed char) ((max((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), ((~((-9223372036854775807LL - 1LL)))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23377))))))))));
    var_21 = ((/* implicit */long long int) var_12);
    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_19))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = min((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) || (((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)39660))))) ? ((~(((/* implicit */int) (unsigned short)25876)))) : ((-(((/* implicit */int) var_16)))))));
                    arr_8 [12] [i_0] [12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35552)) & (((/* implicit */int) (unsigned short)946))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5891))) > (var_12)))) : (((/* implicit */int) max(((unsigned short)40798), (arr_4 [i_0] [11U]))))))) > (((unsigned long long int) var_14))));
                }
            } 
        } 
    } 
}

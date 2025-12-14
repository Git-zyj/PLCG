/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184425
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) var_1)) + (38))) - (15))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_11))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [(short)16])) << ((((+(var_11))) - (1934591878U)))))))))));
                arr_4 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))))), (var_3)))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) * (((/* implicit */int) (short)27825)))) - (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_4)), (var_3)))) ? (max((0U), (((/* implicit */unsigned int) (unsigned short)53843)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27825)) ? (((/* implicit */int) (short)-27826)) : (((/* implicit */int) (_Bool)1))))))))))));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_2) || (((/* implicit */_Bool) var_6)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) && (((((/* implicit */_Bool) 5849677854161029454ULL)) || (((/* implicit */_Bool) 12597066219548522162ULL))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 932539186U)) || (((/* implicit */_Bool) (signed char)124)))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156887
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
    var_15 &= ((/* implicit */signed char) (~((+(min((((/* implicit */unsigned int) var_9)), (var_3)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) arr_1 [i_0] [17]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_0] &= ((/* implicit */unsigned char) ((arr_1 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) ((max((var_1), (((/* implicit */unsigned int) var_6)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) < (var_13)))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((2452466554025531812ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))) > (var_14))))));
            arr_6 [i_0] [i_1] [(unsigned char)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-16550)) || (((/* implicit */_Bool) (short)13256))));
            arr_7 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) && ((_Bool)0)))), (((((unsigned long long int) 4051650111U)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57729)) ? (((/* implicit */int) (signed char)57)) : (2147483647))))))));
        }
        var_17 += ((/* implicit */short) arr_0 [i_0]);
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((557581223U) & (var_1)))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_9))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((min((var_2), (var_2))) + (2147483647))) >> (((((/* implicit */int) var_12)) - (248))))))));
}

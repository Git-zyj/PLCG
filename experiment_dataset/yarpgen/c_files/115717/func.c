/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115717
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
    var_10 = ((/* implicit */long long int) var_9);
    var_11 = ((/* implicit */short) var_6);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (min((var_6), (((/* implicit */unsigned long long int) (short)-23993)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 16207274810779990448ULL))))))))) && (((/* implicit */_Bool) var_9))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_1 [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (max((((16207274810779990448ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)26955)) : (((/* implicit */int) (short)3840))))))) : ((((-(var_4))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_13 = 2147483647U;
            var_14 = ((/* implicit */unsigned int) var_8);
        }
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_15 = ((/* implicit */_Bool) arr_1 [i_0]);
            var_16 = ((/* implicit */short) ((((unsigned long long int) max((((/* implicit */long long int) (short)-16699)), (-1621311225146527974LL)))) >> (((max(((-(var_0))), (((/* implicit */long long int) var_9)))) - (8188824762224420699LL)))));
        }
    }
}

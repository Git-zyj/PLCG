/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157778
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
    var_18 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_1] [(signed char)9] = ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-26388)), (25ULL)))) ? (((((/* implicit */_Bool) arr_3 [0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))) : (18446744073709551600ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_1])) * (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_5)))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_2 [i_0] [(signed char)8])))), (((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(var_6))) ? ((~(15499778128755744980ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (short)26388))))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) & (((var_0) ? (4118639363213606950ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
    var_20 = ((/* implicit */int) var_14);
}

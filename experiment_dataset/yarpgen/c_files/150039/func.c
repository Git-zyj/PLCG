/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150039
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((long long int) (unsigned short)58535));
        arr_4 [i_0] [i_0] = (~(((/* implicit */int) var_14)));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_20 *= ((/* implicit */unsigned char) min((max((arr_7 [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) % (((/* implicit */int) (unsigned short)62612))))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))))), (min((((/* implicit */unsigned int) (unsigned short)63072)), (1109370002U)))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)7001)))))))) / (arr_5 [i_1]))))));
        var_22 *= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3274159260U)), (arr_5 [i_1])))) && (((/* implicit */_Bool) min((arr_7 [i_1]), (((/* implicit */unsigned int) ((int) (signed char)-12)))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153877
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
    var_14 = ((/* implicit */signed char) var_3);
    var_15 += ((/* implicit */int) 6376758787107290788ULL);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) min(((+(arr_0 [i_0]))), (((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        arr_6 [(signed char)7] = ((/* implicit */unsigned short) ((var_11) ? (min((((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (signed char)86))))))) : (((/* implicit */int) (!(arr_5 [i_1 - 2] [i_1 - 1]))))));
        arr_7 [i_1] &= ((min(((((_Bool)1) ? (1422125120272485543ULL) : (17024618953437066073ULL))), (max((arr_1 [i_1] [i_1 + 1]), (var_13))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3916050786529085416ULL)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_10))))));
        arr_8 [i_1] = ((/* implicit */short) arr_3 [i_1]);
    }
}

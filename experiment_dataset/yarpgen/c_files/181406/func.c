/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181406
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_13);
        var_14 = ((/* implicit */unsigned short) ((signed char) (-(((int) arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_3 [i_1]), (arr_3 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)13392), (((/* implicit */unsigned short) arr_5 [i_1])))))) : (max((arr_0 [i_1]), (((arr_5 [i_1]) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))))));
        arr_6 [(unsigned char)14] = ((/* implicit */int) min(((((!(((/* implicit */_Bool) arr_0 [16ULL])))) ? (532676608U) : (((/* implicit */unsigned int) arr_1 [i_1])))), ((+(((unsigned int) var_7))))));
        arr_7 [i_1] = min((3762290687U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3762290687U)) ? ((-(((/* implicit */int) arr_5 [i_1])))) : ((~(((/* implicit */int) (short)30543))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */long long int) 532676609U);
        var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) : (min((((/* implicit */unsigned int) (_Bool)0)), (var_6)))))), (min((((/* implicit */long long int) var_10)), (arr_8 [i_2 - 2])))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_1);
}

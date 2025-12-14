/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127141
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (max((-6193431225872439884LL), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */int) (unsigned short)65525)) == (((/* implicit */int) (unsigned char)81)))), (((((/* implicit */unsigned long long int) 1902996697)) >= (12855746517634187315ULL)))))))));
    var_14 = ((/* implicit */long long int) (_Bool)0);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_2 [(unsigned char)12] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)2)) ^ (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = (-(((/* implicit */int) (signed char)-31)));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_8 [i_1] = -1291351524;
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned short)8345)), (0))), (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) (+(794336321)))) : (((((/* implicit */_Bool) min((2271024856721831787ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) ? (5122916730664580765LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)32757))));
        arr_10 [(unsigned char)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((arr_1 [i_1] [i_1]), (((_Bool) var_12))))) : (((/* implicit */int) ((unsigned short) ((arr_1 [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31476))) : (1125899906842623LL)))))));
    }
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_4)), (var_3))), (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))) : (((((/* implicit */_Bool) (unsigned char)13)) ? (29U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8195))))))))))));
}

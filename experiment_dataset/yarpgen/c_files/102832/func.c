/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102832
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) max(((~(var_14))), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) max((183632824446623432LL), (((/* implicit */long long int) (unsigned char)15))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) ^ (var_9))));
        var_18 = ((/* implicit */unsigned char) min((arr_0 [(unsigned short)5]), (((((/* implicit */_Bool) max((183632824446623432LL), (((/* implicit */long long int) (signed char)-42))))) ? (var_6) : (min((((/* implicit */long long int) arr_1 [i_0])), (var_12)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (max((0LL), (arr_0 [(unsigned short)1]))) : (((var_16) / (var_13))))) * (var_0)));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)15)) ^ (((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)-29)), (-1153481931)))) : (arr_6 [i_1])));
        var_19 = ((/* implicit */unsigned char) (~(var_15)));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) (((~(2721470399112566014LL))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1153481931))))))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) var_8);
        var_20 = ((/* implicit */unsigned short) var_4);
    }
    var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) var_2))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))))), (var_0)));
    var_22 = ((/* implicit */long long int) var_15);
}

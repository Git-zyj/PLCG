/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125666
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
    var_18 = ((/* implicit */short) min((((((((/* implicit */_Bool) 2147483647)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (max((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (33554430))))))));
    var_19 = (~(((/* implicit */int) var_15)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0] [(unsigned char)0]))) >= (((((arr_0 [i_0] [i_0]) + (2147483647))) >> (((arr_0 [i_0] [i_0]) + (1620090891)))))));
        arr_2 [i_0] = ((/* implicit */int) arr_1 [(unsigned char)5]);
        arr_3 [(short)8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_13), (((/* implicit */short) var_12))))) ? (((/* implicit */unsigned int) -33554431)) : (max((((/* implicit */unsigned int) (unsigned short)65535)), (var_0)))))) ? (((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */int) ((8388607U) == (((/* implicit */unsigned int) 33554430)))))))) : (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)31)) : (arr_0 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = max(((unsigned char)13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)30)), (var_17))))))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_10))));
        arr_9 [i_1] [i_1] = (_Bool)1;
    }
    for (unsigned char i_2 = 3; i_2 < 8; i_2 += 4) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_10 [i_2 - 2])))) << (((var_9) ? (131056) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-30)) || (((/* implicit */_Bool) var_0))))))))))));
        var_23 = ((/* implicit */unsigned char) arr_1 [i_2]);
        arr_13 [i_2] = ((/* implicit */signed char) (unsigned short)60);
        arr_14 [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) 6917529027641081856ULL));
        arr_15 [(unsigned char)1] = ((/* implicit */unsigned short) ((unsigned int) arr_7 [(unsigned char)4]));
    }
}

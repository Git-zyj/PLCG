/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173016
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (6711461796157775313LL) : (6711461796157775293LL))));
        arr_4 [(short)5] [i_0] = ((/* implicit */_Bool) ((((unsigned int) (short)8304)) << (((max((((var_7) ? (((/* implicit */int) (short)-17340)) : (((/* implicit */int) arr_2 [(short)3] [i_0])))), (((/* implicit */int) var_5)))) - (79)))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3254504498U)) ? (833968740) : (7)))) ? (((/* implicit */int) ((_Bool) 2055393099))) : (((/* implicit */int) (unsigned char)219)))) << (((((((/* implicit */int) arr_2 [i_1] [i_1])) << (((((/* implicit */int) (unsigned short)65524)) - (65518))))) - (11304)))));
        arr_8 [i_1] [i_1] |= ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
        arr_9 [i_1] [i_1] = ((/* implicit */short) ((max((18442927654075134571ULL), (((/* implicit */unsigned long long int) (unsigned char)23)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
        var_13 += ((/* implicit */signed char) max((max((((/* implicit */int) max((arr_2 [i_1] [i_1]), (((/* implicit */unsigned char) arr_0 [i_1]))))), ((-(((/* implicit */int) var_12)))))), (((int) min((var_2), (2278322797U))))));
    }
    var_14 = ((/* implicit */unsigned long long int) var_2);
    var_15 = ((/* implicit */unsigned short) (-(2910118870U)));
    var_16 = min((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-39)) > (((/* implicit */int) var_1)))) ? (var_3) : (((((/* implicit */_Bool) var_4)) ? (764998949) : (((/* implicit */int) var_11))))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (var_4))));
}

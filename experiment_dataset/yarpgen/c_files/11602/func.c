/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11602
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_10 = arr_3 [i_0 + 2];
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) max(((~(1018960792))), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)10)) - (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(-995633163))))));
        var_12 += ((/* implicit */unsigned int) ((int) ((((int) (short)325)) / (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_8))))))));
        arr_9 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (unsigned char)5))), ((unsigned short)58493)));
        var_13 = arr_6 [i_1] [i_1];
        var_14 += ((/* implicit */signed char) (-((~(((/* implicit */int) arr_8 [i_1] [i_1 - 2]))))));
    }
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_15 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((8925764069968997188ULL) / (9520980003740554410ULL)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 8925764069968997188ULL)) ? (((/* implicit */int) var_1)) : (arr_11 [i_2] [i_2])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (unsigned char)248))))) - (max((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2])), (8925764069968997188ULL)))))));
        var_16 = ((/* implicit */_Bool) (((+((~(((/* implicit */int) var_6)))))) / (((/* implicit */int) max((((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), (var_9)))), (((unsigned char) var_8)))))));
    }
}

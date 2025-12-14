/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107673
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_10 *= ((((/* implicit */_Bool) ((int) ((signed char) arr_4 [i_0] [7ULL] [i_0])))) ? (((long long int) min((((/* implicit */long long int) arr_3 [i_1 + 3])), (-7618920745927027917LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_0 [(signed char)6] [i_1])))) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                var_11 = ((unsigned short) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_1)) + (17122)))));
                var_12 *= ((/* implicit */_Bool) min((max((arr_0 [i_1 + 3] [i_1 + 4]), (arr_0 [i_1 + 3] [i_1 + 3]))), (((((/* implicit */_Bool) 11929517211756961108ULL)) ? (arr_0 [i_1 - 2] [i_1 + 2]) : (arr_0 [i_1 + 2] [i_1 + 4])))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-55))))), (((unsigned char) 6517226861952590507ULL))))), ((~(((/* implicit */int) var_3)))))))));
    var_14 = ((/* implicit */short) var_9);
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (((~(((/* implicit */int) var_7)))) - ((~(var_9))))))));
}

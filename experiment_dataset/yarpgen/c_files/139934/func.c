/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139934
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) (unsigned char)70)), (var_10)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [6LL]))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (min((((/* implicit */unsigned long long int) min(((-(var_9))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [2U])) : (((/* implicit */int) arr_2 [2] [2]))))))), ((~(max((((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned char)0])), (var_0)))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((2147483647) >> (((5517601034437745205ULL) - (5517601034437745193ULL)))))))) ? (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? ((~(((/* implicit */int) (unsigned char)50)))) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) var_6))));
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_9) >= (((/* implicit */int) arr_1 [i_0])))))));
        var_16 = ((/* implicit */unsigned int) var_0);
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)246)) >= (((/* implicit */int) var_5)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57))))))))))))));
}

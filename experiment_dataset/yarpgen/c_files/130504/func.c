/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130504
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
    var_14 = ((/* implicit */unsigned long long int) var_5);
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (((/* implicit */short) var_4)))))) : (min((var_6), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11)))))) : (min((min((var_0), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))))))));
    var_16 = ((/* implicit */unsigned char) min((max((max((((/* implicit */long long int) var_10)), (var_5))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_11)) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((var_3), (((/* implicit */unsigned int) var_12)))))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned char) var_9))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_13))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_0 [i_0])), (min((((/* implicit */long long int) (unsigned short)16001)), (7596762321280035137LL))))), (((/* implicit */long long int) max((min((((/* implicit */short) arr_2 [i_0 + 2])), (arr_0 [i_0 + 2]))), (max((var_2), (arr_0 [i_0]))))))));
        var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)55)), (max((((/* implicit */unsigned int) min((((/* implicit */signed char) arr_1 [i_0 + 2])), ((signed char)-80)))), (min((((/* implicit */unsigned int) (signed char)-71)), (var_11)))))));
    }
}

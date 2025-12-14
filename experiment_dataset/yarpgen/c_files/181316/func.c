/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181316
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
    var_19 = ((/* implicit */long long int) var_12);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)1)), (min((max((1876594363765077547ULL), (((/* implicit */unsigned long long int) (unsigned char)34)))), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)50))))))));
        var_20 = max((max((var_7), (((/* implicit */long long int) (!(((/* implicit */_Bool) -3670862539234961772LL))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */long long int) (signed char)-74)))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_7))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((unsigned short) max((min((var_9), (((/* implicit */unsigned short) var_8)))), (((/* implicit */unsigned short) (unsigned char)129)))));
    var_23 = max((max((max((((/* implicit */long long int) var_12)), (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)224))))))), (((/* implicit */long long int) var_12)));
    var_24 -= ((/* implicit */signed char) var_17);
}

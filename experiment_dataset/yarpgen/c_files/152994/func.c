/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152994
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8454))))) ? (((unsigned long long int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1457472761U)) != (min((((/* implicit */unsigned long long int) 4294967289U)), (31ULL)))));
    }
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */int) (signed char)-51)), (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)50)), (var_12)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) var_5)))))))))));
}

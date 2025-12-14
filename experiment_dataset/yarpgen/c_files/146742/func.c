/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146742
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
    var_11 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) 18U))))) ? (((((/* implicit */_Bool) 18U)) ? (20U) : (((/* implicit */unsigned int) -331613815)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) ((_Bool) var_1)))));
    var_12 = ((/* implicit */int) var_5);
    var_13 = ((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_2)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) -619703333)), (max((9223372036854775807LL), (((/* implicit */long long int) -1297124287))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) 331613815)))))) : (9223372036854775807LL));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (signed char)-76)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) 331613824)))), (((/* implicit */long long int) ((((/* implicit */int) min((var_2), ((signed char)(-127 - 1))))) % (((/* implicit */int) ((short) arr_1 [i_0] [i_0])))))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (+(min((var_3), (arr_1 [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [(signed char)1] [i_0]))))) : (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (signed char)22))))));
    }
}

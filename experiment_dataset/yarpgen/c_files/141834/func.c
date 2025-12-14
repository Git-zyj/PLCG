/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141834
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */int) (((-2147483647 - 1)) < (2147483647)))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) < (arr_0 [i_0])))));
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((var_2) < (arr_0 [i_0])))) < (((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) < (arr_1 [i_0]))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) < (var_1)))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752))) < (8311142908834041510ULL))))));
    }
    var_22 = ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)114)), (1073741822LL)));
    var_23 = ((/* implicit */int) min((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)27190)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_14)), ((unsigned short)52480))))) < (min((var_10), (((/* implicit */unsigned long long int) var_8))))))));
}

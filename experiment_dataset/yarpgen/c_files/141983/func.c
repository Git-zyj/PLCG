/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141983
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
    var_13 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [(_Bool)1] = (+(((/* implicit */int) arr_0 [i_0])));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)129)) && (((/* implicit */_Bool) arr_2 [i_0]))));
        arr_6 [(unsigned char)18] [(unsigned short)20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned char)0])) ? (((13539822312943015465ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (11284785997441222889ULL)));
        arr_7 [(signed char)10] [i_0] = ((/* implicit */signed char) ((arr_2 [2U]) >> (((2199023253504LL) - (2199023253494LL)))));
    }
    var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)144))))) ? (((/* implicit */int) min((var_9), (((/* implicit */short) (unsigned char)101))))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)144)), (var_9)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 870377206)) && (((/* implicit */_Bool) -727047630))))))));
    var_15 = ((/* implicit */signed char) ((unsigned short) var_5));
}

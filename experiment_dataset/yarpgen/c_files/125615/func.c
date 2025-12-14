/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125615
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) >= (((/* implicit */int) arr_0 [i_0 + 1])));
        arr_3 [i_0] = arr_1 [i_0 + 1] [i_0];
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) var_3))))) : ((((_Bool)0) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-81))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0] [11ULL]) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) arr_0 [i_0]))));
    }
    var_19 = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_0)))))), (((((/* implicit */_Bool) ((var_10) ? (13102902641538844116ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((_Bool) var_2))) : (((((/* implicit */int) var_0)) % (((/* implicit */int) var_17))))))));
    var_20 = min((var_18), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_10))))))));
    var_21 = ((/* implicit */unsigned long long int) ((max(((~(((/* implicit */int) var_3)))), ((+(((/* implicit */int) (signed char)118)))))) <= (((((/* implicit */int) var_2)) % (((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))))));
}

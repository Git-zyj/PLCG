/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172768
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = arr_1 [i_0] [i_0];
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 7568333841783922651LL)) ? (4036869453691341837LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_11))))))))))));
        arr_4 [4ULL] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_0 [9ULL] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
    }
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) max(((unsigned short)65527), (((/* implicit */unsigned short) var_11))))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned short)35))))) - (var_2)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))));
}

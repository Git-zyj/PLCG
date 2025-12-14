/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164656
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) 131071ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (131071ULL))))));
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (18446744073709420544ULL))) > (((/* implicit */unsigned long long int) (-(arr_2 [i_0] [i_0]))))));
        var_16 = ((/* implicit */unsigned short) min((max(((-(var_9))), (((/* implicit */int) ((((/* implicit */int) (signed char)-113)) != (((/* implicit */int) arr_1 [i_0] [i_0]))))))), (((int) (-(((/* implicit */int) (unsigned short)0)))))));
        var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((long long int) var_5)))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (var_8)))) : (max((arr_2 [i_0] [i_0]), (((/* implicit */int) (_Bool)0))))))));
    }
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((var_4), (var_3))))));
}

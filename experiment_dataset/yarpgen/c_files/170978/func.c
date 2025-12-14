/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170978
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
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!((_Bool)1)))), (min((min((arr_1 [i_0]), (((/* implicit */unsigned int) (signed char)0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_3 [i_0] [16ULL] |= ((/* implicit */unsigned int) min(((((_Bool)1) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)-74))));
        var_14 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)73)), (var_12)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)85)) || (((/* implicit */_Bool) (-2147483647 - 1))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) min((max((arr_1 [i_1]), (((/* implicit */unsigned int) (unsigned short)33955)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2990453643U)) ? (arr_0 [i_1]) : (arr_0 [i_1]))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (min((arr_5 [9U]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16959)) * (((/* implicit */int) (signed char)-66))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_1])) < (arr_5 [i_1])))))));
    }
}

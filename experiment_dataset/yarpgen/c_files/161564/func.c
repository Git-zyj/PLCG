/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161564
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
    var_12 = var_9;
    var_13 = ((/* implicit */signed char) (-(((/* implicit */int) min(((unsigned short)62000), ((unsigned short)61993))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3544))))) ? ((-(((/* implicit */int) (unsigned short)61991)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61994)) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61991)) ? (((/* implicit */int) (unsigned short)3531)) : (-1033086552)));
        arr_3 [i_0] &= ((/* implicit */int) max((max((((/* implicit */long long int) (unsigned short)34152)), (min((((/* implicit */long long int) (unsigned short)3531)), (arr_2 [i_0] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (max((((/* implicit */unsigned int) var_5)), (3585585901U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 677667790)))))))))));
    }
}

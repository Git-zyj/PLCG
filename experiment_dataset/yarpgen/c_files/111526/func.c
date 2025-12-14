/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111526
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 += arr_2 [i_0] [14];
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3030843373U)), (max((-3384398459117178766LL), (((/* implicit */long long int) (unsigned char)172))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3403701055U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))) : (((((/* implicit */_Bool) 3030843373U)) ? (((/* implicit */unsigned int) 536870912)) : (arr_1 [i_0] [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) 961340559U);
        var_14 = ((/* implicit */unsigned int) 2912200130394778146LL);
        var_15 ^= ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) -631571437528905398LL)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) var_3)))) : (3935506225U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))));
    }
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_4))));
    var_17 = ((/* implicit */unsigned char) (+(min((var_4), (max((961340572U), (((/* implicit */unsigned int) var_3))))))));
}

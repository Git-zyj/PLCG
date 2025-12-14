/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11229
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_11)))))), ((-(max((((/* implicit */unsigned int) var_16)), (3371346601U)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) 3371346626U);
        arr_6 [i_0] = ((/* implicit */short) (-(((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
        arr_7 [8] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_3 [(short)8]), (arr_2 [i_0 - 1])))), ((+(((/* implicit */int) arr_2 [i_0 - 2]))))));
        arr_8 [i_0] [i_0] = ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)194))))) ? (((4645912892001137079ULL) | (arr_1 [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) 923620669U)), (10898119986877289559ULL))))) >> (((/* implicit */int) (_Bool)1)));
    }
    var_20 = ((/* implicit */unsigned short) var_19);
    var_21 = ((/* implicit */_Bool) (~(var_15)));
}

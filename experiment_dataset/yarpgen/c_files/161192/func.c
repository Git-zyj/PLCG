/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161192
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
    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (signed char)-8))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned short) arr_2 [i_0] [i_1])), (arr_1 [i_0] [i_0]))), (arr_1 [i_1 + 3] [i_1 + 1])))) ? (((arr_5 [i_1 + 1] [i_1 + 1]) + (arr_5 [i_1 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)2])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))))));
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 + 1])), (arr_5 [(_Bool)1] [i_1 + 3])))) ? ((+(arr_3 [i_1 + 1]))) : (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) : (5333639096415612439LL)))));
            }
        } 
    } 
    var_21 &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54961)) || (((/* implicit */_Bool) (short)27719)))))) != (((((/* implicit */_Bool) var_14)) ? (var_4) : (var_10))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18684)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (short)32767))));
    var_23 = ((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (var_13)))) ? (max((((/* implicit */unsigned int) (signed char)-47)), (var_17))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_14))))))))));
}

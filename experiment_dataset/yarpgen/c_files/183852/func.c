/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183852
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
    var_13 = ((/* implicit */unsigned short) (signed char)-122);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2]);
                    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)267))))))), (((((/* implicit */int) (short)7)) == (((/* implicit */int) (short)-17))))));
                    arr_7 [i_0] [i_0] [i_2] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)111)), (arr_6 [(short)9])))) / (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? (((/* implicit */int) arr_1 [i_1 - 3])) : (((/* implicit */int) arr_2 [i_2 + 1])))) : (((/* implicit */int) var_12))));
                    var_16 ^= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_0])))))), ((+(((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */int) (short)18)) > (max((((/* implicit */int) max((var_0), ((signed char)95)))), ((~(((/* implicit */int) var_1))))))));
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) max((var_1), (var_5)))), (max((((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (short)-7)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) (unsigned short)258)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)1730))))))));
    var_19 = var_12;
}

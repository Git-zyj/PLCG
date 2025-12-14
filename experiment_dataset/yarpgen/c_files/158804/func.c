/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158804
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]);
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-6249)) ? (2088759806898755358ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63)))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -7088442140380411601LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_2 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (_Bool)1)) - (1505892879))))) : ((~((+(((/* implicit */int) (short)-11233)))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41381)) ? (7088442140380411600LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
}

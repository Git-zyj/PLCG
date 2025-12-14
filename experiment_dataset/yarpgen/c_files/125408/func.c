/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125408
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
    var_19 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 3])) / (((/* implicit */int) (short)-4171)))))));
                arr_6 [(_Bool)0] [i_1] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((/* implicit */int) (short)4145)) : (((/* implicit */int) arr_3 [(short)12] [12ULL]))))), (min((min((((/* implicit */unsigned long long int) var_11)), (15130301254650388113ULL))), (((/* implicit */unsigned long long int) arr_3 [16U] [16U]))))));
                var_20 *= ((/* implicit */unsigned long long int) (-(arr_0 [i_0])));
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1]))) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_4 [i_0 - 3] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (short)4170))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_0 [i_0 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_1 + 2]))))));
            }
        } 
    } 
}

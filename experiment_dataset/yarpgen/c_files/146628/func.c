/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146628
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
    var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)-122)), (var_3)))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)179))))) ? (((/* implicit */int) (signed char)10)) : (-727082757))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 3])) || (((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 1])))))));
                var_16 += arr_2 [i_0] [i_0];
                arr_6 [(unsigned short)21] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) == (((((/* implicit */unsigned int) (-(var_10)))) * (var_11))))))));
    var_18 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned char)4)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
}

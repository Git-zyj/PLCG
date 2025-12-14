/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164369
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
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */int) min((((/* implicit */signed char) var_5)), (arr_3 [i_0] [i_0] [i_1])))) * (((/* implicit */int) arr_5 [i_0] [4LL] [(unsigned short)10])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))) ? (((/* implicit */int) (!(arr_0 [i_0])))) : (((/* implicit */int) min((var_13), ((unsigned short)41910))))))));
                arr_7 [i_0] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 564254931U)), (arr_1 [(unsigned char)0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (arr_6 [i_0] [i_0 - 3] [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-51))))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)41906)) ? (((/* implicit */int) (unsigned short)59294)) : (((/* implicit */int) (unsigned short)41910))));
}

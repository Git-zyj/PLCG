/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175966
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned char)0))))));
        var_17 = ((/* implicit */unsigned long long int) (-(arr_1 [i_0 + 1] [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_1]))));
        var_18 = ((/* implicit */short) (~(arr_3 [i_1])));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (unsigned char)234)))) > (((/* implicit */int) arr_4 [i_1])))))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */int) min((65408U), (((/* implicit */unsigned int) arr_10 [i_2]))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_2 - 1])) : (((/* implicit */int) arr_11 [i_3 - 1] [i_2 - 1])))), (((/* implicit */int) (unsigned short)6124)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)237))));
}

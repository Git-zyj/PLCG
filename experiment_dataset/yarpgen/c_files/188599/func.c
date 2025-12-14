/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188599
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) var_12);
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_2 [i_0] [6U] [i_2]))))) ^ (((/* implicit */unsigned long long int) (~(-701873102256031525LL)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) var_14)), (min(((+(var_15))), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_2)) - (55680))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_11 [i_3] &= (+(((/* implicit */int) arr_6 [18] [i_3] [i_3])));
        var_20 = ((/* implicit */long long int) (-(var_8)));
    }
}

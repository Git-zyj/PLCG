/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132547
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((3353622986185331195LL) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)165)) > (((/* implicit */int) var_4)))))))) ? (((((/* implicit */int) ((_Bool) var_0))) << (((var_1) - (2827835151519414354ULL))))) : (((/* implicit */int) ((((var_5) == (((/* implicit */long long int) ((/* implicit */int) (short)0))))) && (((/* implicit */_Bool) (short)-24)))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_15 -= ((/* implicit */unsigned char) ((var_6) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_5))) - (3614928150LL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-26403)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)4))));
        arr_4 [i_0] = ((/* implicit */short) var_12);
        arr_5 [i_0] = ((/* implicit */short) 21ULL);
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            {
                var_16 ^= ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_1])), (var_10))))));
                arr_10 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (-(var_6)));
            }
        } 
    } 
}

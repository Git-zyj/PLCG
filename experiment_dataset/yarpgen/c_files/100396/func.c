/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100396
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
    var_17 = min((-1435235699184873732LL), (((/* implicit */long long int) (_Bool)1)));
    var_18 = ((/* implicit */short) var_8);
    var_19 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)3595)) < (((/* implicit */int) (unsigned char)166))))) & (((/* implicit */int) arr_0 [i_0 - 1])))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0 - 1]);
    }
    for (int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) min((((long long int) (-(((/* implicit */int) arr_4 [6LL]))))), (max((-7195342217893686394LL), (((/* implicit */long long int) arr_1 [i_1] [i_1 + 1]))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((-211719149), (((/* implicit */int) arr_9 [i_2] [i_1 - 1] [i_2]))))), (((var_2) + (((/* implicit */long long int) min((arr_10 [i_2] [i_2] [i_2]), (((/* implicit */int) arr_0 [i_1])))))))));
                    var_23 *= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3] [i_2 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_2 - 1]))))), (((long long int) (_Bool)1))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) var_15);
}

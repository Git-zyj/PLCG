/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176359
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
    var_20 &= ((/* implicit */short) var_14);
    var_21 |= ((/* implicit */int) min((((min((((/* implicit */long long int) (signed char)-90)), (var_1))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-90))))), (((/* implicit */long long int) max((((((/* implicit */int) var_17)) & (((/* implicit */int) var_8)))), (((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] &= (+(((/* implicit */int) var_4)));
        var_22 = (signed char)-1;
    }
    for (int i_1 = 4; i_1 < 13; i_1 += 2) 
    {
        var_23 -= ((/* implicit */long long int) var_4);
        /* LoopNest 3 */
        for (short i_2 = 3; i_2 < 14; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_5 [i_1] [(short)5])))) & (((/* implicit */int) arr_5 [i_1 - 1] [(signed char)6]))))), (((((unsigned int) arr_6 [i_1] [(signed char)2] [(signed char)8])) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)21))))))))));
                        var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) ^ (var_3))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) (signed char)-66))))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_19)))));
                        var_26 = arr_4 [i_1 + 2];
                    }
                } 
            } 
        } 
    }
    var_27 *= ((/* implicit */short) ((signed char) var_19));
}

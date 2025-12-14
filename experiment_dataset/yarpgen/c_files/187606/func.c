/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187606
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
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(-2109695540)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4099264975645705718LL)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? ((((-(((/* implicit */int) (signed char)3)))) & ((+(((/* implicit */int) (signed char)-3)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-3)) : (var_12)))) == (((((/* implicit */_Bool) var_17)) ? (var_16) : (((/* implicit */long long int) var_5)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_14))));
        var_20 = ((/* implicit */signed char) (+(min((((/* implicit */int) (signed char)8)), (((((/* implicit */int) var_3)) % (((/* implicit */int) var_2))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-110)) < (((/* implicit */int) arr_2 [i_1 + 2]))));
        var_22 = (~(var_11));
        arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967295U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))) : (var_5)))) : (arr_3 [i_1 + 4])));
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)58)) ? (((((/* implicit */long long int) ((/* implicit */int) var_17))) & (var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))))));
    }
    for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_10 [(signed char)11] [(signed char)11] = ((((/* implicit */int) ((arr_6 [i_2]) > (((/* implicit */unsigned int) 131071))))) >> ((((+(((/* implicit */int) var_6)))) - (95))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (int i_4 = 4; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_16 [i_2] |= ((/* implicit */unsigned int) var_7);
                    arr_17 [i_4 - 3] [i_3] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1402618185)) > (4294967287U))))) < (((((/* implicit */_Bool) var_9)) ? (var_16) : (var_16)))))), ((-((+(arr_15 [i_2] [(signed char)15] [(signed char)15] [(signed char)15])))))));
                }
            } 
        } 
        arr_18 [14U] = ((/* implicit */signed char) min((arr_6 [i_2]), (min((arr_12 [i_2] [i_2]), (arr_12 [i_2] [i_2])))));
        arr_19 [i_2] = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) arr_13 [i_2])))))))));
        arr_20 [(signed char)5] = ((/* implicit */signed char) min(((+(arr_6 [i_2]))), (((/* implicit */unsigned int) (-(328822350))))));
    }
}

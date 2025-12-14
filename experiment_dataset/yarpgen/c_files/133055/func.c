/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133055
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((min((((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 - 1])), (((((/* implicit */_Bool) -2371320717571954583LL)) ? (1708132491576559851LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-49))))))), (((/* implicit */long long int) ((((/* implicit */int) ((-210955472) >= (-1154447297)))) < (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        var_14 = ((/* implicit */int) ((arr_1 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) > (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))) : (((((/* implicit */_Bool) 22U)) ? (-2958854228232989719LL) : (1708132491576559851LL)))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 4; i_3 < 18; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_11 [i_3] [i_1 - 1] [i_1 - 1]) > (arr_11 [i_1] [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_2] [i_2])) ? (arr_7 [i_1]) : (arr_5 [1U] [i_1])))))) : (min((((((/* implicit */_Bool) arr_3 [i_1 + 3] [(unsigned char)15])) ? (arr_11 [i_1] [i_1] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_4]))))), (arr_11 [i_3] [i_3] [i_1 + 3]))))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) > (-210955462))) || (((/* implicit */_Bool) arr_4 [i_1] [i_2]))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1 + 2] [i_1] [(signed char)13] [(unsigned char)9]))) & (((arr_10 [i_1] [i_1 - 1] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))) | (((/* implicit */unsigned long long int) ((arr_12 [i_1 + 1]) ? (((/* implicit */int) arr_12 [i_1 + 3])) : (((/* implicit */int) arr_12 [i_1 + 3])))))));
        var_18 = ((/* implicit */signed char) max((arr_8 [i_1] [3] [i_1] [i_1]), (arr_12 [i_1 + 2])));
    }
}

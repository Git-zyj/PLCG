/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124873
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
    var_16 = var_8;
    var_17 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (var_13)))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_0 [5LL])) * (((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) var_6);
            arr_7 [4LL] = var_3;
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (arr_3 [(signed char)9] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_13))) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))))));
            arr_8 [(signed char)6] [(signed char)6] [i_0] = (-(min((var_15), (arr_5 [i_0]))));
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (-((+(arr_5 [i_2 + 1])))));
                        arr_15 [i_0] [i_1] [i_0] [(signed char)9] [i_3] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1734615229850943850LL)) ? (var_8) : (var_15)))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_3]))))))) <= (max((arr_3 [i_2 + 1] [i_2 + 2] [i_2 - 1]), (((/* implicit */long long int) var_7))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_20 ^= ((((/* implicit */_Bool) var_10)) ? (6165597385895524389LL) : (2859570681028662320LL));
                            var_21 = ((/* implicit */signed char) var_0);
                            arr_18 [i_2] [i_0] [i_2] [(signed char)8] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2 + 1] [8LL])) & (((/* implicit */int) arr_1 [i_2 - 1]))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_22 -= ((/* implicit */signed char) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_0])))));
            var_23 = var_15;
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_11))) ? (var_13) : (arr_13 [i_5] [i_5] [i_5] [i_0])));
            var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))));
        }
    }
    var_25 ^= ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
}

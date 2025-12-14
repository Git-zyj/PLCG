/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183809
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
    var_10 = ((/* implicit */signed char) var_4);
    var_11 = ((/* implicit */signed char) ((unsigned long long int) var_8));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_13 ^= var_7;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [(signed char)15] = ((/* implicit */unsigned long long int) var_1);
            var_14 ^= ((/* implicit */signed char) (-(arr_1 [i_0])));
        }
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_2 - 1] [2ULL] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((signed char) var_2));
                            var_16 |= ((unsigned long long int) arr_1 [i_0]);
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (arr_10 [i_2] [(signed char)14] [i_4 + 2])));
                            var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127))));
                        }
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_19 ^= ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2 - 1] [i_6] [i_3 + 2]))) : (arr_2 [i_4 - 1]));
                            arr_21 [i_0] [i_6] |= var_3;
                        }
                        arr_22 [i_0] [i_2 - 1] [i_2] [i_2 + 1] [(signed char)4] [i_2 - 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_3 + 1] [i_4 - 1] [i_0] [i_4 - 1])) ? (((/* implicit */int) arr_19 [i_3 + 2] [i_2 - 1] [i_0] [i_4 - 1])) : (((/* implicit */int) arr_5 [i_3 + 1] [i_2 + 1]))));
                        var_20 = (-(2989242950392273528ULL));
                    }
                } 
            } 
            arr_23 [i_2] [(signed char)19] = ((((/* implicit */_Bool) arr_12 [(signed char)4] [i_2] [i_2])) ? (arr_11 [i_0] [i_2] [i_0] [i_2 + 1]) : (arr_11 [i_2] [i_2] [i_2 - 1] [i_2]));
        }
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-113))));
        arr_24 [i_0] = (-(arr_6 [(signed char)10] [(signed char)4]));
        var_22 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) + (4611686018427387904ULL))) + (arr_1 [i_0]));
        arr_25 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (var_4) : (arr_13 [i_0] [i_0] [i_0])));
    }
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_23 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)85)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (var_8) : (arr_11 [i_7] [i_7] [i_7] [i_7])))) ? (((/* implicit */int) max(((signed char)-23), (var_2)))) : (((/* implicit */int) max((var_6), ((signed char)127))))))));
            arr_31 [i_7] [i_7] [i_8] = max((((/* implicit */unsigned long long int) var_1)), ((-(24ULL))));
        }
        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 2) 
        {
            arr_35 [i_9 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_15 [i_9 - 2]) >> (((((/* implicit */int) arr_26 [i_7])) + (67)))))) ? ((-(((((/* implicit */_Bool) arr_10 [i_7] [i_9 + 4] [i_9 - 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((arr_30 [i_7] [i_7]) >> (((arr_30 [i_7] [i_9 + 1]) - (7437022435552495979ULL)))))));
            var_24 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_4 [i_7] [i_9 + 4] [i_7]))))));
            arr_36 [i_9] = ((((/* implicit */_Bool) arr_29 [i_9 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_9 + 4] [i_9 - 2]), ((signed char)-97))))) : (((((/* implicit */_Bool) arr_13 [17ULL] [i_7] [i_9])) ? (arr_13 [i_7] [i_7] [i_9 + 3]) : (arr_13 [i_7] [i_7] [(signed char)19]))));
        }
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 4) 
            {
                {
                    var_25 = ((/* implicit */signed char) (-((-(9223372036854775776ULL)))));
                    arr_43 [i_7] [i_10] [i_7] = max((((((/* implicit */_Bool) max(((signed char)18), (arr_34 [i_7] [i_10] [i_11 - 2])))) ? (min((var_8), (7792833337139952039ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))), (arr_30 [0ULL] [i_11 - 2]));
                    arr_44 [i_7] [i_10] [i_11 + 1] [i_11 - 1] = ((/* implicit */signed char) ((unsigned long long int) ((min((arr_1 [i_11 + 1]), (((/* implicit */unsigned long long int) (signed char)60)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_26 [i_11 - 1]), ((signed char)-85))))))));
                }
            } 
        } 
        arr_45 [i_7] |= ((((/* implicit */_Bool) arr_0 [(signed char)0] [i_7])) ? (((((/* implicit */_Bool) arr_0 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (623320289637650363ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_7] [i_7])) & (((/* implicit */int) arr_0 [i_7] [i_7]))))));
        arr_46 [i_7] = 16798102612803650119ULL;
        var_26 = ((/* implicit */signed char) (-(((arr_15 [i_7]) * (arr_15 [i_7])))));
    }
}

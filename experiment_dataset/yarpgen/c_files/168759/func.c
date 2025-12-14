/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168759
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) var_8)) : (var_11)))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_8))));
    var_15 = var_12;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
            var_16 = ((/* implicit */signed char) min((var_16), (((signed char) (~(((/* implicit */int) arr_0 [i_0] [(signed char)7])))))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_0 [i_1] [i_1]))));
            arr_5 [i_1] [i_1] = (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])));
        }
        for (int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1])) ? (arr_8 [i_2 - 1] [i_2 + 1] [i_2]) : (arr_8 [i_2 - 1] [i_2 + 1] [(_Bool)0])))));
            var_18 &= ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2 - 2])) ? (arr_9 [i_2] [i_2 + 1]) : (arr_9 [i_2] [i_2 - 2])));
            arr_11 [i_0] = (~(((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))));
        }
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_14 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (arr_8 [i_4 - 1] [6] [i_3 + 1]) : (arr_8 [i_4 + 1] [i_3] [i_3 + 1]))))))));
                        arr_18 [i_0] [i_0] [i_4 + 1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_4 + 2] [i_0])) ? (arr_16 [i_4 + 2] [(signed char)3] [i_4 + 2] [8]) : (arr_16 [i_5] [i_5] [i_4 + 3] [i_4])))) ? (arr_16 [i_5] [9ULL] [i_4 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(signed char)0] [i_5] [i_4 + 1] [i_3 + 1]))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_4 + 1])) ? (((((/* implicit */_Bool) arr_7 [i_3 + 1])) ? (((/* implicit */int) arr_7 [i_3 + 1])) : (((/* implicit */int) arr_7 [i_3 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1])) ? (arr_16 [i_0] [i_3] [i_3] [i_5]) : (arr_16 [i_0] [i_0] [6] [6])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        arr_21 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_6]))))) ? (((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (arr_8 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6]))))) : (((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_6]))) : (arr_2 [i_6] [i_6])))))) ? ((+(arr_2 [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [3ULL] [i_6] [i_6]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_6]))))) : (arr_14 [i_6] [i_6] [i_6] [i_6]))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(arr_15 [9] [i_6] [i_6]))))));
        var_22 += (!((!(arr_15 [i_6] [i_6] [i_6]))));
        arr_22 [i_6] = ((/* implicit */unsigned long long int) (((!(((_Bool) arr_8 [i_6] [i_6] [i_6])))) ? ((((!(((/* implicit */_Bool) arr_3 [i_6] [i_6] [i_6])))) ? (((/* implicit */int) arr_13 [i_6] [i_6])) : (arr_14 [i_6] [i_6] [i_6] [i_6]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6])))))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned long long int) (+(arr_9 [i_6] [i_6])))))));
    }
}

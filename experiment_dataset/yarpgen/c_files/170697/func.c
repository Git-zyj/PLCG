/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170697
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (~(((-1069166204) / (((/* implicit */int) (signed char)(-127 - 1)))))));
        arr_4 [i_0] = arr_0 [i_0] [i_0];
        var_20 = ((/* implicit */long long int) ((int) var_13));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_1 [i_0]))));
            arr_9 [(signed char)6] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) > (arr_1 [i_1 - 1])));
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1]))));
            var_23 -= arr_7 [i_1] [i_1 + 1] [i_1 - 1];
        }
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_12 [i_2] = ((signed char) (~(var_1)));
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) / (var_17)));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    {
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (arr_1 [i_4 + 1]) : (arr_1 [i_4 + 1]))))));
                        var_26 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-103)) + (2147483647))) >> (((var_2) + (1262487953)))));
                        arr_18 [8LL] [i_0] = ((signed char) (-(arr_5 [5LL] [i_2] [(signed char)3])));
                    }
                } 
            } 
        }
        for (long long int i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 2; i_6 < 7; i_6 += 4) 
            {
                var_27 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_0)))));
                arr_27 [i_0] [i_0] [i_5] = ((arr_2 [i_6 + 3] [i_5 + 3]) ^ (arr_2 [i_6 + 3] [i_5 + 3]));
                arr_28 [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_5 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [9] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [2]))))) : (arr_8 [i_0])));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((var_16) > (((/* implicit */long long int) ((int) (signed char)118))))))));
            }
            var_29 = ((((/* implicit */_Bool) arr_0 [(signed char)4] [(signed char)4])) ? (arr_20 [i_5 + 3] [i_5 + 2]) : (arr_2 [i_0] [1]));
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_6 [i_5 + 1] [i_5 + 3] [i_5 - 1])))))));
            /* LoopNest 3 */
            for (signed char i_7 = 3; i_7 < 7; i_7 += 4) 
            {
                for (signed char i_8 = 3; i_8 < 9; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((5899319780031624967LL) / (((/* implicit */long long int) var_9))))) ? (arr_17 [i_8 - 1] [i_5 + 2]) : (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                            var_32 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_7] [(signed char)7] [i_5 + 2]))));
                            var_33 = ((/* implicit */signed char) var_0);
                            var_34 = ((signed char) var_17);
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (signed char i_10 = 1; i_10 < 18; i_10 += 3) 
    {
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min((((/* implicit */int) (signed char)-46)), (1840721421))))));
        arr_42 [(signed char)2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_41 [i_10] [i_10 + 1])) || (((/* implicit */_Bool) arr_40 [i_10])))) || (((((/* implicit */_Bool) ((signed char) var_16))) && (((/* implicit */_Bool) var_9))))));
    }
    var_36 = ((/* implicit */int) var_11);
    var_37 = ((/* implicit */long long int) var_9);
}

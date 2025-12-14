/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132831
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
    var_12 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (-1LL)))) ? (max((((/* implicit */unsigned int) var_7)), (var_8))) : ((((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_13 = ((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)25), ((signed char)33)))) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_7))))))))));
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = arr_4 [i_1];
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0 + 1] [i_0 + 1])))) : (min((((/* implicit */long long int) min((arr_5 [i_0 + 1] [i_0 + 1]), (334979502U)))), (((arr_1 [i_0]) + (((/* implicit */long long int) arr_5 [i_2] [i_1 + 1]))))))));
                    var_16 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) -8598345598190650263LL)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_1 - 3])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (long long int i_5 = 3; i_5 < 15; i_5 += 4) 
                {
                    {
                        arr_18 [i_0] [i_3] [8U] [i_5] = ((/* implicit */unsigned int) var_9);
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_2 [i_5 + 3] [i_0 + 1]), (arr_2 [i_5 - 3] [i_0 + 1]))))));
                        var_18 -= ((/* implicit */unsigned int) var_2);
                        arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((signed char) ((((arr_1 [i_0]) < (((/* implicit */long long int) arr_5 [i_0] [i_3])))) && (((/* implicit */_Bool) arr_16 [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_5 - 2])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            arr_22 [i_6] = ((((((/* implicit */_Bool) ((arr_3 [i_6] [8U] [i_0 + 1]) ? (((/* implicit */int) arr_0 [(signed char)11] [i_6 + 3])) : (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (var_7))))) : (((long long int) arr_9 [i_0] [i_6])))) << (((((arr_9 [i_0 + 1] [i_6]) + (9223372036854775807LL))) >> (((((var_5) ^ (var_10))) - (1096073458U))))));
            arr_23 [i_0] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) : (((((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
        }
        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2199023255551LL) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0])) && (arr_3 [i_7] [i_7] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [3LL] [i_7]))) < (var_0))))))) ? ((+(((((/* implicit */int) arr_24 [i_7])) ^ (((/* implicit */int) arr_13 [i_0] [i_7] [i_7])))))) : (((/* implicit */int) var_1))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) var_9))));
            var_21 = ((/* implicit */signed char) arr_1 [i_0]);
            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) min((arr_6 [(signed char)2] [i_0 + 1] [5U]), (((/* implicit */signed char) (_Bool)1))))) + (2147483647))) >> (((((/* implicit */int) ((signed char) arr_6 [14LL] [i_0 + 1] [(_Bool)1]))) + (69)))));
        }
    }
    var_23 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8598345598190650290LL)) ? (268435455U) : (var_5)))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) ^ (var_11))))));
}

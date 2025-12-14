/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120716
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) var_1)) : ((((~(var_10))) & (((/* implicit */int) ((var_14) < (18446744073709551612ULL))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 += var_3;
                var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)71)) == (((/* implicit */int) arr_0 [i_0]))))) <= (min((min((687197165), (687197159))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_5 [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                for (unsigned short i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    {
                        arr_17 [i_2] [i_4] [(unsigned short)6] [i_2] = ((/* implicit */unsigned short) arr_13 [1] [0]);
                        var_20 = arr_13 [(unsigned short)14] [i_3];
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (((((/* implicit */_Bool) arr_6 [10])) ? (arr_15 [i_5]) : (arr_15 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 1])))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) ((arr_9 [i_2] [i_2] [i_2]) == (var_8)));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (((arr_12 [i_2]) >> (((((/* implicit */int) var_15)) - (33))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [14] [i_2])) - (((/* implicit */int) var_16)))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-9)) < (((/* implicit */int) (signed char)-120))))))));
        arr_20 [(signed char)2] = ((/* implicit */int) arr_6 [9ULL]);
    }
}

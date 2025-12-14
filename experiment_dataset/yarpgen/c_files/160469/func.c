/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160469
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_16 = (signed char)67;
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(signed char)19])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)-100)))) : (((/* implicit */int) (signed char)100))));
        arr_2 [i_0] = (signed char)95;
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)117)))) + (((/* implicit */int) min((arr_4 [i_1]), (arr_0 [(signed char)12]))))));
        var_19 = ((/* implicit */signed char) ((((min((((/* implicit */int) (signed char)-70)), (((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_0 [(signed char)10])))))) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_0 [(signed char)20])))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_1 [i_1]))))))))));
    }
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        arr_7 [i_2] [i_2] = (signed char)0;
        var_20 = ((/* implicit */signed char) max((var_20), ((signed char)100)));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        var_21 = (signed char)110;
        var_22 ^= min(((signed char)95), ((signed char)0));
        var_23 ^= (signed char)-26;
    }
    var_24 = var_4;
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (signed char i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                {
                    arr_18 [i_5] [(signed char)9] [(signed char)9] [i_5] = arr_13 [i_4] [(signed char)4];
                    var_25 += arr_11 [i_5] [(signed char)4];
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((((((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) arr_9 [i_5] [i_5])) : (((/* implicit */int) (signed char)(-127 - 1))))) + (2147483647))) >> (((((/* implicit */int) min(((signed char)-29), ((signed char)0)))) + (59))))) < (((/* implicit */int) arr_17 [i_4] [(signed char)7] [i_4] [(signed char)5])))))));
                }
            } 
        } 
    } 
}

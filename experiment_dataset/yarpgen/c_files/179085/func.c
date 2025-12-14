/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179085
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
    var_14 = (signed char)104;
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned short)15] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                    var_15 += ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (arr_7 [i_2] [i_1] [i_1] [(unsigned short)1]) : (min((min((var_0), (((/* implicit */unsigned int) arr_1 [i_0] [i_1])))), (((/* implicit */unsigned int) min((arr_5 [i_1]), (((/* implicit */int) (signed char)-81))))))));
                    arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_8 [i_0 - 2] [i_2]), (arr_8 [i_0 - 2] [i_2])))) ? (arr_4 [(_Bool)1] [i_1] [i_0 + 1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)69)))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (signed char)-57))))) || (((/* implicit */_Bool) -1649519428))))));
                    arr_12 [i_0] [9ULL] [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)71))))))), ((unsigned short)65446)));
                }
            } 
        } 
    } 
}

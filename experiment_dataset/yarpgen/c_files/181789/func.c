/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181789
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
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 |= ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]);
                    arr_8 [i_1 + 2] [(short)4] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [10])) ? (min((max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_5 [(signed char)4] [(signed char)4])))), (((/* implicit */long long int) (unsigned short)48510)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-124)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned int) arr_0 [i_3] [i_3]);
        arr_12 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)41791)), (arr_0 [(unsigned short)12] [i_3])))) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) arr_6 [i_3] [i_3] [i_3])), (352939061)))))), (min((((/* implicit */long long int) min((2233442991U), (((/* implicit */unsigned int) arr_5 [i_3] [i_3]))))), (max((arr_2 [i_3]), (((/* implicit */long long int) arr_5 [i_3 + 2] [i_3]))))))));
        var_15 = ((/* implicit */long long int) 2061524304U);
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967290U)))) ? (((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 + 3]))) : (2061524315U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_3 + 3]), (arr_10 [i_3 + 2])))))));
        var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_4 [i_3] [i_3])), ((unsigned short)20442)))), (((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) : (arr_3 [i_3] [i_3] [13LL])))))) ? (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_3])), (4294967290U)))) < (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-7782957172286277257LL)))))) : (max((arr_0 [i_3] [i_3 - 2]), (arr_0 [(unsigned char)7] [i_3 + 1])))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170495
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = max((((/* implicit */long long int) arr_3 [i_0])), ((((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 4])) ? (((/* implicit */long long int) var_1)) : (arr_2 [i_0]))) : (((/* implicit */long long int) min((1566432425U), (3660065198U)))))));
                var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (signed char)-78))))) != (((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */int) arr_1 [i_0]))))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (((var_4) ? (3660065198U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_22 = ((/* implicit */int) var_2);
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            for (unsigned int i_4 = 4; i_4 < 8; i_4 += 2) 
            {
                {
                    arr_14 [9U] [i_3] [i_3 - 1] [4LL] = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_4 - 4] [i_4 - 4] [i_4 + 1]))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15479)) ? (arr_5 [i_2]) : (arr_0 [(short)10])))) ? (((((/* implicit */int) (unsigned char)109)) >> (((((/* implicit */int) var_7)) - (40))))) : (((/* implicit */int) (signed char)-69))));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 6; i_6 += 3) 
                        {
                            {
                                arr_21 [i_2] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_4] [i_2] [i_5] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 3792775804U)) ? (arr_20 [i_2] [i_3] [(short)7] [(signed char)1] [i_5 + 2] [6LL] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))))));
                                var_24 = ((/* implicit */short) arr_3 [i_3 - 1]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-78)) ? (var_8) : (((/* implicit */int) (signed char)108))));
                    var_26 = ((/* implicit */unsigned char) arr_13 [i_2] [8ULL] [i_4 - 2] [i_4 - 1]);
                }
            } 
        } 
    }
    var_27 &= ((/* implicit */long long int) var_16);
}

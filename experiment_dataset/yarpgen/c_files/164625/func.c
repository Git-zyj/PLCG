/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164625
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 |= ((/* implicit */unsigned short) (unsigned char)6);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)201)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) min((var_5), (((/* implicit */short) var_3))))) : (-12))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2])))))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_0 [i_0]))) == (((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) & (((/* implicit */int) arr_2 [i_1 + 3] [i_1 - 2] [i_1 + 2]))))));
                }
                arr_7 [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) (short)-5129)) : (((/* implicit */int) arr_1 [i_1 - 1])))));
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1])) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1])))) ? (((unsigned long long int) arr_5 [i_1 + 3] [i_1] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [15] [i_1])) ? (((/* implicit */int) arr_5 [i_1 + 3] [(signed char)15] [i_1])) : (arr_4 [i_1 + 3] [i_1] [i_0])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_8);
}

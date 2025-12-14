/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159761
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 2])) / (((/* implicit */int) arr_4 [i_0 - 2])))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))) - (1075240924U))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [22ULL]))))) ? (((((/* implicit */_Bool) var_13)) ? (2062722603) : (-1879011125))) : (((/* implicit */int) max((((/* implicit */signed char) var_19)), (var_6))))))) ? (max((((/* implicit */unsigned long long int) var_18)), (((unsigned long long int) arr_3 [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) var_14)) && (((/* implicit */_Bool) arr_3 [i_0 - 1]))))))));
                    arr_9 [13ULL] [12ULL] [2U] [i_2] |= (~(((int) var_13)));
                    var_23 |= ((max((max((((/* implicit */long long int) arr_4 [i_0])), (var_8))), (((/* implicit */long long int) -1879011125)))) < (min((((/* implicit */long long int) ((((/* implicit */_Bool) 1879011114)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_3 [i_2]))))), (min((var_8), (arr_6 [i_0]))))));
                    arr_10 [i_2] [i_1] [22ULL] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (unsigned char)63)))));
                }
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    arr_13 [i_0] [i_3] = ((/* implicit */unsigned char) ((_Bool) min((arr_7 [i_0 - 2] [i_0 - 2] [i_0 + 2] [10]), (arr_7 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_1]))));
                    var_24 = ((/* implicit */unsigned long long int) (~(1921516350)));
                    arr_14 [i_3] [18U] [23U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)3943))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (-1879011138)))))) : (((unsigned int) ((((/* implicit */_Bool) -1845976489)) ? (((/* implicit */long long int) -1879011125)) : (0LL))))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) max((((signed char) arr_4 [i_0 - 1])), (((/* implicit */signed char) min((arr_4 [i_0 + 1]), (arr_4 [i_0 + 1])))))))));
                }
            }
        } 
    } 
    var_26 |= ((/* implicit */int) 3492588565U);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105520
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((int) min((var_5), (((/* implicit */int) var_18))))) : (((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_2 [(_Bool)1]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-123)))));
    }
    var_21 = ((unsigned long long int) (-(var_13)));
    var_22 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            {
                var_23 += ((/* implicit */short) ((((/* implicit */unsigned long long int) -3771662398637163114LL)) < (262143ULL)));
                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709289449ULL)) ? (((/* implicit */int) (short)-3593)) : (((/* implicit */int) (unsigned char)233))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_8 [i_1] [(_Bool)1] [i_2] [i_3]))))));
                    var_26 -= ((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_1] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [0LL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_1] [(short)7]))))));
                }
                var_27 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) % ((-9223372036854775807LL - 1LL))));
            }
        } 
    } 
}

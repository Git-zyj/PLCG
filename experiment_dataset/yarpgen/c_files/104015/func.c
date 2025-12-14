/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104015
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) (~(arr_4 [i_2] [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) && (((/* implicit */_Bool) arr_5 [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))) : (var_8)))));
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((var_2) + (9223372036854775807LL))) >> (((min((((var_8) << (((((/* implicit */int) var_6)) - (228))))), (((/* implicit */unsigned long long int) ((int) arr_5 [i_0]))))) - (14402ULL)))));
                    var_15 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_3 [i_1] [i_1])))) <= (((/* implicit */int) ((unsigned char) var_11)))));
                }
                var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) * (var_4))) + (1478352560U)))));
                var_17 ^= ((/* implicit */unsigned short) min((((unsigned long long int) arr_2 [i_0] [i_1] [i_0])), (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1] [i_0]), (1773846227522841341LL))))));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((int) ((int) arr_2 [i_0] [i_1] [i_0])))) & (((long long int) ((signed char) 1478352543U))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_3);
    var_20 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_7 [i_3])))) ? (((/* implicit */int) ((unsigned char) arr_7 [i_3]))) : (((/* implicit */int) ((short) arr_0 [i_3] [i_3])))));
        arr_9 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_13) > (arr_8 [i_3])))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        var_22 |= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1179)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16127))) : (var_0)))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_2 [i_3] [i_3] [6ULL]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3])) || (((/* implicit */_Bool) arr_8 [0ULL])))))))));
    }
}

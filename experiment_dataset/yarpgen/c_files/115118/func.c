/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115118
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((arr_1 [2U]) % (((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) var_7))))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [(signed char)12] [(unsigned short)13] [i_2 + 2])))))) : (max((((((/* implicit */_Bool) (unsigned char)179)) ? (var_14) : (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [6ULL])) ? (((/* implicit */int) (unsigned char)162)) : (-2065925659))))))))));
                    arr_8 [i_2] = ((/* implicit */unsigned int) ((((var_11) ? (arr_4 [i_2 + 1] [i_0 + 1] [i_1 - 1]) : (var_13))) < (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)109)) || (((/* implicit */_Bool) var_1))))))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_0 + 1] [i_1 + 1]), (arr_7 [i_0 - 2] [i_1 - 2])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_1 - 1])) : (((/* implicit */int) var_6)))) : (((var_6) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        arr_11 [i_3 - 1] = ((/* implicit */_Bool) ((unsigned long long int) min((min((((/* implicit */unsigned long long int) var_10)), (var_14))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (var_14))))));
        var_21 ^= ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), ((+(max((((/* implicit */int) var_4)), (359932209)))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (unsigned char)76))));
    }
}

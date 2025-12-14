/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104519
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) max((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (8469736793956837946LL))))), (max((((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((_Bool) -8469736793956837951LL)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((unsigned int) arr_0 [i_0] [i_0]))))), (((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) var_11)))) - (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
        var_18 = ((/* implicit */short) ((unsigned short) max((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) var_2))))), (max((((/* implicit */long long int) var_6)), (var_9))))));
        var_19 ^= ((/* implicit */_Bool) var_4);
    }
    /* LoopSeq 4 */
    for (long long int i_1 = 4; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] &= ((((((/* implicit */int) arr_0 [i_1] [i_1])) + (2147483647))) >> (((((((/* implicit */_Bool) -8469736793956837963LL)) ? (((((/* implicit */_Bool) -6LL)) ? (8469736793956837950LL) : (((/* implicit */long long int) -204919561)))) : (((/* implicit */long long int) (-(-1957386880)))))) - (8469736793956837924LL))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) var_2);
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [i_1] [9ULL])))) ? (((((/* implicit */unsigned long long int) var_13)) / (17289140063057718619ULL))) : (((/* implicit */unsigned long long int) var_0))))) ? (var_13) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1])))) : (var_6))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */int) var_15);
        arr_12 [i_2] = arr_10 [i_2] [i_2];
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned short) ((unsigned char) var_6));
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (arr_13 [i_3] [i_3]) : (((/* implicit */long long int) var_10)))) >> (((arr_9 [8LL]) - (1313305252U)))));
        arr_18 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) -8469736793956837945LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -8469736793956837951LL)) ? (var_11) : (((/* implicit */int) arr_1 [i_3]))))) : (((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */long long int) arr_10 [(signed char)18] [(signed char)18])) : (var_14)))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_5 [i_4] [i_4 - 1]))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_21 [i_6]), (var_14))))))) & (((int) (unsigned short)31827))))));
                    arr_28 [i_4] [i_4] [i_6] = ((/* implicit */signed char) var_3);
                }
            } 
        } 
        var_23 = ((/* implicit */short) ((((unsigned int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_10 [i_4] [(short)1])))) | (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_23 [i_4])) : (((/* implicit */int) var_15)))), (var_4))))));
        var_24 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((8633762788805495490LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21560)))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)122)))), (((/* implicit */int) ((((var_9) * (((/* implicit */long long int) ((/* implicit */int) var_5))))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33685))))))));
    }
}

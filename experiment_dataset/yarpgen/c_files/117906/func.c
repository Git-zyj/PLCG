/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117906
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
    var_17 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max(((unsigned short)51144), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */long long int) ((unsigned int) var_3))) : (0LL))), (((/* implicit */long long int) (!(var_15))))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) var_1)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_19 |= ((/* implicit */_Bool) max(((+(((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) >= (var_3)))))), ((~((~(((/* implicit */int) var_12))))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((((/* implicit */_Bool) min((arr_1 [i_0 + 2]), (((/* implicit */int) (short)-10558))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_0]))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3] [i_3]))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((min((857562132U), (min((arr_7 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) 0)))))), (((/* implicit */unsigned int) -1206728950)))))));
                    arr_10 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)132)) && (((/* implicit */_Bool) (unsigned char)188)))))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 819926764U)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_0 [i_2]))))))))));
                }
            } 
        } 
        arr_11 [(unsigned char)4] = ((/* implicit */int) var_2);
    }
    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((15LL), (((/* implicit */long long int) 21))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)0)), (3815641411U)))))))) : (arr_15 [16] [i_5] [i_5])));
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((var_16), (((/* implicit */long long int) ((arr_12 [i_4 - 1]) < (arr_12 [i_4 + 1])))))))));
        }
        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 3) 
        {
            arr_20 [i_6 + 1] [i_6] [15U] = ((/* implicit */short) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_4])) ? (arr_18 [i_4] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) < (((long long int) 2684036943U))))), ((+(((/* implicit */int) arr_16 [i_4] [i_4] [i_6]))))));
            var_25 -= ((/* implicit */unsigned char) 11);
            var_26 -= ((/* implicit */unsigned int) var_10);
        }
        var_27 ^= max((min((arr_14 [i_4 - 1] [i_4 - 1] [i_4 + 1]), (arr_14 [i_4 - 1] [i_4 + 1] [i_4 - 1]))), (max((arr_14 [i_4 - 1] [i_4 + 1] [i_4 + 1]), (((/* implicit */unsigned int) var_4)))));
    }
    var_28 ^= ((unsigned char) ((max((var_9), (((/* implicit */int) var_13)))) < (((/* implicit */int) var_2))));
    var_29 ^= ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max(((_Bool)1), (var_0))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117155
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
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (short)3480);
        var_11 = ((/* implicit */unsigned int) min((var_11), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (-6258375505697082931LL) : (((/* implicit */long long int) arr_2 [i_0 - 3]))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (arr_2 [i_0 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) (short)-1)))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    var_12 = ((((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3] [i_3])) && (((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 2] [i_3])) : (((/* implicit */int) arr_12 [i_3 + 1] [i_3] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                    arr_13 [i_1 - 1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-8190875870935778568LL))))) ? ((+(arr_5 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_3] [i_3 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_3 + 1])))))));
                }
            } 
        } 
        var_13 = ((/* implicit */int) ((max((arr_10 [i_1 + 1] [i_1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 1])))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_18 [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_4])) - (((/* implicit */int) arr_15 [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9U)))))) : (min((arr_16 [i_4] [(unsigned char)13]), (((/* implicit */long long int) (_Bool)1))))));
        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)206))))) / (var_5))) + (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4])))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_16 [i_4] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4])))))) * ((-(var_10)))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170231
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
    var_13 = ((/* implicit */signed char) max((var_1), (var_4)));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((short) (~(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1226527735)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (min((arr_0 [i_0]), ((((_Bool)1) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [i_2 + 2] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_4 [i_1]))));
                    arr_12 [i_1] [i_2 + 2] [i_2] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) * (arr_1 [i_1])));
                }
            } 
        } 
        arr_13 [i_1] [i_1] = (~((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 4257406378U)))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (_Bool)0))));
        var_16 = ((unsigned char) (((_Bool)1) ? (arr_2 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)40))));
        arr_18 [i_4] [i_4] &= ((/* implicit */unsigned short) var_8);
        var_18 += ((/* implicit */long long int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (signed char)56)) : (var_0)))))));
        arr_19 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)126)), (6090938516480467910ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) var_4))))) : (arr_6 [i_4] [i_4] [i_4]))))));
        var_19 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_4]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (arr_1 [i_4])))) : ((~(arr_0 [i_4]))))));
    }
    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned long long int) arr_2 [i_5]);
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) var_7);
    }
}

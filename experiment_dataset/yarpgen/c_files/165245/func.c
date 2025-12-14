/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165245
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_3 [i_0])))));
        var_16 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1982925290)) ? (1982925289) : (((/* implicit */int) (short)3186)))) - (((/* implicit */int) (!((_Bool)0))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_17 *= ((/* implicit */short) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -536870912)) : (var_4)))));
        var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 36028779839094784LL)) ? (0) : (((/* implicit */int) (unsigned char)99))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_5 [i_1]))));
        var_20 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1] [i_1])))))));
    }
    for (int i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(arr_11 [i_3])))))) ? (((/* implicit */int) ((unsigned char) (-(36028779839094784LL))))) : (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1]))))));
                        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? ((+((-(((/* implicit */int) arr_7 [i_3] [i_3])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)156)))))));
                        var_23 = ((/* implicit */unsigned char) (~(-3375913073246265010LL)));
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_7 [i_2] [i_4])))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5260471940459831141LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-36028779839094785LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (arr_14 [14LL] [i_2 + 1] [i_2])))))))) : (((((/* implicit */_Bool) ((arr_9 [i_2 - 1] [i_2 + 1] [i_2]) / (arr_10 [i_2] [i_2 + 1] [20])))) ? (var_1) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)100)), (arr_12 [i_2] [i_2] [i_2 + 1] [i_2]))))))));
    }
    var_26 = var_11;
}

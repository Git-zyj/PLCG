/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155014
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) var_8);
        var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((short) (unsigned char)147))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)26)) >= (((/* implicit */int) var_5))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)8]))) == (var_17)))))));
        var_21 = ((/* implicit */short) (_Bool)1);
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        arr_6 [6] [i_1] &= ((signed char) ((((/* implicit */int) arr_5 [(signed char)2])) < (((/* implicit */int) arr_1 [i_1 - 1]))));
        arr_7 [i_1] = ((unsigned short) (+(((/* implicit */int) (unsigned char)203))));
        var_22 = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */short) arr_0 [i_1 - 1] [i_1 - 1])), (var_16)))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 + 1])) << (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1]))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) arr_2 [i_1]);
                        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)108)))) == (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1 - 1])) >= (((/* implicit */int) arr_8 [i_1 - 1])))))));
                        var_25 = ((/* implicit */long long int) (+(((unsigned int) (+(var_4))))));
                        var_26 &= ((/* implicit */unsigned short) ((((arr_12 [i_4 - 1] [i_2] [i_3] [i_1 + 1]) && (arr_12 [i_4 + 1] [i_1] [i_1] [i_1 - 1]))) && (((((/* implicit */int) arr_12 [i_4 + 1] [i_4] [i_3] [i_1 + 1])) <= (((/* implicit */int) arr_0 [i_4 - 1] [i_4 - 1]))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */signed char) ((unsigned short) var_10));
    var_28 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
    var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_18))))));
}

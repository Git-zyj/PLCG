/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142785
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)749)) != (((/* implicit */int) ((unsigned short) (_Bool)1)))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_0]))));
                        var_20 = ((/* implicit */unsigned short) var_8);
                        var_21 ^= ((((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1])) == (((/* implicit */int) var_13)));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1])))))));
        var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)749)) ? (((/* implicit */int) (unsigned short)7579)) : (((/* implicit */int) (unsigned short)7579))))))) ? (arr_9 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4])))));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_3)), (arr_0 [i_4] [i_4]))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_26 ^= ((/* implicit */unsigned char) ((((14861602504789250493ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
        arr_17 [i_5] = ((/* implicit */unsigned long long int) ((arr_3 [i_5] [i_5]) ? (((/* implicit */int) arr_3 [i_5] [i_5])) : (((/* implicit */int) arr_3 [i_5] [i_5]))));
        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_5]))));
        arr_18 [10ULL] &= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)7587))));
    }
    var_28 *= ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (_Bool)1)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17443
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
    var_12 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_10 [i_0 + 1] [i_1] [i_2] [i_3] [i_3] = arr_6 [i_0] [i_3] [i_0] [i_3];
                        var_13 = ((/* implicit */long long int) var_4);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) arr_2 [i_0] [i_5 - 1]);
                    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1273730542)))))));
                    arr_18 [i_4] [i_4] [i_5] [i_5 - 1] = ((/* implicit */unsigned long long int) -1273730522);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */int) var_3)) - (arr_14 [i_0 - 2]))), ((-(1273730542)))))));
        arr_19 [i_0 - 1] = ((((/* implicit */_Bool) (~(arr_16 [4] [i_0] [i_0] [4])))) ? (arr_15 [i_0] [i_0 + 2]) : (((((/* implicit */_Bool) arr_16 [(short)8] [(short)8] [i_0] [(short)8])) ? (arr_16 [4] [i_0] [i_0] [4]) : (arr_15 [i_0 + 1] [i_0]))));
    }
    for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) (short)-28315);
        arr_22 [i_6] = max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1273730543)) ? (1273730542) : (((/* implicit */int) (_Bool)0))))) < (3592748100975627621ULL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) arr_20 [i_6]))))) ? (((((/* implicit */_Bool) arr_20 [i_6])) ? (-1273730565) : (((/* implicit */int) arr_20 [i_6])))) : ((~(((/* implicit */int) arr_21 [i_6] [(_Bool)1])))))));
        var_18 = (short)-3398;
    }
}

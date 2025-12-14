/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116152
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (~(max((((((/* implicit */long long int) ((/* implicit */int) (signed char)33))) ^ (-1LL))), (((/* implicit */long long int) (unsigned char)242))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(-4918734288910020273LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)231)) ^ (((/* implicit */int) (signed char)-92))))))) : (((((var_11) << (((((/* implicit */int) (unsigned char)8)) - (8))))) << (((((/* implicit */int) ((short) (unsigned char)48))) - (48)))))));
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (+(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_2))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_11))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)13)) + (((/* implicit */int) (unsigned char)70))))))) ? ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)14)))))) : ((+(((/* implicit */int) var_8))))));
            arr_11 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (unsigned char)13);
        }
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            arr_14 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (((/* implicit */int) (unsigned short)53025)) : (((/* implicit */int) arr_12 [i_2] [i_2 - 1] [i_2])))) + (((((/* implicit */int) (short)63)) - (((/* implicit */int) arr_12 [i_2] [i_2] [i_0]))))));
            arr_15 [i_2] = ((/* implicit */_Bool) (+(3845351962U)));
        }
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_25 [i_0] [i_5] [i_6] [i_5] [i_6] [i_6] [i_4] = var_4;
                            arr_26 [i_6] [i_3] [i_6] [i_4] [i_0] [i_6] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)242)) << (((/* implicit */int) arr_17 [i_3] [i_4] [i_5]))));
                            arr_27 [i_5] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) max(((unsigned short)12510), (((/* implicit */unsigned short) (signed char)-73)))))), (((long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_7 [i_0] [i_4] [i_0]) : (0ULL))))));
                        }
                    } 
                } 
            } 
            var_14 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) arr_16 [i_3])) : (var_6)))));
        }
    }
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 24; i_7 += 2) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)239)) + (((/* implicit */int) var_8))));
        arr_30 [i_7 - 1] = ((/* implicit */_Bool) ((unsigned long long int) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) (short)-22597))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)1)))) == (((/* implicit */int) var_10))));
        arr_31 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_7 - 2])) ? (13853762326933401150ULL) : (((/* implicit */unsigned long long int) var_4))));
    }
    var_17 = var_8;
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
    var_19 = (unsigned char)45;
}

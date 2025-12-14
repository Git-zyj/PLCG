/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121273
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
    for (short i_0 = 2; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_16 = ((((/* implicit */int) var_13)) >= (((((/* implicit */int) var_7)) << (((12010572091853390356ULL) - (12010572091853390356ULL))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) - (((-9223372036854775798LL) ^ (((/* implicit */long long int) 1727786488U))))))) ? (min((arr_0 [i_0 - 2]), (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        var_18 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_19 = ((/* implicit */unsigned short) (short)-839);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_2] [i_3]))))) : (min((((/* implicit */long long int) 3023986513U)), (8754753419435331686LL)))))));
                        var_21 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(-8754753419435331657LL)))) ^ ((~((~(0ULL)))))));
                        var_22 -= ((/* implicit */int) ((((7258083825544706427ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))))) && (((/* implicit */_Bool) (~(arr_4 [i_0 - 2] [i_0] [i_0 + 1]))))));
                        var_23 = ((/* implicit */signed char) var_6);
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 2; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8754753419435331686LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (4294967295U)))) == (arr_7 [i_4 + 1] [(unsigned char)4] [i_4]))) || (((/* implicit */_Bool) -8754753419435331686LL))));
        var_25 += ((/* implicit */unsigned int) -8754753419435331663LL);
        var_26 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_8 [(unsigned char)17])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_13 [i_4])))) > (max(((-2147483647 - 1)), (1447773812))))) ? (arr_1 [i_4] [i_4]) : (((/* implicit */unsigned long long int) (~(((unsigned int) -8754753419435331663LL)))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) ((min(((-(8754753419435331662LL))), (-8754753419435331648LL))) % (((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_8 [i_6]))))))));
                    var_28 = ((/* implicit */int) (-(min((((/* implicit */unsigned int) 139203263)), (arr_16 [i_4] [i_5 + 1] [i_6])))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 3; i_7 < 20; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (((((/* implicit */_Bool) var_13)) ? ((~(-8754753419435331662LL))) : (((var_0) ? (((/* implicit */long long int) arr_14 [i_4] [i_4])) : (-8754753419435331662LL)))))));
                                var_30 = ((short) ((unsigned long long int) max((var_9), (((/* implicit */unsigned short) arr_6 [(signed char)20] [i_5] [i_4])))));
                                var_31 -= ((var_10) << (((arr_22 [i_8 + 1] [i_8] [i_8 - 3] [i_8] [i_8] [i_8 - 1] [14LL]) + (1784744127))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_9 = 2; i_9 < 20; i_9 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */_Bool) var_1);
        var_33 = ((/* implicit */unsigned int) var_12);
        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_9])) ? (8754753419435331657LL) : (-1LL)));
    }
    var_35 = ((/* implicit */unsigned int) var_8);
}

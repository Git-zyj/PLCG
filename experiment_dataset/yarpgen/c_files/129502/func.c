/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129502
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */short) arr_3 [(unsigned short)11] [(unsigned short)11] [i_1]);
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(((var_8) + (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 3] [i_0])))))));
                var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -1221427982)) ? (-7202853644198833039LL) : (((/* implicit */long long int) 1221427982))))));
                arr_6 [(unsigned short)0] [11U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 525813155U)) ? (((/* implicit */long long int) 2920180452U)) : (7202853644198833026LL))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) (signed char)-6);
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (525813134U) : (3U)));
        arr_10 [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((-588973045) + (2147483647))) << (((1270655041U) - (1270655041U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (arr_9 [i_2])))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_2]), (((/* implicit */unsigned long long int) (unsigned short)23872))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_2]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (arr_8 [3U] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))));
        var_18 ^= ((/* implicit */_Bool) 83322289);
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (((-2147483647 - 1)) ^ (((/* implicit */int) (unsigned short)0))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned int) var_1);
                        var_21 = ((/* implicit */int) var_7);
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 1270655041U)) ? (arr_20 [(_Bool)1] [(signed char)18] [(unsigned char)8] [(unsigned short)23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18356)))));
                        var_23 &= (-(arr_15 [i_3] [i_4] [i_5]));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
    {
        var_24 = (+(((/* implicit */int) arr_11 [i_7])));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_7])))))));
        var_26 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_7] [19ULL] [i_7]))));
        arr_26 [i_7] = ((/* implicit */_Bool) (-(3769154161U)));
    }
    var_27 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)44485)) ? (1374786855U) : (2920180452U)));
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4022831262426111092LL)) ? (((/* implicit */unsigned long long int) (((!(var_12))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8]))) : (max((-5959340435446245145LL), (((/* implicit */long long int) arr_25 [8ULL]))))))) : (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21795)) ? (var_9) : (var_9)))) : ((~(var_10)))))));
        }
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_21 [i_8]), (((/* implicit */int) var_2))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)82))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)117))))))) : (min((((((((/* implicit */int) var_6)) + (2147483647))) << (((var_10) - (4955389960681152204ULL))))), (((((/* implicit */int) arr_18 [(short)20] [i_8] [i_8])) ^ (287072341))))))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                {
                    var_31 -= ((/* implicit */unsigned long long int) -5959340435446245143LL);
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551598ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(unsigned char)19] [i_11 + 1] [i_12])))))));
                    var_33 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_11 + 3] [i_11 + 3] [i_11 + 2])) ? (((/* implicit */unsigned long long int) var_3)) : (18267109008659633783ULL)));
                    arr_37 [i_10] [i_10] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                }
            } 
        } 
        var_34 = ((/* implicit */long long int) (-(1621289187U)));
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) arr_23 [i_10])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)168)) : (arr_15 [i_10] [6U] [i_10])))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182171
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (_Bool)1))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        arr_23 [i_0] [i_0] [i_5] [i_6] &= ((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))));
                        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))))))));
                        var_12 = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)22036)))) - (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))));
                        var_13 = ((/* implicit */signed char) (short)-3650);
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) 3990573102U))));
                    }
                } 
            } 
            arr_24 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)3660)) || (((/* implicit */_Bool) (unsigned short)20384)))) || (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (6596979027345423555LL)))));
            arr_25 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((-21) ^ (((/* implicit */int) (signed char)127))));
            arr_26 [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((4203372274U) != (((/* implicit */unsigned int) -24))))));
            arr_27 [i_0] = ((/* implicit */long long int) 91595025U);
        }
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
        {
            arr_30 [i_0] = ((/* implicit */unsigned char) (((+(4611686018427387648LL))) - (((/* implicit */long long int) (~(4196679370U))))));
            arr_31 [i_0 + 1] [i_0 + 2] = ((/* implicit */unsigned long long int) (signed char)-127);
            arr_32 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        }
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    {
                        arr_40 [i_0] [i_0] [i_0 - 1] [i_0] [i_8] [i_0] = (~(((((-26) + (2147483647))) << (((((-7723148540058071000LL) + (7723148540058071023LL))) - (23LL))))));
                        arr_41 [23LL] [11LL] [i_8] [(signed char)18] [i_10] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (short)3650)) != (-24))))));
                        arr_42 [i_0] [i_8] [i_9] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)6055)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            for (unsigned int i_12 = 2; i_12 < 21; i_12 += 2) 
            {
                {
                    arr_49 [i_0] [i_11] [i_11] = ((/* implicit */signed char) (~(-7246992965426689152LL)));
                    arr_50 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)3641)))))) % (4203372271U)));
                    arr_51 [(unsigned char)3] [i_11] [i_11] [i_11] = ((/* implicit */long long int) 10664461869902519607ULL);
                }
            } 
        } 
        arr_52 [i_0] [0LL] = ((/* implicit */unsigned long long int) ((((1865390861732907683LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))))) & (((/* implicit */long long int) (+(((/* implicit */int) (short)3644)))))));
    }
    /* LoopNest 2 */
    for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
    {
        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            {
                arr_58 [i_13] [(_Bool)1] [i_13] = ((/* implicit */long long int) (!((!((_Bool)1)))));
                arr_59 [i_13] [i_14] |= ((/* implicit */unsigned int) ((20) ^ (((/* implicit */int) (!((!(((/* implicit */_Bool) 1911682658U)))))))));
                var_15 = ((/* implicit */long long int) 25);
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        {
                            arr_65 [i_15] [i_15] = (_Bool)1;
                            var_16 = ((/* implicit */long long int) min((var_16), (768472323581281379LL)));
                            arr_66 [i_13] [i_14] [12LL] [i_16] |= ((/* implicit */unsigned short) 1033237848U);
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 281071059))))) >= (((/* implicit */int) (!((_Bool)1)))))))) % (18446744073709551599ULL))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (unsigned short)65521))));
                        }
                    } 
                } 
            }
        } 
    } 
}

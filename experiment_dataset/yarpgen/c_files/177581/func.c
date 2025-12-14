/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177581
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
    var_11 = ((/* implicit */signed char) var_9);
    var_12 &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (max((((/* implicit */long long int) (unsigned char)224)), (max((((/* implicit */long long int) var_2)), (9223372036854775807LL)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_5)), (14853079051821586543ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_1 [i_0])))))))) ^ (max((((/* implicit */int) arr_0 [i_0])), (((((((/* implicit */int) var_7)) + (2147483647))) >> (((4294967295U) - (4294967284U)))))))));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (((+(8796084633600LL))) << (((max((((long long int) var_3)), (((((-4286624478217295905LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-2245)) + (2301))) - (56))))))) - (4936747558637479889LL))))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_14 -= (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-127)) * (((/* implicit */int) var_7)))) % ((~(((/* implicit */int) (short)-21967))))))));
                        arr_13 [12U] [i_1] = (i_1 % 2 == zero) ? (min((min((((/* implicit */int) min((((/* implicit */unsigned short) (short)4665)), ((unsigned short)34933)))), ((+(((/* implicit */int) arr_9 [i_2])))))), ((+(((((((/* implicit */int) arr_11 [(short)4] [i_1] [i_1] [i_4] [i_4] [i_3])) + (2147483647))) << (((var_9) - (5077126299174437630ULL))))))))) : (min((min((((/* implicit */int) min((((/* implicit */unsigned short) (short)4665)), ((unsigned short)34933)))), ((+(((/* implicit */int) arr_9 [i_2])))))), ((+(((((((((/* implicit */int) arr_11 [(short)4] [i_1] [i_1] [i_4] [i_4] [i_3])) - (2147483647))) + (2147483647))) << (((var_9) - (5077126299174437630ULL)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_16 [i_4] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */long long int) arr_10 [i_1] [18] [i_4] [i_1]);
                            arr_17 [i_1] [i_2] [i_3] [i_1] [i_5] [i_5] = arr_0 [i_4];
                            var_15 += ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_1] [i_2] [i_5] [i_3] [i_4] [i_5]))))) + (max((8796084633605LL), (((/* implicit */long long int) (signed char)44))))));
                            var_16 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-27946))))) > (2857820618145114451ULL))));
                        }
                    }
                } 
            } 
        } 
        arr_18 [12LL] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1312195602) : (((/* implicit */int) arr_15 [(signed char)16] [(signed char)16] [i_1] [i_1] [i_1]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)16039)))))))) < (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))) & (var_8)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_20 [i_6])), (var_8)))) && (((/* implicit */_Bool) arr_5 [i_6])))))));
        var_18 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_6] [i_6] [0] [i_6]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6))))))), (((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) (unsigned char)255)), (0ULL))) : (min((((/* implicit */unsigned long long int) var_2)), (15588923455564437165ULL)))))));
        var_19 -= ((/* implicit */unsigned char) (~(arr_5 [i_6])));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7]))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_8 [i_7]))));
    }
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned char)235))));
}

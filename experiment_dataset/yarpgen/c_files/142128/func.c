/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142128
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
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((short) (unsigned char)228)), (((/* implicit */short) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((var_14), (((/* implicit */int) var_3))))))) : ((+(((((/* implicit */_Bool) (unsigned short)22856)) ? (72057593903710208LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)117)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_5))));
        var_21 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((unsigned int) (short)1024))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 2080374784)) ? (((/* implicit */int) (short)1026)) : (((/* implicit */int) (unsigned short)20247))));
        var_23 |= ((/* implicit */unsigned long long int) var_1);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_10 [i_1] [i_3] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_8 [i_1])))));
                    /* LoopSeq 1 */
                    for (short i_4 = 3; i_4 < 18; i_4 += 4) 
                    {
                        var_24 ^= ((/* implicit */unsigned long long int) (~(((int) var_14))));
                        arr_14 [i_4 - 2] [i_3] [i_2] [8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((long long int) 62914560U)))) * (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_16)) >= (var_13)))))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) var_18)) << (((arr_9 [16] [i_5] [18U] [i_5]) - (9034135769223843147ULL)))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    arr_23 [i_6] [i_5] [i_6] [(short)16] = ((/* implicit */short) 18446744073709551615ULL);
                    arr_24 [i_6] [i_6] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-105)))))));
                }
            } 
        } 
        var_26 ^= ((/* implicit */_Bool) (~(arr_18 [i_5] [i_5] [i_5])));
    }
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
    {
        var_27 ^= ((/* implicit */unsigned long long int) var_4);
        arr_28 [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
    {
        var_28 = ((short) ((arr_7 [i_9] [i_9] [i_9]) * (arr_7 [i_9] [(short)9] [i_9])));
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) var_10))))))) ? (max((((/* implicit */int) var_9)), (min((((/* implicit */int) (short)1022)), (var_14))))) : ((-(((/* implicit */int) (short)1048)))))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_4)), (var_14)))))) ? (max((var_6), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_17), (((/* implicit */signed char) var_11)))))))))));
        arr_36 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_10] [i_10])) ? (min((arr_18 [i_10] [i_10] [i_10]), (((/* implicit */long long int) (unsigned char)59)))) : (((/* implicit */long long int) max((268369920U), (((/* implicit */unsigned int) (unsigned char)189)))))));
        var_31 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 4026597376U)) ? (((/* implicit */int) (short)-1022)) : (((/* implicit */int) (unsigned char)221)))));
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) <= (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : (((var_14) >> (((((/* implicit */int) var_9)) - (29398)))))))));
        var_33 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned char) (_Bool)1))))) ? ((((_Bool)1) ? (arr_9 [i_10] [i_10] [(_Bool)1] [i_10]) : (arr_19 [i_10] [i_10] [i_10]))) : (min((((/* implicit */unsigned long long int) var_9)), (arr_6 [i_10])))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108701
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536870912U)) ? (2132120924U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19420)))))) == (((((/* implicit */_Bool) 2162846379U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3758096366U)))))));
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (18446744073709551615ULL)));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_12 ^= ((signed char) arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) (signed char)6);
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) 4294967295U))));
                                arr_18 [i_3] = ((/* implicit */int) max((min((((/* implicit */long long int) var_6)), (arr_15 [i_3] [i_5]))), (((/* implicit */long long int) ((arr_15 [i_3] [i_2]) > (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */long long int) 2162846372U)) + (arr_12 [i_1] [i_3] [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7))) : (2132120932U))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2162846371U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) var_0)) : (6ULL))))))));
                                var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((unsigned long long int) (signed char)-1)) : (((/* implicit */unsigned long long int) min((var_1), (arr_16 [(signed char)8] [i_1] [i_3] [(signed char)2] [4ULL])))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (arr_12 [i_1] [i_1] [i_1] [i_1])))), (arr_0 [i_3])))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_3]))) ? (((((/* implicit */long long int) 784474430)) + (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 784474416)))))))));
                    arr_19 [i_3] [i_3] = ((/* implicit */unsigned int) (short)6);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) min((536870940U), (((/* implicit */unsigned int) (_Bool)0))))) | (((((/* implicit */_Bool) var_2)) ? (-2108723604695440236LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (((/* implicit */long long int) (signed char)-14))));
        arr_20 [i_1] = ((/* implicit */int) min((2162846371U), (2013167018U)));
    }
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) var_2);
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) min((var_21), ((-(0LL)))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    arr_33 [i_8] [i_8] [i_8] = ((/* implicit */short) (+(arr_9 [i_8] [i_8])));
                    var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)7))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((short) 4294967295U)))));
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) (signed char)63);
                        arr_37 [i_8] [i_9] = ((((/* implicit */_Bool) arr_7 [i_7] [i_8])) ? ((+(0))) : (((/* implicit */int) (short)-5280)));
                        var_25 += ((/* implicit */short) ((_Bool) (short)-8));
                        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_7 [i_8] [i_7]) : (arr_7 [i_8] [i_9])));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((arr_12 [i_7] [i_7] [i_9] [i_11]) != (arr_12 [i_7] [15] [15] [i_9])));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-2147483647 - 1)))));
                    }
                }
            } 
        } 
        var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (var_5) : (arr_11 [i_7])))) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) 2134760607))))));
    }
    var_30 = ((/* implicit */long long int) var_6);
    var_31 &= ((/* implicit */unsigned int) min((((((var_2) >> (((/* implicit */int) (_Bool)1)))) - (var_0))), (var_2)));
    var_32 = (signed char)1;
    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) var_2))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155444
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_11 [(short)18] [(short)18] [(short)18]))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0])) > (((/* implicit */int) arr_12 [i_2] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0])))) ? (((long long int) arr_2 [i_0] [i_0] [i_2])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2] [i_3]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(signed char)16] [i_2]))) : (max((arr_6 [i_0] [i_1]), (arr_6 [i_1] [i_3])))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((+(((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (18446744073709551615ULL))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [3ULL]), (((/* implicit */unsigned long long int) var_14))))) || (((/* implicit */_Bool) var_7))))) < (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 18108116915759139023ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0]))))))));
                                arr_15 [i_0] [i_1] = (i_0 % 2 == zero) ? (((/* implicit */long long int) (~(((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_0 [i_0])) - (11007)))))))) : (((/* implicit */long long int) (~(((((/* implicit */int) arr_0 [i_0])) << (((((((/* implicit */int) arr_0 [i_0])) - (11007))) - (6896))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) var_12);
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5 + 1] [22ULL] [i_5] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) var_13)) : (var_16)));
                                var_22 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))))) % ((~(5921064785107334555ULL))))));
                                var_23 = arr_1 [i_2];
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                {
                    var_24 += ((/* implicit */short) (+(0ULL)));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0])))))))) ? (((((/* implicit */_Bool) (unsigned short)31995)) ? (((/* implicit */int) (unsigned short)18393)) : (((/* implicit */int) (unsigned short)33556)))) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_26 += min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (arr_27 [i_0] [i_1] [i_7] [i_7] [i_9]));
                                var_27 += ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) var_16))) | (var_7))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) arr_27 [i_9] [i_8] [i_7] [i_1] [i_0]))))));
                                var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-3599)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))) ? (((((/* implicit */int) ((unsigned short) var_13))) ^ (((/* implicit */int) ((unsigned char) var_0))))) : ((~(((/* implicit */int) arr_3 [i_8] [i_0] [i_7]))))));
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) ((short) var_8))))))))));
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)116), (((/* implicit */unsigned char) (_Bool)0))))) <= ((+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) (unsigned char)228))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        arr_33 [i_10] [i_10] = var_12;
        var_32 = ((/* implicit */short) (~(((/* implicit */int) (!(((arr_13 [i_10] [0ULL] [i_10] [0ULL] [i_10] [i_10] [i_10]) == (18446744073709551615ULL))))))));
        arr_34 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1963)) ? (2ULL) : (0ULL)));
    }
}

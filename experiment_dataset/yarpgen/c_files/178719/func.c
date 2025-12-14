/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178719
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
    var_11 = var_8;
    var_12 = ((/* implicit */unsigned int) (~(var_2)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) <= (2743721966U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1551245330U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))))))) : (var_2)));
        var_13 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((unsigned long long int) ((short) (+(arr_3 [i_1 - 2] [i_1]))))))));
        var_15 = ((/* implicit */unsigned char) (!(((arr_4 [i_1]) == (((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) arr_5 [i_2]);
        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_7))));
        arr_8 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_2] [i_2]))));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_11 [4U] |= var_4;
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    {
                        var_18 = var_2;
                        var_19 += ((/* implicit */unsigned int) ((unsigned long long int) -1822233613));
                        var_20 += ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) arr_10 [i_3]))) || (((_Bool) arr_16 [i_3] [(_Bool)1] [0])))) ? (((((/* implicit */_Bool) (short)2279)) ? (18446744073709551615ULL) : (min((arr_17 [(short)1] [i_5] [i_4] [(_Bool)1]), (((/* implicit */unsigned long long int) var_6)))))) : (((((/* implicit */_Bool) min((1965649772), (((/* implicit */int) arr_0 [i_5]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-2279))))) : (((var_10) ? (((/* implicit */unsigned long long int) arr_4 [18LL])) : (arr_13 [(signed char)8] [i_5])))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2095897398564369218ULL)) ? (((/* implicit */int) (unsigned char)232)) : ((-2147483647 - 1))))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [12ULL])) <= (((/* implicit */int) arr_18 [(unsigned char)2] [i_3] [i_3] [i_3]))))), (((((/* implicit */_Bool) -1988280061)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        var_22 += ((/* implicit */_Bool) arr_1 [i_3] [(signed char)18]);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        for (int i_11 = 2; i_11 < 12; i_11 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)226)) ? (6167072933702086669ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2))))));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((_Bool) ((arr_4 [i_7]) - (arr_4 [i_7])))))));
                                arr_29 [i_8] [(unsigned char)3] [i_9] [i_9] [i_8] [i_8] = ((/* implicit */int) arr_21 [0] [i_8] [i_11]);
                                arr_30 [i_7] [(short)6] [i_9] [i_9] [i_9] &= arr_25 [i_7] [i_8] [i_10] [i_7];
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */signed char) arr_27 [i_7] [(_Bool)1] [i_7] [(unsigned char)0] [i_7] [i_8]);
                var_26 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((((/* implicit */int) var_6)) / (arr_25 [i_7] [i_7] [i_8] [i_7]))), (((((/* implicit */int) arr_1 [i_7] [i_7])) + (((/* implicit */int) var_1))))))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7] [i_7]))) / (var_0)))));
            }
        } 
    } 
}

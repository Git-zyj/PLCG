/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11117
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (var_2))), ((~(((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) (unsigned char)67)))))));
                arr_4 [i_0 + 1] [(unsigned short)14] [(unsigned short)14] = ((/* implicit */unsigned char) arr_1 [14U] [i_0 - 1]);
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) ^ (arr_1 [i_0 - 1] [i_0]))) << ((((~(1026220571U))) - (3268746714U)))));
                var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_1 [i_0 - 1] [i_0 - 1]))) - (((/* implicit */unsigned int) (+((-(-2147483631))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 2 */
    for (int i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) 68719476732ULL);
        arr_8 [i_2 + 1] = ((/* implicit */short) (((!(((/* implicit */_Bool) 2147483631)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (arr_6 [i_2 + 1]) : (1640076093)))) : (arr_7 [i_2 - 1])));
        arr_9 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_6 [i_2 - 1])))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106)))))) ? (2183051546640229812ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)43875)))));
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_3] &= ((/* implicit */short) min((min(((~(var_14))), (((/* implicit */long long int) ((var_8) & (arr_10 [i_2] [i_2])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3])) || (((/* implicit */_Bool) -5780835660817336571LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_23 [i_6] [i_6] [i_6] [i_4] [i_6] [i_6] = ((/* implicit */signed char) (~(var_8)));
                                var_21 *= ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_3 + 4])) - (arr_22 [i_2] [i_2] [(signed char)15] [(signed char)11] [i_4] [i_2] [i_6])))) ? (arr_18 [i_2 - 1] [i_3 + 4]) : (((/* implicit */int) var_9))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (min((16263692527069321803ULL), (((/* implicit */unsigned long long int) -2147483641)))))))) % (16263692527069321803ULL))))));
                                var_23 = ((((/* implicit */_Bool) (-(18446744004990074884ULL)))) ? (((/* implicit */long long int) 3109656522U)) : (max((((/* implicit */long long int) (_Bool)1)), (-8505752426854098892LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_7 = 1; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)189)) && (((/* implicit */_Bool) (unsigned short)16110)))) || (((((/* implicit */_Bool) arr_11 [i_7] [i_7 + 1] [i_7 + 1])) || (((/* implicit */_Bool) arr_11 [i_7] [i_7 - 1] [i_7 - 1]))))));
        arr_26 [i_7] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (short)28689)))));
        var_25 = ((((int) arr_13 [i_7])) | ((~(((/* implicit */int) arr_13 [i_7])))));
    }
    var_26 = ((/* implicit */unsigned short) var_4);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177590
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
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_13))))))), (max((var_13), (((/* implicit */unsigned int) (_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
                    var_21 = ((/* implicit */int) max((((((((/* implicit */long long int) var_8)) | (var_17))) ^ (var_17))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-55)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((((((/* implicit */int) ((unsigned char) (signed char)46))) / (var_8))), (((((/* implicit */_Bool) 14209902785175418073ULL)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (unsigned char)75))))));
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        arr_8 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((-1518874033) + (2147483647))) >> (((var_18) + (1763886913)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (0))))) : (((((/* implicit */unsigned int) var_16)) - (arr_7 [i_3] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((2850179857141434606LL), (((/* implicit */long long int) arr_7 [(unsigned char)16] [i_3])))))))));
        arr_9 [i_3] [i_3] = (!(((/* implicit */_Bool) max((-5969264983605435371LL), (((/* implicit */long long int) (signed char)-36))))));
        arr_10 [i_3] [(short)11] |= (+(((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_6 [i_3])))));
        arr_11 [i_3] = max(((+(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_7 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181)))))) ? (((/* implicit */int) (signed char)36)) : ((+(((/* implicit */int) (short)-1)))))));
    }
    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 524287)), (var_13)))) * (var_12))) / (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)161)) ? (arr_3 [i_4] [i_4]) : (((/* implicit */int) var_5)))))))));
        arr_16 [i_4] = ((/* implicit */long long int) ((((unsigned long long int) var_3)) == (((/* implicit */unsigned long long int) (-(((int) arr_4 [i_4] [7LL] [i_4])))))));
        var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_6 [i_4])) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_4])) ^ (((/* implicit */int) (signed char)54))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4])))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 1) 
                        {
                            {
                                arr_27 [i_7] [i_4] [i_7] [6ULL] [6ULL] [6ULL] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (signed char)-36))))));
                                arr_28 [i_4] [i_4] [(unsigned char)2] [i_5] [i_4] = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) arr_13 [i_4] [i_8 - 3])) : (arr_7 [i_8 - 1] [i_8 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_8 - 3] [i_8 - 1])))));
                            }
                        } 
                    } 
                    arr_29 [i_4] [i_5] [(unsigned char)4] [6] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)67)), (min((((/* implicit */unsigned long long int) arr_0 [i_4])), (var_6)))));
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        var_24 *= (!((!((!(((/* implicit */_Bool) -810169790)))))));
        arr_34 [i_9] = ((/* implicit */unsigned char) (~((((_Bool)1) ? (((/* implicit */int) (unsigned char)75)) : (arr_2 [i_9] [i_9])))));
        arr_35 [i_9] = ((/* implicit */int) ((((((int) (signed char)-36)) >= (((/* implicit */int) (!(arr_32 [i_9])))))) && (((/* implicit */_Bool) 1054535603))));
        arr_36 [i_9] [i_9] = ((/* implicit */signed char) var_16);
    }
}

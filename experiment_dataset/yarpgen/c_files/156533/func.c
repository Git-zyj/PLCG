/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156533
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
    var_10 &= ((/* implicit */signed char) (+((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (signed char)124)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_1 [(_Bool)1] [i_0]);
        arr_5 [13ULL] = ((/* implicit */_Bool) ((int) (_Bool)1));
        arr_6 [i_0] = (-(((/* implicit */int) var_3)));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (arr_9 [i_1])))))))));
        arr_11 [3LL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2109752540)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (960666198U)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-84)))))) : (2109752547)));
        arr_12 [i_1] &= ((/* implicit */unsigned int) ((_Bool) ((arr_9 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-32760))))));
        arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */_Bool) arr_2 [(signed char)14])) ? (((/* implicit */int) var_8)) : (var_1))) - (1048)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) ^ (((((/* implicit */_Bool) (unsigned short)52214)) ? (-2768069179316144756LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [i_1] [i_1]))))));
        arr_14 [i_1] = (short)-7914;
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_18 [i_2] &= ((/* implicit */unsigned char) (~(((arr_1 [i_2] [(short)13]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [10LL])) ? (((/* implicit */unsigned int) var_1)) : (var_4))))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        arr_27 [10ULL] [i_3] [i_5] = ((/* implicit */short) ((((long long int) arr_25 [i_2])) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_0 [i_2])) : (((((/* implicit */_Bool) (short)-31182)) ? (((/* implicit */int) arr_20 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_3] [3U])))))))));
                        arr_28 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9))))) ? (((((/* implicit */_Bool) ((int) arr_9 [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4)))) : (arr_22 [i_2] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(-1235270231))))))))));
                    }
                } 
            } 
        } 
    }
    var_11 = (+(((((/* implicit */_Bool) ((((-5438126825769166084LL) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (short)-7914)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (_Bool)1)))))));
    var_12 = (+((-(8651260059417377832LL))));
    var_13 = ((/* implicit */unsigned int) var_1);
}

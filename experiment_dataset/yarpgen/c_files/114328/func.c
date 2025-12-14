/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114328
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
    var_13 = ((/* implicit */_Bool) min((var_13), (var_10)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_0);
        var_14 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)48593)) < (((/* implicit */int) (unsigned short)44144))))), (((var_10) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (unsigned short i_4 = 1; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_2] [i_4 - 1] [i_3])) ? (arr_12 [i_3 + 1] [i_3] [i_4 + 1] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 + 2] [i_2] [i_4 + 1])))));
                        arr_14 [i_1] [(unsigned short)13] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)48593))));
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), ((+(((unsigned long long int) var_10))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 3773629575U)) ? (5929277139296546754LL) : (((/* implicit */long long int) -2131642476))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 2; i_5 < 24; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (short i_6 = 3; i_6 < 22; i_6 += 4) 
            {
                for (unsigned short i_7 = 1; i_7 < 24; i_7 += 3) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned int) (((-(var_1))) / (((/* implicit */long long int) 658646060U))));
                        var_19 &= ((((/* implicit */int) (unsigned short)61440)) << (((((/* implicit */int) (unsigned char)31)) - (21))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (-1176590699) : (((/* implicit */int) (signed char)39)))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_25 [i_1] [(unsigned short)2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
            var_21 -= ((/* implicit */unsigned int) 4956099660515237744ULL);
            var_22 = 6632907400544019557ULL;
        }
    }
    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
    {
        arr_29 [i_9] [i_9] = ((/* implicit */short) (-(((((((/* implicit */_Bool) var_2)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) | (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) (short)6198)))))))));
        arr_30 [i_9] [i_9] = (short)-1;
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
    }
}

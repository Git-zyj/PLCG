/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147234
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) min((max((((/* implicit */short) (signed char)18)), (arr_4 [i_0 - 1]))), (((/* implicit */short) (!(arr_13 [i_0] [i_1] [i_0]))))));
                        var_18 |= ((/* implicit */unsigned short) ((_Bool) arr_8 [i_3] [i_2] [i_1] [i_0]));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */int) var_3);
    }
    for (unsigned short i_4 = 3; i_4 < 14; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [i_4 - 1])) ? (min((-2809578321429709088LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [(unsigned char)12] [i_6] [(unsigned short)6]))))) < (((/* implicit */long long int) arr_22 [(unsigned short)3] [i_5] [(_Bool)0])))))));
                    /* LoopSeq 4 */
                    for (int i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (((-(min((var_13), (2809578321429709088LL))))) << (((((/* implicit */_Bool) max(((unsigned short)18660), (((/* implicit */unsigned short) (signed char)-11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((828826658U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (arr_19 [i_4 - 3] [i_5] [i_6]))))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_18 [i_4 - 1])) ? (((/* implicit */unsigned long long int) arr_22 [i_4 - 2] [i_4] [i_4 - 2])) : (18446744073709551611ULL))))), (var_10))))));
                        var_22 = (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) * (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2809578321429709076LL)))))) : (621132913253253163ULL))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(var_13))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)28)) / (((/* implicit */int) arr_21 [i_6] [i_5])))))))) ? (((((((/* implicit */_Bool) (signed char)68)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) arr_19 [6] [i_5] [i_4 - 2])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4] [(unsigned short)10] [i_6] [i_7])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_7] [(_Bool)1] [i_7 - 2] [i_7])) && (((/* implicit */_Bool) var_2))))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) (+(17825611160456298453ULL)));
                        arr_28 [i_4] [i_6] [i_5] [i_6] [5] [(signed char)11] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_24 [i_6] [(_Bool)1] [i_6])) : (((/* implicit */int) arr_24 [i_6] [i_4] [i_6])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 2; i_9 < 15; i_9 += 1) /* same iter space */
                    {
                        var_25 = (+(((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) arr_27 [i_4] [i_6] [i_6])) : (((/* implicit */int) (_Bool)1)))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (~(15421788935848003201ULL))))));
                        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_16))));
                        var_28 = ((signed char) var_0);
                    }
                    for (unsigned int i_10 = 2; i_10 < 15; i_10 += 1) /* same iter space */
                    {
                        var_29 += ((/* implicit */unsigned char) max((((((((/* implicit */long long int) var_15)) / (arr_34 [i_4 - 1] [i_5] [10] [i_6] [i_6] [10ULL]))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))), (((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-72)))))))));
                        arr_36 [i_6] [(unsigned short)0] [i_6] = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_6]))))))));
                    }
                }
            } 
        } 
        arr_37 [i_4] = ((/* implicit */signed char) min((arr_31 [i_4]), (((/* implicit */unsigned int) ((signed char) max((arr_25 [(unsigned char)6] [i_4 + 2] [10]), (((/* implicit */int) var_0))))))));
        var_30 = ((/* implicit */long long int) var_15);
    }
    var_31 = ((/* implicit */signed char) var_9);
    var_32 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max(((unsigned short)38979), ((unsigned short)65535)))) ? (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_1))))) : (((/* implicit */int) var_0))))));
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((long long int) min((((/* implicit */long long int) var_2)), (var_6)))) : (((/* implicit */long long int) ((int) (+(((/* implicit */int) var_9))))))));
}

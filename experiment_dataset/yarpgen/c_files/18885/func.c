/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18885
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((20ULL), (20ULL)))))) ? (((((/* implicit */_Bool) (+(var_1)))) ? (max((((/* implicit */unsigned long long int) 805306368U)), (18446744073709551596ULL))) : (((((/* implicit */_Bool) 20ULL)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) min((((var_0) ? (7835167390368157251LL) : (-4609210638678634220LL))), (((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) min((((var_3) & (((/* implicit */int) arr_1 [i_0])))), (((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0])))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)157))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) var_1)))))) <= (((/* implicit */unsigned long long int) max((3489660946U), (((/* implicit */unsigned int) (unsigned char)76))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_12 [i_1])), (var_1))), (((/* implicit */long long int) ((11245722795883470712ULL) <= (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) var_11)))))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_17 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_13 [i_3] [i_3] [i_3 + 1])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4 - 1]))) + (arr_10 [i_2] [i_2] [i_3 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))));
                            arr_18 [13LL] [i_1] = ((/* implicit */_Bool) ((((arr_4 [i_5]) + (arr_4 [i_3 + 1]))) + (((arr_4 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1])))))));
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) 2776581296U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46))) : (18446744073709551582ULL)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_22 [i_4 - 1] [i_1] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min(((signed char)46), ((signed char)19)))) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) (unsigned char)177)))), ((-(((/* implicit */int) (unsigned short)43325))))));
                            arr_23 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((((/* implicit */int) (unsigned char)97)), (830289208)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) : (var_6)))), (min((((/* implicit */unsigned long long int) 7835167390368157251LL)), (20ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_1] [i_1] [i_6] [i_6] [i_6] [i_4 - 1] [i_6])))))));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned int) 4214225051U)))));
                            arr_24 [i_1] [i_1] [i_4] [i_6] = ((/* implicit */unsigned char) arr_0 [i_4] [i_2]);
                        }
                        var_16 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) min((12ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) arr_12 [i_2])) | (((/* implicit */int) arr_9 [i_4])))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_6 [i_1] [(unsigned char)7])) ? (((((/* implicit */int) (unsigned char)145)) - (((/* implicit */int) (unsigned short)19660)))) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), (((arr_15 [i_1] [4U] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) var_4)) % (((/* implicit */int) var_2))))));
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-19)) : (var_3)));
        arr_28 [i_7] = (+(((/* implicit */int) arr_27 [i_7] [i_7])));
        arr_29 [i_7] = ((/* implicit */long long int) arr_26 [i_7] [i_7]);
    }
    var_20 += var_10;
    /* LoopNest 2 */
    for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            {
                arr_36 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_33 [i_8 - 1] [i_8 - 1] [i_9])))))))) - (((((/* implicit */_Bool) 4214225051U)) ? (((/* implicit */int) arr_33 [i_9] [i_9] [i_9])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_8] [i_9] [i_9])) || (((/* implicit */_Bool) 2111569237531763922ULL)))))))));
                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) var_7))))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)60162)) != (((/* implicit */int) var_2))))))))));
                var_22 -= ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) 21ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65481)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_1))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10004
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
    var_12 -= ((/* implicit */signed char) var_8);
    var_13 = ((/* implicit */unsigned char) min((var_13), (var_11)));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)85)) ? (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)168)))) : ((-(18446744073709551611ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (signed char)96)))))));
        var_15 &= ((/* implicit */short) max((((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((signed char) var_8))))), ((((~(((/* implicit */int) (signed char)-89)))) / (((/* implicit */int) (unsigned char)171))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) / ((-(arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3])))))) ? (((((/* implicit */_Bool) ((signed char) var_8))) ? (((((/* implicit */_Bool) (unsigned char)159)) ? (6166595018570999918ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) : (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [(short)15] [i_2] [i_3])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)55))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [(_Bool)1] [i_2] [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (signed char)-48)))) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 3]))))));
                        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 8871423052045656819ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68)))))));
                    }
                    arr_12 [i_0] [(signed char)20] [i_0] = ((/* implicit */_Bool) (unsigned char)101);
                    arr_13 [i_2] [i_1] &= ((/* implicit */short) (-(((/* implicit */int) (short)-28470))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */short) (-((+(((/* implicit */int) (short)10888))))));
                        arr_17 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)100))))), (((((/* implicit */_Bool) (unsigned char)84)) ? (8512762281778758858ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_2])))))))) ? (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (18446744073709551611ULL))))) : (((/* implicit */int) arr_14 [i_2] [i_1] [i_1] [i_1]))));
                    }
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (signed char)-106)) ? (min((((/* implicit */unsigned long long int) (short)25)), (var_4))) : ((+(15ULL))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_0)) : ((((_Bool)1) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_5])) : (((/* implicit */int) (unsigned char)176)))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-10906)) : (((/* implicit */int) var_3))))) ? (min((544650361786583473ULL), (((/* implicit */unsigned long long int) arr_4 [i_5] [i_5] [i_5] [i_5])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 18446744073707454464ULL)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (signed char)127)))) >= (((((/* implicit */_Bool) (short)-15769)) ? (((/* implicit */int) (short)2046)) : (((/* implicit */int) var_10)))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)152))));
        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_19 [i_6]), (arr_19 [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6917529027641081856ULL)) ? (((/* implicit */int) (unsigned short)48464)) : (((/* implicit */int) arr_19 [i_6]))))) : (((long long int) arr_19 [i_6]))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146959
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) -6221918417361429028LL)) ? (9922663909167952073ULL) : (9252890488246667659ULL)));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))) : (var_8)));
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-127)) ? (6221918417361429037LL) : (((/* implicit */long long int) 2128778956U))));
        var_17 *= ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) (short)32406)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9252890488246667657ULL)) ? (((/* implicit */long long int) -1506851474)) : (max((((/* implicit */long long int) -26)), (6221918417361429023LL)))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((arr_8 [i_3] [i_3] [i_2]) + (((/* implicit */int) arr_2 [i_3])))) >> (((var_13) - (656569579U)))))) >= (arr_12 [i_0] [i_0 + 1] [i_1 + 1] [3ULL] [0U] [i_4])));
                                var_19 = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] [i_4]);
                                arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((signed char) var_13))), (var_14)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_5 = 2; i_5 < 8; i_5 += 2) /* same iter space */
    {
        var_20 &= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (arr_5 [i_5] [i_5 - 2]))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((var_1) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8))), (max((((/* implicit */unsigned int) arr_1 [i_5 - 1])), (arr_5 [i_5] [i_5])))))) : (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_11)) : (arr_4 [i_5] [(unsigned char)4] [i_5]))) % (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_7))))))))))));
    }
    for (unsigned int i_6 = 2; i_6 < 8; i_6 += 2) /* same iter space */
    {
        var_22 -= ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned int) var_2)), (arr_15 [i_6] [i_6] [i_6] [i_6] [i_6 + 2] [i_6 - 1] [i_6 + 2]))));
        var_23 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (((/* implicit */int) arr_0 [i_6 - 1])) : (((/* implicit */int) arr_0 [i_6 - 1])))));
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    {
                        arr_31 [i_6 + 2] [i_6 + 2] [i_6] [i_7] [i_8] [i_6 + 2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((int) max((max((var_8), (var_11))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10]))) : (var_3)))))))));
                            var_25 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -6221918417361429038LL)) ? (((/* implicit */int) arr_18 [i_7])) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) ((((/* implicit */int) arr_26 [i_6] [i_7] [i_8] [i_7])) == (((/* implicit */int) var_6))))) : (((/* implicit */int) var_14))))));
                        }
                    }
                } 
            } 
        } 
        arr_35 [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_3)) : (arr_7 [i_6] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) 16472288658217429433ULL))), (((((/* implicit */_Bool) arr_5 [i_6] [i_6])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))))) : (((unsigned long long int) ((arr_21 [i_6]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    }
    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32404)) ? (((/* implicit */int) (short)32406)) : (((/* implicit */int) (unsigned char)60))))) ? (((unsigned long long int) ((unsigned long long int) var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
}

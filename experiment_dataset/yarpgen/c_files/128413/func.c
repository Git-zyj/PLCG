/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128413
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
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_2)), (((((/* implicit */long long int) min((var_4), (((/* implicit */int) (signed char)-1))))) - (var_12)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2617767429U)) ? (((unsigned int) var_9)) : (arr_13 [i_0] [i_1] [i_2] [i_3] [i_1])));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_4 + 3] [i_4 - 1])) ? (var_5) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 23; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) (-(((/* implicit */int) arr_6 [(unsigned short)5] [i_1] [i_1]))));
                                var_20 -= ((/* implicit */signed char) arr_4 [4] [4] [4]);
                                var_21 = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                    arr_20 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2] [i_2])) ? (var_5) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) != (18446744073709551601ULL))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 2; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_0] [i_7 + 1] [i_2] [22U] [i_7 + 1])) % (((/* implicit */int) arr_24 [i_0] [i_7 - 1] [i_2] [i_7] [i_7 - 1]))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                }
                for (int i_9 = 2; i_9 < 21; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) var_4);
                                arr_36 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                    var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (-(14ULL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)44))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1] [i_0])))) != (arr_27 [i_9 + 3] [i_9 - 2] [i_9 + 2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 1; i_13 < 23; i_13 += 2) 
                        {
                            {
                                arr_42 [i_0] [i_12] [(signed char)18] [i_0] [i_0] = ((/* implicit */unsigned char) arr_38 [i_0] [i_0] [i_0] [i_0]);
                                var_25 = ((/* implicit */signed char) min((((/* implicit */int) ((arr_17 [i_13 + 1] [i_9 - 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))), ((~(((/* implicit */int) arr_4 [20LL] [i_9] [i_9 + 2]))))));
                                arr_43 [i_0] [i_12] [i_9] [i_0] = (+(((((/* implicit */int) ((((/* implicit */_Bool) 2617767442U)) && (((/* implicit */_Bool) (unsigned char)238))))) - (((((/* implicit */int) (unsigned short)47630)) << (((((((/* implicit */int) arr_3 [i_0] [i_1])) + (36))) - (9))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_34 [i_0] [i_1]), (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), ((signed char)123))))) < (arr_17 [i_9 + 1] [i_9 + 1]))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) (short)248))))), (min((arr_1 [i_0]), (4117375975896426633LL)))))));
                    arr_44 [i_0] = ((unsigned char) (-(((/* implicit */int) (signed char)62))));
                }
                for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    arr_48 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2617767429U)) ? (((/* implicit */long long int) 1677199880U)) : (-2378609197543301137LL)));
                    /* LoopNest 2 */
                    for (signed char i_15 = 2; i_15 < 24; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((((/* implicit */long long int) var_7)) == (((((/* implicit */_Bool) (-(var_9)))) ? ((+(var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6))))))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((1677199867U) > (((/* implicit */unsigned int) 2104053167)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_0] [i_16]))) <= (arr_5 [i_0] [i_0] [i_0] [i_16])))) : (((((/* implicit */_Bool) var_9)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)112))))))) ? (((/* implicit */long long int) (-(var_7)))) : (min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0] [i_14] [i_14] [i_15 + 1] [i_15]))))))))));
                            }
                        } 
                    } 
                }
                arr_56 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0])) ? (2147483647) : (arr_41 [i_0] [8] [8] [i_0] [20LL] [i_0])))));
            }
        } 
    } 
}

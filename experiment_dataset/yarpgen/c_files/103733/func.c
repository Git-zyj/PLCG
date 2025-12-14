/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103733
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_11);
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((8U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0])), (var_0))))))) & (((/* implicit */int) arr_0 [i_1] [i_0]))));
                        arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((max((((arr_3 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))))), (((/* implicit */unsigned int) arr_1 [i_0])))), (((18U) - (4294967282U)))));
                    }
                } 
            } 
        } 
        var_15 -= ((/* implicit */unsigned char) arr_5 [i_0]);
    }
    for (signed char i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
    {
        arr_18 [17ULL] [i_4] = ((/* implicit */unsigned char) 13U);
        arr_19 [i_4 + 1] = ((/* implicit */unsigned char) 12687382976064248109ULL);
    }
    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (unsigned short i_7 = 3; i_7 < 20; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 22; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            {
                                arr_33 [i_5] = ((/* implicit */int) ((4294967285U) * (4294967280U)));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (max((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) var_3)))), (max((((var_8) ^ (((/* implicit */unsigned long long int) -7652709006923060874LL)))), (((/* implicit */unsigned long long int) var_13))))))));
                                arr_34 [i_5] [5LL] [i_7] [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) -1280891783)) ? (min((var_7), (((/* implicit */unsigned long long int) arr_29 [3ULL] [3ULL] [i_7 - 1] [i_8])))) : (((unsigned long long int) max((((/* implicit */long long int) (unsigned short)6097)), (7652709006923060886LL))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_22 [22ULL] [i_6])), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)169)) : (-2147483642)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        for (signed char i_11 = 2; i_11 < 22; i_11 += 4) 
                        {
                            {
                                arr_40 [(unsigned char)5] [i_6] [(unsigned char)5] [i_10] [i_11 + 1] [i_5] = ((((/* implicit */_Bool) (unsigned short)16836)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))));
                                arr_41 [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_27 [i_10] [i_7 + 1] [i_6] [i_5 + 2]);
                                var_18 = arr_36 [i_6];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            {
                                arr_47 [13ULL] [i_7] [i_5] = ((/* implicit */unsigned int) arr_36 [i_7]);
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_35 [i_5 + 1] [i_5 - 1] [i_13] [i_13] [i_13] [i_13]) - (arr_35 [(unsigned short)6] [i_5 - 1] [i_13] [i_5 - 1] [i_13] [i_13])))) ? (arr_35 [i_5 + 2] [i_5 - 1] [i_6] [i_5 + 2] [i_5 + 2] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_43 [20] [i_5 - 1] [i_13] [i_5] [i_13]), (((/* implicit */unsigned char) arr_27 [i_5 + 2] [i_5 + 2] [i_7] [i_12]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_42 [i_5] [i_14] [i_5] [i_14]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_14] [i_5 + 1]))))))));
            var_21 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)227)), (8419130463992389583ULL)));
            arr_50 [i_5] [i_5] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_37 [i_5] [i_5 + 2] [i_5]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [8] [8])) ? (var_1) : (((/* implicit */unsigned int) var_0))))))))) : (max((var_6), (((/* implicit */unsigned long long int) arr_46 [i_5] [i_5] [i_5] [i_14])))));
            arr_51 [(unsigned short)2] |= max(((-(2372458710207591091ULL))), (((/* implicit */unsigned long long int) 315091032U)));
        }
        arr_52 [i_5] = ((/* implicit */unsigned int) max(((~(4432197463265328450ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-29)) && (((/* implicit */_Bool) (unsigned char)48)))))));
    }
    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((-5067621130433134232LL) | (((/* implicit */long long int) 4294967294U))))) != (var_6)));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_12))));
    var_24 = ((/* implicit */signed char) var_5);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124855
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_10 = ((/* implicit */signed char) var_4);
        var_11 = min((((var_5) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))) : (max((var_9), (((/* implicit */int) var_0)))))), (((/* implicit */int) var_0)));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_3))));
        arr_3 [i_0] [(unsigned char)2] |= ((/* implicit */_Bool) var_3);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            var_13 += ((/* implicit */short) var_8);
            arr_6 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_3))))) ? (var_9) : (((/* implicit */int) var_0))));
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) var_5);
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] = ((/* implicit */int) var_2);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_3] [(signed char)13] [i_0] = ((/* implicit */long long int) var_0);
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_2))));
                            arr_19 [i_0] [i_4] [i_0] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((var_5) ? (((/* implicit */int) var_4)) : (((var_1) ? (var_9) : (((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
                arr_20 [i_0 - 2] [i_0] [i_3 + 1] = ((/* implicit */unsigned char) var_1);
                var_15 = ((/* implicit */signed char) var_3);
            }
            for (short i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                arr_25 [i_6] [i_6] |= ((/* implicit */int) var_0);
                arr_26 [i_0] [i_2] [i_6] = ((/* implicit */long long int) var_7);
                var_16 = ((/* implicit */long long int) var_1);
            }
            for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                arr_30 [i_0 + 1] [i_0] [i_7 + 3] [i_7 + 3] = ((/* implicit */int) var_1);
                var_17 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((-1042221648), (((/* implicit */int) (signed char)46))))) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_37 [i_0] [i_2] [i_0] [i_8] [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 6227175382289484088LL)) ? (8678407334264649139ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33)))));
                            var_18 = ((/* implicit */signed char) var_4);
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        {
                            arr_44 [i_0 - 1] [i_2] [i_7] [i_10] [0LL] [i_0] [i_7] = ((/* implicit */_Bool) var_8);
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_1))));
                        }
                    } 
                } 
            }
            for (long long int i_12 = 4; i_12 < 17; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        {
                            arr_53 [(signed char)2] [11] [i_2] [i_12 + 3] [i_0] [i_14] = ((/* implicit */unsigned long long int) var_1);
                            var_20 = ((/* implicit */short) var_5);
                        }
                    } 
                } 
                arr_54 [i_0] [(unsigned char)6] [(unsigned char)6] [i_12 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (3765673210000815064LL) : (((/* implicit */long long int) 268369920))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))))));
            }
            arr_55 [i_0] [i_2] [i_2] = var_1;
            /* LoopNest 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (long long int i_16 = 2; i_16 < 16; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_1))));
                            arr_64 [i_16] [i_16] [i_15] [i_2] [i_16] |= ((/* implicit */unsigned char) min((var_9), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8678407334264649136ULL)) ? (7363358180918473696LL) : (((/* implicit */long long int) ((/* implicit */int) (short)15680)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))));
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
                        }
                    } 
                } 
            } 
            arr_65 [(signed char)12] |= ((/* implicit */short) var_5);
            arr_66 [i_0] [i_0] [i_0] = ((/* implicit */int) var_3);
        }
    }
    /* LoopNest 2 */
    for (short i_18 = 1; i_18 < 12; i_18 += 1) 
    {
        for (signed char i_19 = 0; i_19 < 14; i_19 += 4) 
        {
            {
                arr_72 [i_19] = ((/* implicit */_Bool) var_8);
                /* LoopSeq 1 */
                for (int i_20 = 1; i_20 < 13; i_20 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 14; i_21 += 4) 
                    {
                        for (long long int i_22 = 0; i_22 < 14; i_22 += 4) 
                        {
                            {
                                arr_81 [i_18] [i_19] [i_20] [i_19] = var_2;
                                var_23 += ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 0; i_23 < 14; i_23 += 4) 
                    {
                        for (signed char i_24 = 1; i_24 < 13; i_24 += 2) 
                        {
                            {
                                arr_89 [i_24 + 1] [i_23] [i_20] [i_19] [i_18] = min((((/* implicit */long long int) var_4)), (var_8));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_4)) : (min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (signed char)-12)) ? (-1010306257) : (656830317)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)21462))) : (-9031615222118402057LL))))));
                    arr_90 [i_18] [i_20] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-268369907) : (((/* implicit */int) (signed char)-11))))), (16821653089382401534ULL))), (((/* implicit */unsigned long long int) (signed char)-42))));
                }
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((((/* implicit */signed char) var_5)), (var_2))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))));
    var_27 = ((/* implicit */unsigned long long int) var_8);
}

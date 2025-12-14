/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114185
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_7))))))), (min((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) var_14))))), (var_2))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_2] [i_0] [(short)4] [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
                                var_19 = ((/* implicit */_Bool) min((756442297U), (((/* implicit */unsigned int) min((max((var_9), (arr_6 [i_0] [i_0]))), ((~(((/* implicit */int) (signed char)31)))))))));
                                var_20 = ((/* implicit */short) min((min((arr_0 [i_1 - 1]), (((/* implicit */long long int) (unsigned short)64385)))), (max((((/* implicit */long long int) (unsigned short)55757)), (arr_0 [i_1 - 3])))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((232410221) | (((/* implicit */int) (_Bool)1)))))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1])) + (((((/* implicit */unsigned long long int) arr_4 [i_1 - 2] [i_1 - 1] [i_1 + 1])) + (arr_10 [i_0] [i_1] [i_0] [i_1 + 1]))))))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_22 &= ((/* implicit */unsigned int) max(((-((-(((/* implicit */int) (signed char)0)))))), (((/* implicit */int) var_12))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        arr_28 [i_8] [i_5] [6] [i_6] [i_5] [6U] = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                        var_23 -= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) arr_9 [i_5] [i_5] [i_5])))) > (((/* implicit */int) var_6))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) ((2902369063U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))), ((~(-5590705893354926444LL))))), (((/* implicit */long long int) var_10))));
                }
            } 
        } 
        arr_29 [i_5] = ((/* implicit */unsigned long long int) min((min((min((var_0), (((/* implicit */long long int) (unsigned short)41007)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)20511))))))), (((/* implicit */long long int) (signed char)0))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4294967168U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25900)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55757))) | (arr_5 [(unsigned short)8] [i_9])))));
        var_26 = ((/* implicit */unsigned char) arr_27 [i_9] [(_Bool)1] [i_9] [i_9] [i_9] [i_9]);
        var_27 = ((/* implicit */unsigned long long int) ((unsigned short) var_3));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) (short)255)) + (((/* implicit */int) arr_35 [i_10]))));
                    var_29 = ((/* implicit */unsigned int) var_9);
                    arr_42 [i_10] [i_10] [i_11] = ((/* implicit */long long int) (_Bool)0);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (_Bool)1))));
                                var_31 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-30412)))) ^ (((/* implicit */int) var_17))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_10] [i_10] [i_10] [11])) | (((/* implicit */int) arr_23 [i_10] [i_10] [i_10] [(_Bool)0]))));
        /* LoopNest 2 */
        for (unsigned short i_15 = 4; i_15 < 12; i_15 += 1) 
        {
            for (long long int i_16 = 2; i_16 < 11; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 11; i_17 += 3) 
                    {
                        for (unsigned int i_18 = 1; i_18 < 11; i_18 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((_Bool) (signed char)-1)))));
                                var_34 = ((/* implicit */int) (short)18897);
                                var_35 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2))))));
                            }
                        } 
                    } 
                    arr_58 [i_15] [i_15 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) | (((((/* implicit */unsigned long long int) var_8)) & (var_2)))));
                    arr_59 [i_10] [i_15] [12U] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (((long long int) var_0))));
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        var_36 -= ((/* implicit */short) 3538524999U);
                        arr_63 [(_Bool)1] [i_19] [i_10] [i_19] [i_10] |= ((/* implicit */unsigned int) 15859516280698302315ULL);
                    }
                    for (unsigned long long int i_20 = 2; i_20 < 12; i_20 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10]))) : (var_0)));
                        arr_67 [i_10] [i_15] = ((/* implicit */short) var_16);
                        arr_68 [(_Bool)1] [i_15] = (!(((/* implicit */_Bool) (unsigned char)248)));
                        var_38 = ((/* implicit */unsigned char) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55)))));
                        var_39 = ((/* implicit */unsigned int) ((unsigned char) var_10));
                    }
                }
            } 
        } 
    }
    var_40 = ((/* implicit */_Bool) max((var_8), (min((max((((/* implicit */unsigned int) (unsigned char)0)), (17U))), (var_8)))));
    var_41 = ((/* implicit */signed char) ((var_1) ? (((/* implicit */int) var_17)) : (((((((/* implicit */int) var_7)) & (((/* implicit */int) var_17)))) | (((/* implicit */int) (unsigned short)960))))));
    var_42 = ((/* implicit */long long int) (_Bool)1);
    var_43 = ((/* implicit */long long int) min((var_43), (var_0)));
}

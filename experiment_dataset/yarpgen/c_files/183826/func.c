/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183826
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((var_10) < (((/* implicit */unsigned long long int) ((long long int) ((17980493390295482205ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_2))))) ? (((((var_0) + (9223372036854775807LL))) >> (((var_7) - (17360631530932215882ULL))))) : (max((arr_2 [i_0]), (arr_3 [i_0 - 3])))))) ? (var_6) : (((/* implicit */unsigned long long int) max((arr_3 [i_0]), (var_0))))));
        var_14 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) (+(var_10)))))))));
        arr_5 [i_0] = var_5;
        arr_6 [i_0 - 1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 16775168ULL)))))))) ? (max((max((((/* implicit */long long int) var_4)), (var_12))), (max((var_5), (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
        arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 260046848LL)) || (((/* implicit */_Bool) (signed char)76))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_8))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_14 [(signed char)2] [i_2] = (+(16815788292764821898ULL));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_5])) : (((/* implicit */int) var_4))))));
                            var_15 ^= ((/* implicit */signed char) var_12);
                        }
                    } 
                } 
            } 
            arr_26 [i_2] [i_2] = ((/* implicit */long long int) (-(var_6)));
        }
        for (long long int i_6 = 2; i_6 < 14; i_6 += 2) 
        {
            var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)6))))) ? (((/* implicit */int) (signed char)-20)) : (((((/* implicit */_Bool) 16775164ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)44))))));
            arr_30 [i_6] = ((/* implicit */long long int) arr_0 [i_1]);
        }
        for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            arr_42 [i_1] [i_1] [i_8] [i_1] [i_9] [i_7] [i_10] = ((/* implicit */signed char) (-(var_11)));
                            arr_43 [i_1] [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_17 [i_7] [i_7] [i_8] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_12 [i_1])))) : ((+(arr_19 [i_7] [i_9] [i_8] [i_7] [i_7])))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(arr_34 [i_10]))))));
                        }
                    } 
                } 
            } 
            var_18 = var_9;
            var_19 ^= ((/* implicit */long long int) (~(var_11)));
        }
    }
    for (long long int i_11 = 2; i_11 < 22; i_11 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_12 = 2; i_12 < 22; i_12 += 4) 
        {
            var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_11]))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            arr_48 [i_11] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9003088708585785067LL)))))) | (((long long int) var_7)));
        }
        arr_49 [i_11] [i_11] = ((/* implicit */long long int) (+((+((-(var_6)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            for (long long int i_14 = 1; i_14 < 22; i_14 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_45 [i_13] [i_13])))))))) : (min(((+(var_8))), (min((((/* implicit */unsigned long long int) var_2)), (var_6)))))))));
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 4) 
                    {
                        for (long long int i_16 = 2; i_16 < 20; i_16 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_52 [i_16] [i_11] [i_11]) <= (var_0))))))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_3))))))))))));
                                arr_60 [i_16] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(arr_54 [i_14])))) ? ((+(var_8))) : ((-(var_6))))) > (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (var_12)))), (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) var_5))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_9)) : (var_10)))) || (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) (-(((long long int) var_12)))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) : ((-(var_0))))))));
    /* LoopNest 2 */
    for (long long int i_17 = 1; i_17 < 20; i_17 += 4) 
    {
        for (signed char i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    for (long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                    {
                        {
                            var_25 |= ((/* implicit */long long int) ((18446744073709551606ULL) >> (((9003088708585785068LL) - (9003088708585785030LL)))));
                            var_26 = ((/* implicit */long long int) max((var_26), (min((((/* implicit */long long int) (((-(((/* implicit */int) var_4)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (((long long int) (!(((/* implicit */_Bool) var_3)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 2; i_21 < 19; i_21 += 3) 
                {
                    for (signed char i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        {
                            var_27 = var_12;
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_23 = 0; i_23 < 21; i_23 += 1) 
                            {
                                arr_80 [i_17] [i_18] [i_17] [i_18] [i_21] [i_17] [i_18] = ((/* implicit */long long int) (+(var_8)));
                                arr_81 [i_17] [i_17] [i_18] [i_23] [i_22] = ((long long int) (+(var_12)));
                            }
                            for (signed char i_24 = 0; i_24 < 21; i_24 += 4) 
                            {
                                var_28 = ((/* implicit */unsigned long long int) var_4);
                                var_29 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (max((((((/* implicit */_Bool) var_4)) ? (var_12) : (arr_47 [i_22]))), ((-(arr_47 [i_17])))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_25 = 1; i_25 < 18; i_25 += 4) 
                            {
                                arr_86 [i_25] [i_17] [i_18] [i_18] [i_17] = ((/* implicit */signed char) arr_52 [i_17] [i_17] [i_17]);
                                arr_87 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */_Bool) arr_70 [i_18])) ? (arr_57 [i_18] [i_22]) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) > (var_5)))))));
                                var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_7)))) * (((/* implicit */int) var_1))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}

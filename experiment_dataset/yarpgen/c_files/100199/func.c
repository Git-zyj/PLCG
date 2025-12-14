/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100199
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = ((((/* implicit */_Bool) 3225231747U)) ? (((/* implicit */unsigned long long int) 3225231761U)) : (10213010117840538359ULL));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [20] [i_1] [(unsigned short)1])) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_3] [(_Bool)1]))) - (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4 - 1] [i_1])))));
                                arr_17 [10] [i_0] [i_2] [(unsigned short)4] [(_Bool)1] [i_4] [i_4 + 1] = ((/* implicit */int) ((unsigned long long int) (~(-7367057797653735961LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [19LL])) ? (((/* implicit */long long int) arr_0 [i_0])) : (2441271227473706350LL)))) ? (arr_15 [i_5 + 1] [i_5] [i_0] [i_5 + 2] [i_5 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) arr_6 [i_0] [10ULL] [i_0])) : (var_11)))));
                                var_19 *= ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [10LL])) ? (((/* implicit */int) var_7)) : (arr_4 [i_0] [i_0])))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0])));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                {
                    arr_28 [i_0] [i_7] [i_8] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_2)))) ? (((/* implicit */long long int) arr_13 [16U] [i_0] [i_7] [i_7] [i_8])) : (((var_11) + (((/* implicit */long long int) arr_6 [i_0] [i_0] [6LL])))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (8258386913886878192LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) min((var_9), (((/* implicit */short) var_8))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 408952422)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_15))))) : ((-(var_13)))))))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    var_23 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) arr_2 [i_9] [i_9]);
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_4))));
        var_26 *= ((/* implicit */unsigned long long int) var_0);
    }
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        var_27 = ((((/* implicit */int) var_8)) * (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)5)), (423425645)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1)))));
        /* LoopNest 3 */
        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                for (signed char i_13 = 3; i_13 < 10; i_13 += 2) 
                {
                    {
                        arr_43 [i_13] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */unsigned short) arr_18 [i_10] [i_10] [i_12] [i_13]);
                        var_28 *= arr_9 [i_10] [i_10] [i_12];
                    }
                } 
            } 
        } 
    }
}

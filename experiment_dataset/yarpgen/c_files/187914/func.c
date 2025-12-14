/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187914
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned short) var_7)), (max((((/* implicit */unsigned short) arr_1 [i_0])), (min((arr_0 [i_0]), (var_5))))))))));
        arr_2 [i_0] = ((/* implicit */short) 2825059816U);
        arr_3 [i_0] &= ((/* implicit */_Bool) min((var_0), (var_13)));
        arr_4 [i_0] = ((/* implicit */unsigned int) 12174875849710262732ULL);
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >= (((((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) >> (((/* implicit */int) (_Bool)1)))))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-20467)), ((unsigned short)162)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)20490))) : (min((((/* implicit */long long int) min((arr_0 [i_1]), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) 2319165464U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
        var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [(unsigned short)4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((short) (signed char)-47))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12299))) <= (0U))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 17ULL)) ? (9044932843965421432LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)11428)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2])) || (((/* implicit */_Bool) (signed char)50))));
        var_20 += ((/* implicit */_Bool) ((long long int) arr_7 [i_2]));
        /* LoopSeq 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)27))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_6 [i_3])));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))) : (((arr_12 [i_2] [i_3 - 1]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((_Bool) arr_15 [i_2] [(short)4] [(short)4]));
                            var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31874)) ? (3222445346U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11415)))));
                            arr_25 [i_2] [i_4 - 1] = ((/* implicit */unsigned short) (short)18185);
                        }
                    } 
                } 
            } 
            arr_26 [8LL] &= ((/* implicit */_Bool) var_7);
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_29 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_8 - 1]) : (arr_6 [i_8 - 1])));
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_8)) : (var_2)))) : (var_10))))));
            var_27 = (+(arr_15 [i_2] [i_2] [i_8 - 1]));
            var_28 = ((/* implicit */signed char) (_Bool)1);
            var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) var_8)) != (var_6)));
        }
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) var_10);
                        var_31 = ((/* implicit */long long int) ((unsigned short) var_3));
                    }
                } 
            } 
        } 
        var_32 *= ((/* implicit */_Bool) ((unsigned long long int) 18446744073709551598ULL));
    }
    var_33 ^= max((((/* implicit */long long int) var_0)), (var_12));
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 172817778106353869LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
}

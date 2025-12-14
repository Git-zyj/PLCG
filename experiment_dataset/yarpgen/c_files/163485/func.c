/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163485
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (7434122038029354461ULL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] = var_4;
                var_12 = ((/* implicit */unsigned int) arr_3 [i_1]);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                    {
                        var_13 &= ((/* implicit */short) 4366976360017938709ULL);
                        var_14 = ((((/* implicit */_Bool) 8386560)) ? (((/* implicit */unsigned long long int) -1)) : (16634408760207185438ULL));
                    }
                    for (short i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_15 -= ((/* implicit */unsigned int) 14079767713691612892ULL);
                            arr_16 [i_4] [i_1] [i_2] [i_4] [i_2] [i_0] = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) var_4)))));
                            arr_17 [i_1] [4U] [i_1] [i_1] = ((/* implicit */int) min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) ((short) 16634408760207185438ULL)))));
                        }
                        var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((var_4) <= (14079767713691612902ULL)))), ((-(((/* implicit */int) arr_12 [i_0] [i_2] [i_0] [i_1] [i_0] [i_0]))))))) >= (min((arr_10 [i_0] [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) var_10)) ? (17583596109824ULL) : (var_7)))))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5))))), (((unsigned long long int) (-(((/* implicit */int) var_1)))))))));
                        var_18 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_3)))), (6382680356807789608ULL)));
                    }
                    for (int i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        arr_22 [i_2] [i_6] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_6]);
                        var_19 &= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) (-(12064063716901762020ULL)))) && (((/* implicit */_Bool) 1828493186U))))), (4063232)));
                        var_20 ^= min((var_0), ((~(max((arr_8 [i_1]), (var_9))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            arr_25 [5] [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((arr_4 [i_1] [i_2]) <= (var_10)))) <= (arr_13 [i_2] [i_1] [i_7] [i_6])));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_7 [i_6 - 2])));
                            var_21 &= ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) var_5)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            arr_30 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1812335313502366150ULL)) && (((/* implicit */_Bool) 2147483628))));
                            arr_31 [i_0] [i_1] [i_2] [i_0] [i_8] [i_1] = ((/* implicit */unsigned long long int) ((1125899902648320ULL) <= (((/* implicit */unsigned long long int) var_3))));
                        }
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        arr_35 [10ULL] [i_2] [10ULL] [i_0] = ((/* implicit */unsigned int) (short)30117);
                        arr_36 [(short)6] [i_1] [4U] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_1)))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((((int) var_7)), (((/* implicit */int) ((((/* implicit */_Bool) max((2001539494U), (134217727U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [7U] [7U] [i_2] [i_9] [i_9] [i_10])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9] [i_10])))))))))));
                            var_23 &= ((/* implicit */int) var_2);
                        }
                        for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            var_24 *= (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                            var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_39 [i_0] [2ULL] [2ULL] [2ULL] [3ULL])) ? (var_3) : (var_3))))), (((unsigned long long int) arr_40 [i_0] [i_0]))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(var_3)))), (12064063716901762015ULL)));
                            arr_44 [i_2] [i_2] [8U] [i_9] [i_12] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (short)-32759)) + (2147483647))) >> (((var_6) - (14931227627688571314ULL)))))));
                        }
                    }
                    arr_45 [i_0] [i_1] [i_2] = var_2;
                }
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                {
                    var_27 += max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_3))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [6] [i_0])) + (arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25156))) : (max((var_10), (arr_7 [i_13]))))));
                    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 918581188U))));
                    arr_49 [i_0] [2ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_37 [i_13] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_4))) > (((/* implicit */unsigned long long int) ((int) -730384333)))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */int) min(((-(((((/* implicit */_Bool) 15758308200197301378ULL)) ? (8070362847077627578ULL) : (var_0))))), (((/* implicit */unsigned long long int) (short)960))));
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_0) : ((+(((var_0) | (var_10)))))));
}

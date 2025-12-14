/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144596
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
    var_10 = ((/* implicit */unsigned char) (+(14370106140078050664ULL)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 880029590)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (max((((/* implicit */unsigned long long int) (signed char)-55)), (4076637933631500973ULL)))))) ? (((((/* implicit */_Bool) 4076637933631500952ULL)) ? (167298468975925431ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) 1745570129)) : (4076637933631500975ULL)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_11 = min((((((((/* implicit */int) arr_13 [i_0])) | (((/* implicit */int) arr_7 [i_4])))) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)65))))))));
                                var_12 *= ((/* implicit */int) max(((!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_1] [(signed char)12] [(short)4])), (17179869183LL)))))), ((!(((((/* implicit */_Bool) 4076637933631500951ULL)) || (((/* implicit */_Bool) (short)28590))))))));
                                var_13 = ((/* implicit */long long int) ((unsigned char) ((int) ((var_3) | (((/* implicit */int) (short)15423))))));
                                arr_14 [i_0] [i_1] [i_1] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_4 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_0 - 2]))))) : (((((/* implicit */_Bool) ((unsigned char) 127213304))) ? (max((((/* implicit */unsigned long long int) (unsigned char)191)), (11223986236692363687ULL))) : (max((4076637933631500962ULL), (((/* implicit */unsigned long long int) arr_9 [i_1]))))))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (unsigned char)15)))) + (((/* implicit */int) max((var_5), (var_6))))))) ? (((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_6))), (var_1)))) : (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0 - 2] [i_4 + 1]))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) (-(((int) (signed char)117))));
                    arr_16 [i_0] = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [(unsigned char)1] [i_2])) : (var_3))), ((~(-1236229109)))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_7 [i_0])))))))));
    }
    for (unsigned char i_5 = 4; i_5 < 8; i_5 += 3) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) arr_12 [i_5 - 3] [i_5 + 2] [(signed char)10] [i_5 - 1] [i_5 - 2]))), (((((/* implicit */int) arr_9 [i_5])) / (((/* implicit */int) (unsigned char)185))))));
        /* LoopSeq 4 */
        for (signed char i_6 = 3; i_6 < 8; i_6 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (long long int i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    {
                        arr_33 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) var_1);
                        var_16 = ((/* implicit */int) min((var_16), ((+(((/* implicit */int) (_Bool)0))))));
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            arr_36 [i_6 - 2] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */short) ((arr_20 [i_5 + 1]) * (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1236229109)) && (((/* implicit */_Bool) (unsigned char)200))))))))));
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((min(((unsigned char)135), ((unsigned char)0))), (var_6))))));
                        }
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8)))) + (arr_35 [i_8] [i_8 - 1] [i_8] [i_10])))) && (((/* implicit */_Bool) arr_22 [i_5] [i_5 - 2]))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_31 [i_5 - 3] [i_10] [8] [i_8]) % (((/* implicit */int) (unsigned short)65519))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_7)))) : (((/* implicit */int) ((unsigned short) arr_32 [i_6] [(unsigned char)5])))))))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            arr_42 [i_5 - 2] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((unsigned short) arr_12 [i_5] [i_6] [i_7] [i_8 - 1] [(unsigned char)8]))))));
                            var_20 = min((18446744073709551603ULL), (((/* implicit */unsigned long long int) ((int) 0))));
                            arr_43 [i_5] [i_5] [i_5 + 1] [2] [i_5 + 1] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_5))))))) ? ((~(min((var_2), (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_5])) && (((/* implicit */_Bool) var_9))))) > (arr_18 [i_5] [i_5])))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 9; i_12 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)82)) ? (var_3) : (((/* implicit */int) arr_27 [i_5 - 3] [i_7] [i_7] [i_12 - 3])))))));
                            arr_47 [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] [i_8] = (+(((/* implicit */int) ((unsigned short) arr_13 [i_5]))));
                        }
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) max((4076637933631500973ULL), (((/* implicit */unsigned long long int) 1236229109))));
            var_23 = ((/* implicit */long long int) ((int) (((-(var_9))) / (((/* implicit */int) ((_Bool) 8172941880668087718ULL))))));
            var_24 &= var_8;
        }
        for (signed char i_13 = 3; i_13 < 8; i_13 += 4) /* same iter space */
        {
            arr_50 [i_5] [i_13] [i_13] = ((/* implicit */signed char) (~(((((/* implicit */int) var_1)) + (((/* implicit */int) (_Bool)0))))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((-1548227173) != (((/* implicit */int) (signed char)13))))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            var_26 = (+(((/* implicit */int) ((unsigned char) arr_7 [i_5 + 1]))));
            var_27 = ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-51)), ((unsigned char)204))))))) ? (min((-2108122519369674138LL), (((/* implicit */long long int) arr_9 [i_5])))) : (((((((((/* implicit */_Bool) 1056031013)) ? (arr_29 [i_5] [i_5 - 2] [i_5] [i_14]) : (((/* implicit */long long int) -2147483635)))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (_Bool)1)))) - (90))))));
            var_28 -= ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) min(((unsigned char)0), (arr_12 [i_5] [i_5 + 2] [i_5] [i_5] [i_5])))) : (((/* implicit */int) (unsigned char)249))))) | (max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_0)))), (-1LL))));
        }
        for (int i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            arr_55 [i_5] [i_5 - 1] [i_5] = (~(arr_37 [i_5] [i_15]));
            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((unsigned char)127), (((unsigned char) var_7)))))));
            var_30 -= ((/* implicit */long long int) ((unsigned short) (_Bool)1));
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) arr_53 [i_5]))));
        }
    }
    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) 
    {
        arr_59 [(unsigned short)12] = ((/* implicit */short) 1852743461);
        var_32 += ((/* implicit */unsigned char) arr_57 [i_16] [(unsigned char)11]);
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (+(((((/* implicit */_Bool) -1940761064672679963LL)) ? (((/* implicit */int) arr_58 [i_16])) : (((/* implicit */int) arr_58 [i_16])))))))));
    }
    var_34 = ((/* implicit */long long int) var_6);
}

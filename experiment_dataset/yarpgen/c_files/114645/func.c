/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114645
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
    var_12 = ((/* implicit */int) var_5);
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max(((unsigned short)35864), ((unsigned short)35867)))) : ((-(((/* implicit */int) var_7))))))) > (min((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -546505666)) : (var_2))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_3 [(_Bool)1] = arr_2 [i_0];
        arr_4 [(unsigned short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_6)) : (arr_1 [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) var_3);
        var_15 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) max((4294967282U), (((/* implicit */unsigned int) arr_2 [(unsigned short)14]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1]))))) : (arr_6 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_11 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_6 [i_1]);
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((((/* implicit */_Bool) 2958389794U)) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_12 [i_1])))) : (((((/* implicit */_Bool) arr_12 [i_1])) ? (var_8) : (((/* implicit */int) arr_12 [i_1]))))));
                            var_16 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 11219730181174203450ULL)) ? (arr_14 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [13U])))))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned short)65520))))) ? (((unsigned long long int) max((1587808820), (((/* implicit */int) arr_10 [i_3] [(unsigned char)0]))))) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])))))));
                            arr_21 [i_2] [i_2] [i_2] [i_4] [i_5] [i_2] = (-(((/* implicit */int) arr_15 [i_2] [i_2] [i_5])));
                            arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_3])) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned short)19] [(unsigned short)19] [i_4]))) : (-9223372036854775803LL))) : (8878651625726076003LL))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_1] [i_2] [i_3] [i_6])) ? (-1414533839) : (((/* implicit */int) arr_13 [i_1] [i_1])))) > (((/* implicit */int) arr_15 [i_2] [i_2] [i_2]))));
                    arr_26 [i_1] [i_1] [i_3] [i_6] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_3])));
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    arr_31 [i_1] [18U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_1] [(unsigned char)10] [i_7]))));
                    arr_32 [i_3] [i_3] [14] [i_3] = ((/* implicit */_Bool) arr_27 [i_1] [i_3] [i_1] [i_7]);
                }
                for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_12 [i_3]), (((/* implicit */unsigned short) var_5)))))) != (((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) 721975975)) : (arr_16 [i_8] [i_1] [i_2] [i_1]))));
                    var_20 = ((/* implicit */_Bool) ((min((arr_2 [i_2]), (arr_2 [i_1]))) - (min((-1320954782), (arr_2 [i_2])))));
                    arr_35 [i_1] [i_1] [(short)10] [i_1] [(short)10] [(short)10] = ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? ((~(1320954803))) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_8]))))), (max((((/* implicit */unsigned short) (_Bool)1)), (arr_23 [i_2] [i_2] [i_2] [i_2]))))))));
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_14 [i_2] [i_2] [i_3] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1] [i_2] [i_2] [i_2] [(_Bool)1]))))) ^ (((/* implicit */unsigned long long int) ((arr_25 [i_8] [i_8] [i_3] [i_2] [i_1]) ? (var_6) : (((/* implicit */int) arr_7 [i_8])))))));
                    arr_36 [i_1] = ((/* implicit */int) (-((-(arr_27 [i_3] [i_2] [i_3] [i_8])))));
                }
            }
            for (unsigned short i_9 = 1; i_9 < 17; i_9 += 2) 
            {
                var_22 -= ((((/* implicit */_Bool) arr_18 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (min((((/* implicit */unsigned long long int) var_10)), (arr_27 [i_1] [i_1] [i_2] [i_9 + 3]))))) : (((/* implicit */unsigned long long int) (-((-(-1320954810)))))));
                arr_39 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) arr_17 [i_1] [i_1] [(unsigned char)10] [i_1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    arr_43 [(unsigned char)3] [i_9] [i_9 + 3] [i_9] = ((/* implicit */long long int) var_0);
                    var_23 = ((/* implicit */long long int) var_3);
                    arr_44 [i_1] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_9 + 3])) ? (arr_34 [i_2] [i_2] [i_9 + 3] [i_9] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9 + 3] [i_9 + 2] [i_9 + 3])))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 3) 
                {
                    var_24 = ((/* implicit */signed char) var_10);
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) arr_23 [i_1] [i_2] [i_9] [i_11])) : (((/* implicit */int) arr_24 [i_1] [i_9] [i_9]))))) ? (((/* implicit */int) ((signed char) arr_6 [i_9]))) : (arr_18 [i_1] [i_1] [i_2] [i_2] [13])));
                    arr_48 [i_9] [i_9] [i_9] [i_11 - 2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)243)) ? (arr_2 [i_1]) : (((/* implicit */int) (unsigned char)43))))));
                }
                var_26 = ((/* implicit */int) arr_46 [i_1] [19] [i_9] [19]);
                arr_49 [i_9] = ((/* implicit */int) min((max((arr_30 [i_1] [i_1] [i_9 - 1] [i_1] [i_1]), (arr_30 [i_1] [i_2] [i_9 - 1] [i_2] [4ULL]))), (((((/* implicit */_Bool) arr_30 [i_1] [i_2] [i_9 + 3] [i_1] [i_2])) ? (arr_30 [18] [i_2] [i_9 + 3] [(_Bool)1] [i_1]) : (arr_30 [i_1] [i_2] [i_9 - 1] [i_9 - 1] [i_9])))));
            }
            arr_50 [i_2] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_1])) + (((/* implicit */int) (signed char)11)))) != (((/* implicit */int) ((unsigned char) arr_41 [i_1] [i_1] [i_2] [i_2])))));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2])) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 1138312771)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_1] [i_1] [i_2])))) ^ (min((((/* implicit */int) (unsigned short)24904)), (1995441225))))))));
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
    {
        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_12] [i_12] [i_12]))))) ? (arr_41 [i_12] [i_12] [18U] [i_12]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_12] [i_12] [(signed char)12] [i_12])) ? ((+(((/* implicit */int) arr_46 [i_12] [i_12] [14U] [i_12])))) : (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)255)))))))));
        arr_54 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_12] [i_12] [i_12] [i_12] [i_12]))))))))) : (((((/* implicit */_Bool) ((var_3) ? (arr_1 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_12] [i_12] [i_12])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) var_3))))) : (arr_38 [i_12] [i_12] [2] [i_12])))));
    }
    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        var_29 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) / (1715267910U))));
        arr_57 [i_13] [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_13] [i_13] [i_13]))));
        arr_58 [(unsigned short)3] &= ((/* implicit */unsigned long long int) var_9);
    }
    var_30 = ((/* implicit */unsigned short) ((unsigned int) (+(var_4))));
}

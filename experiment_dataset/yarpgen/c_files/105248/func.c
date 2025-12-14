/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105248
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
    var_10 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
    var_11 = ((/* implicit */unsigned short) (((~(5214567415193556335LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 3; i_2 < 17; i_2 += 4) /* same iter space */
            {
                var_12 = var_8;
                var_13 -= ((short) arr_3 [i_2]);
                arr_7 [(unsigned char)9] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 3] [i_2 - 2])) | (((/* implicit */int) arr_6 [i_2 - 3] [i_2 - 2] [i_2 - 3]))));
            }
            for (long long int i_3 = 3; i_3 < 17; i_3 += 4) /* same iter space */
            {
                arr_11 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0])) << (((var_7) - (12352131429261631942ULL)))))) & (((((/* implicit */_Bool) arr_4 [i_0] [16U] [i_0])) ? (var_9) : (-5214567415193556350LL)))));
                arr_12 [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((short) var_8));
                arr_13 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) arr_1 [i_1]);
            }
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_0)))) ? (((arr_1 [i_1]) * (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((var_5) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) - (17495))))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1])) | (((/* implicit */int) var_8)))))));
                        arr_23 [i_6] [i_6] [i_6] [i_5] [i_6] [5LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % ((+(((/* implicit */int) arr_5 [i_1] [i_4] [i_5] [i_6]))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0] [i_6 - 1] [i_6 - 1] [i_5] [i_6])) & (((/* implicit */int) arr_17 [i_0] [i_6 - 1] [i_6 - 1] [i_5] [i_6]))));
                    }
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((var_5) << (((arr_20 [i_0] [i_1] [i_4] [i_5] [i_5]) - (1542499448U))))))));
                        var_18 = ((((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])) >= (-6680535949115880739LL)))) / (((((/* implicit */int) arr_10 [i_0])) - (((/* implicit */int) var_6)))));
                    }
                    /* LoopSeq 3 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | ((~(var_7)))));
                        var_20 = ((/* implicit */unsigned short) var_8);
                    }
                    for (unsigned long long int i_9 = 4; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        arr_32 [i_0] [i_1] [i_4] [i_5] [i_9 + 1] = ((/* implicit */short) ((arr_28 [i_0] [i_1] [i_1] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_1] [i_4])))));
                        var_21 = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_5])))));
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 19; i_10 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) ((short) (short)24576))) : (((/* implicit */int) ((((/* implicit */int) var_6)) < (var_3))))));
                        var_23 ^= ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) > (arr_28 [i_0] [i_4] [i_4] [i_10 + 1]));
                        arr_35 [i_10] [i_1] [i_1] [i_10] [i_10] [19] [i_10 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [(unsigned char)1] [i_10 - 4] [i_10] [i_10] [i_10 - 2] [i_10 - 3])) ? (((/* implicit */int) arr_30 [i_10 - 1] [i_10 - 3] [i_10 - 3] [i_10 - 3] [i_10 - 4])) : (((/* implicit */int) var_6))));
                    }
                }
                arr_36 [i_0] [i_4] = arr_19 [i_4] [i_4] [i_0] [i_1] [i_0];
                arr_37 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */short) (((+(var_0))) > (((/* implicit */long long int) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_0 [i_1]))))));
                var_24 = ((/* implicit */short) ((((arr_33 [i_4] [i_4] [i_4] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_5))))));
            }
            arr_38 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_0] [i_1]))) : (var_0)))) ? (((/* implicit */unsigned long long int) arr_20 [i_1] [i_0] [i_0] [i_0] [i_0])) : (((var_2) ? (((/* implicit */unsigned long long int) arr_0 [9LL])) : (var_4))));
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_11])) ? (arr_25 [i_0] [i_0] [(_Bool)1] [i_1] [i_1] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                /* LoopSeq 2 */
                for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    var_26 = ((/* implicit */signed char) ((long long int) (+(var_1))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((arr_27 [i_12] [i_12] [i_11] [i_1] [i_0]) ? (var_9) : (((/* implicit */long long int) var_5))))) : ((-(var_7)))));
                    arr_47 [i_12] [i_11] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (arr_25 [i_12] [i_0] [i_11] [i_11] [i_1] [i_0] [i_0])));
                    var_28 = ((/* implicit */unsigned long long int) ((((var_3) << (((((/* implicit */int) arr_39 [i_0] [i_0] [(_Bool)1] [i_0])) - (8901))))) <= (((/* implicit */int) var_6))));
                }
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    var_29 = ((/* implicit */int) arr_34 [i_0] [i_1] [i_11] [i_11] [i_13] [i_13]);
                    arr_52 [i_13] [i_1] [i_11] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_0] [i_1] [i_1] [i_13])) << (((((var_2) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_9))) - (2693757339658510375LL)))));
                }
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) arr_17 [(unsigned short)7] [i_1] [i_11] [i_11] [i_1])) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((+(var_9)))));
                var_31 = ((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_1] [i_11] [i_11]);
            }
            var_32 = ((/* implicit */unsigned short) (+(arr_3 [i_1])));
        }
        var_33 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_1)) != (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? ((+(5214567415193556335LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_34 = ((/* implicit */int) max((((/* implicit */long long int) (short)11238)), (7639109325901526215LL)));
}

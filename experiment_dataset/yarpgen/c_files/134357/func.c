/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134357
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 -= ((/* implicit */unsigned int) (((+(arr_3 [i_0 + 3]))) >> (((arr_0 [i_0] [i_2]) - (15575961082615972287ULL)))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (unsigned short)2786))));
                    var_22 = ((/* implicit */short) max((((((/* implicit */int) var_10)) % (var_12))), ((-(arr_7 [i_2] [i_2] [(unsigned short)19] [8])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)2763)) : (((/* implicit */int) (unsigned short)2773)))))));
    var_24 -= ((/* implicit */short) ((unsigned char) var_9));
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_0 [i_3] [i_3]))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            arr_14 [5] [i_4] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4]))) : (arr_3 [i_3]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))))) >> ((((+(((/* implicit */int) var_6)))) + (22984)))));
            arr_15 [i_4] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((short) 2483842670U))))), ((-(((/* implicit */int) arr_13 [i_4]))))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 2; i_6 < 15; i_6 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_20 [i_4] [i_5] [i_5] [i_5 - 1] [i_6 - 2] [i_6]))))));
                    var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6 + 1] [(short)1] [i_6] [i_4])) ? (((/* implicit */int) arr_17 [i_6 - 1] [i_4] [10U] [i_3])) : (((/* implicit */int) arr_17 [i_6 - 1] [7] [6] [7]))))) ? (((((/* implicit */_Bool) arr_17 [i_6 - 2] [i_6] [i_6 + 1] [i_6 - 2])) ? (((/* implicit */int) arr_17 [i_6 + 1] [i_6] [i_3] [i_3])) : (-1))) : (((((/* implicit */int) arr_17 [i_6 - 1] [(unsigned char)7] [i_5] [i_3])) & (((/* implicit */int) arr_17 [i_6 + 1] [i_6] [i_6 - 2] [8ULL]))))));
                }
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((/* implicit */_Bool) arr_11 [i_5] [i_3] [i_5])) ? (((((/* implicit */_Bool) ((834483569) << (((((/* implicit */int) (unsigned short)36821)) - (36821)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (arr_0 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) min((-834483574), (((int) (-2147483647 - 1))))))))));
            }
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                arr_23 [i_3] [(unsigned short)3] [i_4] [i_7] = ((/* implicit */unsigned short) (-(((var_12) / (arr_7 [i_7] [i_4] [(unsigned char)11] [(unsigned short)13])))));
                var_29 = (-(arr_19 [i_3] [0] [2] [i_3] [0] [9U]));
            }
            /* LoopSeq 2 */
            for (int i_8 = 3; i_8 < 15; i_8 += 1) /* same iter space */
            {
                arr_26 [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(short)7] [i_3] [i_3] [i_4] [(unsigned char)4] [i_8 - 3])) ? (var_16) : (((/* implicit */unsigned int) var_18))))) ? (((((/* implicit */_Bool) 3952327973U)) ? (3952327954U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [3ULL]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))) * (max((8630874223246799862ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3] [i_4])) && (((/* implicit */_Bool) arr_5 [i_4] [(unsigned char)12])))))))));
                var_30 = ((/* implicit */short) (+((~(-699074162)))));
            }
            for (int i_9 = 3; i_9 < 15; i_9 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */int) (unsigned short)35282);
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5013)) && (((/* implicit */_Bool) -1019942006)))))));
                            var_33 = ((/* implicit */unsigned char) ((arr_30 [i_4] [i_9 - 3] [i_9 - 1] [i_4]) == ((-(((/* implicit */int) (unsigned short)44253))))));
                            var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_10 [i_3]))) ? (max((834483556), (((/* implicit */int) (unsigned short)31)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)21939)) : (arr_7 [i_3] [i_3] [i_3] [i_3])))))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) ((_Bool) 2147483647))));
                            arr_34 [i_9] [i_4] [i_11] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_11)) ? (1810801105) : (((/* implicit */int) arr_1 [i_4]))))));
                            var_35 = arr_11 [i_4] [i_4] [i_11];
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1] [i_4]))) : (var_16)))) && (((/* implicit */_Bool) min((2147483647), (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5448)) || (((/* implicit */_Bool) arr_8 [i_4] [i_9]))))), (var_3)))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (arr_10 [i_9]) : (((/* implicit */int) var_7)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
            }
            /* LoopSeq 1 */
            for (int i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                arr_38 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) ((unsigned char) (_Bool)1))), (arr_36 [i_12] [i_3] [i_12 - 1] [i_3])))) ? ((-(3952327943U))) : ((+(max((var_14), (((/* implicit */unsigned int) (unsigned short)62763))))))));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 1; i_13 < 14; i_13 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_19 [i_3] [(short)10] [i_12] [i_13 + 1] [(short)6] [(unsigned short)12])) ? (arr_24 [i_3] [i_3] [i_12 - 2]) : (((/* implicit */int) arr_40 [i_13] [i_12] [i_12 + 1] [i_4] [(unsigned short)2] [i_3])))), (((/* implicit */int) min((arr_13 [i_4]), (arr_13 [i_4]))))));
                    var_38 -= ((/* implicit */int) var_8);
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65515))) : (1114510707U)))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (arr_41 [i_3] [i_4] [i_3])))));
                }
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            for (short i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                {
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((3888977039U), (((/* implicit */unsigned int) var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_4))))) ? (-535966277) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_40 [(unsigned short)8] [(unsigned short)13] [i_14] [i_14] [i_14] [i_14]))));
                    var_41 = ((/* implicit */unsigned char) min((var_41), ((unsigned char)24)));
                }
            } 
        } 
    }
    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
    {
        arr_50 [i_16] = ((((/* implicit */int) max(((unsigned short)20791), (((/* implicit */unsigned short) (short)-15458))))) / (min((((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned short)42127)) : (((/* implicit */int) (unsigned short)58629)))), (((/* implicit */int) max(((unsigned short)63503), ((unsigned short)63496)))))));
        var_42 = ((/* implicit */int) min((var_42), (((((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_16])) >> (((var_14) - (3287229203U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 1U))))) : (min((((/* implicit */int) arr_36 [i_16] [i_16] [8] [(unsigned short)7])), (var_17))))) / (((/* implicit */int) ((_Bool) arr_28 [i_16] [4] [i_16])))))));
        var_43 = ((/* implicit */unsigned char) (unsigned short)27548);
        var_44 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_17 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_16]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_17)) == (var_14)))))));
        arr_51 [i_16] [i_16] = ((/* implicit */short) var_5);
    }
}

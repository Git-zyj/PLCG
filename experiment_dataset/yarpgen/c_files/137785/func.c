/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137785
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9)))))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))))) ? (((/* implicit */int) ((short) ((unsigned int) (short)-27502)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_10)))))))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (var_12)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_2 [(short)8] [(short)8] = ((/* implicit */short) ((unsigned short) min((var_9), ((-(var_8))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) max((max((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) max((min((var_1), (((/* implicit */unsigned short) var_12)))), (((/* implicit */unsigned short) var_3)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            arr_15 [3ULL] [i_3] [i_2] [i_3] [7U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)27509)) << (((((/* implicit */int) (short)27501)) - (27490)))))) & (max((268402688U), (((/* implicit */unsigned int) (short)-16384))))))) ? (((unsigned int) min((((/* implicit */short) var_2)), (var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                            arr_16 [i_3] [i_3] [i_2] [(short)1] [(unsigned char)10] [i_1] [i_3] = ((/* implicit */unsigned short) ((((var_9) < (min((var_8), (((/* implicit */unsigned long long int) var_12)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_13)) + (9529)))))) ^ (max((1825708255U), (((/* implicit */unsigned int) (unsigned short)53200)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1))))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) == (var_8)))) < (((/* implicit */int) ((short) var_3))))))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5)))))));
                            arr_17 [2ULL] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (var_8)))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 7; i_5 += 3) 
                        {
                            arr_21 [(unsigned char)9] [i_1] [i_1] [i_1] [8ULL] [i_3] = ((/* implicit */unsigned long long int) (+((((-(var_11))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_14)))))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max(((+(268402702U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)27525)) <= (((/* implicit */int) (unsigned short)62756))))))))));
                            arr_22 [i_3] [i_1] [(unsigned char)4] [i_1] [i_3] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_3)))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) (unsigned char)8)) ? (12832935142279344037ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2234)))))));
                        }
                        arr_23 [i_3] [i_1] = ((/* implicit */unsigned char) ((((unsigned int) (unsigned char)192)) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((((/* implicit */int) var_3)) < (((/* implicit */int) var_12))))))))));
                    }
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1379795761205349196ULL)))))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))))) > (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        arr_26 [(short)3] [i_6] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((short) var_3))))), (((((/* implicit */int) ((unsigned char) var_3))) - ((+(((/* implicit */int) var_12))))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) != (((/* implicit */int) var_13)))) ? ((~(min((var_11), (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned short) var_2))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (var_8)))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_4))));
        arr_27 [(unsigned short)4] [i_6] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? ((~((+(var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_5)))))))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) 
    {
        var_25 -= ((/* implicit */short) ((unsigned long long int) var_13));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((unsigned long long int) var_14)))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+(((/* implicit */int) var_1)))))));
        /* LoopSeq 3 */
        for (short i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */int) var_6)) * (((/* implicit */int) (short)-14579)))))));
            var_29 = ((/* implicit */short) (+(((((/* implicit */int) var_7)) | (((/* implicit */int) var_1))))));
            arr_33 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((short) var_1)))));
        }
        for (short i_9 = 3; i_9 < 10; i_9 += 3) 
        {
            arr_37 [i_9] [(unsigned char)9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6)))) > (((/* implicit */int) var_14)))))));
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_10))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_2)) + (((/* implicit */int) var_13)))))))));
        }
        for (unsigned short i_10 = 1; i_10 < 11; i_10 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                arr_43 [i_10] [i_10 - 1] [i_7] [i_10] = ((/* implicit */unsigned short) ((var_5) != (((/* implicit */unsigned long long int) var_10))));
                arr_44 [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_11)) | (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                arr_45 [i_10] [i_11] [9ULL] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_14))));
            }
            for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 4) 
            {
                arr_50 [i_10] [1ULL] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((var_9) << (((((/* implicit */int) var_6)) + (22084))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) != (var_0)))))));
                            arr_56 [i_7 - 1] [i_7] [i_10] [i_7] [i_7 + 2] [2U] [(short)6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                            arr_57 [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_1))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) > (((((/* implicit */unsigned long long int) var_11)) / (var_8)))));
                            arr_58 [i_14] [i_10] [i_13] [i_12] [i_10 + 1] [i_10] [i_7 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1))))));
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0))))));
            var_35 = ((/* implicit */short) var_0);
        }
    }
    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 1 */
    for (short i_15 = 0; i_15 < 12; i_15 += 1) 
    {
        var_37 *= ((/* implicit */short) (~(((/* implicit */int) (short)2850))));
        /* LoopSeq 3 */
        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
        {
            arr_63 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) < (((/* implicit */int) ((unsigned short) var_11)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                arr_67 [i_17] [0U] [i_17] = var_3;
                arr_68 [i_17] [(short)5] [(unsigned char)4] [i_17] = ((/* implicit */unsigned int) ((var_9) << (((((/* implicit */int) var_13)) + (9516)))));
                var_38 = ((/* implicit */short) ((unsigned short) var_6));
                var_39 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
            }
            /* LoopSeq 1 */
            for (short i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                arr_72 [i_15] [i_15] [(unsigned short)7] [(unsigned short)5] = ((short) ((((((/* implicit */_Bool) 1379795761205349209ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (1787754558U))) << (((min((var_0), (var_9))) - (5854459886690947963ULL)))));
                arr_73 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            }
            var_40 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (short)27523)) : (((/* implicit */int) (short)-19120))))), (4092U))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((var_13), (((/* implicit */short) var_3))))))));
        }
        for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
        {
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (max((((var_0) << (((((/* implicit */int) var_13)) + (9559))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_14)))))))));
            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((unsigned long long int) var_5)))));
        }
        for (unsigned short i_20 = 3; i_20 < 10; i_20 += 4) 
        {
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 12; i_21 += 3) 
            {
                for (unsigned int i_22 = 1; i_22 < 9; i_22 += 2) 
                {
                    {
                        arr_86 [6U] [(short)10] [i_20] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) <= (((9ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27540)))))));
                        var_43 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) 879016323U)), (549688705024ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        arr_87 [i_22 - 1] [(unsigned short)8] [i_20] [i_20] [i_15] [(short)8] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_0)) ? (var_10) : (var_10))));
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (((+(((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_2)) - (57))))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) <= ((~(var_0)))))))))));
            arr_88 [i_15] [(short)4] [i_20] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_5))))));
        }
    }
}

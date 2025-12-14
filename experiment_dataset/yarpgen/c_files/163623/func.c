/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163623
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) : (var_16)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))))) : (var_6)));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_5))))))) ? (var_0) : (((((/* implicit */_Bool) (~(var_4)))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (_Bool)1))))))))));
    var_22 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) var_17);
                    var_23 ^= ((/* implicit */short) var_13);
                    var_24 = ((/* implicit */short) (!(((_Bool) max((var_8), (((/* implicit */unsigned char) (_Bool)1)))))));
                    arr_10 [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | ((~(var_10)))))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_4 [(signed char)10] [6ULL])), (((((/* implicit */_Bool) 878107451)) ? (((/* implicit */unsigned long long int) var_16)) : (var_10)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 8; i_4 += 2) 
            {
                {
                    arr_16 [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_18))));
                    arr_17 [i_0] [1] = ((/* implicit */int) arr_3 [i_4]);
                    arr_18 [i_4] = ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), ((-(var_0)))));
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 10; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                {
                    arr_26 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_5 - 2] [i_5]))))) ? ((((!(((/* implicit */_Bool) arr_3 [i_6])))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_22 [0] [(unsigned short)1])), (var_17)))) || (((/* implicit */_Bool) ((unsigned char) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 9; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_27 ^= ((/* implicit */int) min(((+(((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_16))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_18))))))))));
                                var_28 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))))), (max((((var_2) ? (3111097863953716801ULL) : (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6))))))));
                                var_29 ^= ((/* implicit */unsigned char) 6007721615264186061ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 2; i_9 < 8; i_9 += 2) 
                    {
                        arr_35 [i_6] [i_9] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_13 [i_5 - 2])))) ? (((((/* implicit */long long int) var_14)) - (var_16))) : (arr_13 [i_5 + 1])));
                        var_30 *= ((/* implicit */short) var_9);
                        var_31 = min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) || (((/* implicit */_Bool) var_16)))))) : (max((((/* implicit */unsigned long long int) arr_11 [(unsigned short)9] [(unsigned short)9])), (var_9))))), (((/* implicit */unsigned long long int) arr_8 [i_5 + 1] [i_0] [i_6])));
                    }
                    for (unsigned short i_10 = 2; i_10 < 8; i_10 += 2) 
                    {
                        arr_38 [i_5 + 1] [i_10] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_16)), (max((arr_37 [9] [i_5] [i_5] [i_6] [i_10]), (((/* implicit */unsigned long long int) -1)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_32 &= ((/* implicit */_Bool) var_13);
                            arr_43 [i_0] [i_5 + 1] [i_6] [i_10] [i_5 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_0), (max((13237797066517640623ULL), (((/* implicit */unsigned long long int) arr_42 [(unsigned short)8] [4])))))))));
                            var_33 += ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) 15335646209755834815ULL)))));
                            arr_44 [i_0] [i_5] [i_6] [i_0] [i_10 + 2] [i_11] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_37 [i_5] [i_5 + 1] [i_5 - 2] [i_10 + 1] [i_10 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_3))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12))))), (((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)51836), (((/* implicit */unsigned short) var_8))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24142)) ? (((/* implicit */int) arr_46 [i_12] [i_6] [i_6] [i_12])) : (((/* implicit */int) var_3)))))));
                            var_35 -= ((/* implicit */unsigned short) var_15);
                            var_36 = ((/* implicit */unsigned char) var_10);
                            arr_48 [i_0] [(unsigned char)7] [i_12] [1] [i_6] [i_10] [i_0] = ((/* implicit */short) var_19);
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_51 [i_0] [i_5] [i_6] = max(((~(((/* implicit */int) arr_15 [i_0] [i_10 + 1])))), (((int) arr_28 [i_0] [i_5 - 1])));
                            arr_52 [i_0] [i_0] [i_6] [i_6] [i_6] [i_13 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_12), (arr_13 [i_0])))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_24 [i_5]))));
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [(unsigned short)9] [i_5 - 2] [i_5] [i_5 - 2]))))) ? (max((((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) var_3)))), (((/* implicit */int) (!(arr_39 [(unsigned char)2] [i_5] [i_6] [i_10] [i_5])))))) : (((/* implicit */int) ((_Bool) var_12)))));
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 2) 
    {
        var_38 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1781992381)), (arr_55 [i_14 + 1]))))))) | (((/* implicit */int) ((arr_53 [i_14 + 1]) == (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
        var_39 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_14])) && (arr_54 [14]))))) : (max((((/* implicit */unsigned long long int) var_7)), (arr_55 [i_14])))))) ? (((/* implicit */int) ((_Bool) arr_53 [i_14 - 1]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 1635855109)) > (((((/* implicit */_Bool) arr_55 [i_14])) ? (arr_55 [i_14]) : (var_10))))))));
        arr_56 [i_14] = ((/* implicit */unsigned char) (_Bool)1);
        var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_53 [i_14 + 2]) : (arr_53 [i_14 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (1781992387)))) : (((int) var_15)));
    }
    for (short i_15 = 2; i_15 < 13; i_15 += 2) 
    {
        var_41 = ((/* implicit */short) var_10);
        var_42 = ((/* implicit */unsigned short) var_19);
    }
}

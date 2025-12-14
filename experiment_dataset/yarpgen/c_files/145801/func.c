/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145801
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
    var_13 = min((((((((/* implicit */int) var_12)) < (((/* implicit */int) var_3)))) ? (((var_6) << (((/* implicit */int) var_0)))) : (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */signed char) var_12)), (var_7)))) >= (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_0))))))));
    var_14 = ((/* implicit */int) var_1);
    var_15 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(var_8)))))) ? (((/* implicit */unsigned long long int) max(((~(var_11))), ((-(var_6)))))) : (((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */unsigned long long int) var_5)), (var_9)))))));
        var_17 = max((((/* implicit */int) var_4)), (((2147483647) << (((15572279492698928009ULL) - (15572279492698928009ULL))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_0] [i_2 - 1] [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_7))))) ^ (min((((/* implicit */unsigned long long int) var_5)), (var_9))))), (((/* implicit */unsigned long long int) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) var_3))))))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (((unsigned int) var_7))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))), (var_11)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_5))))) : (((var_6) % (var_6))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((15906115177095307397ULL) < (((/* implicit */unsigned long long int) 5492798951773602600LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) == (2540628896614244231ULL)))) : (((/* implicit */int) ((15906115177095307397ULL) != (16384ULL))))))), (3175628616951047280ULL)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (min((((/* implicit */unsigned long long int) var_6)), (var_9)))))), ((-(((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))))));
                        var_21 -= ((/* implicit */unsigned int) ((((var_9) - (((/* implicit */unsigned long long int) var_11)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (var_3)))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 1; i_8 < 10; i_8 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            arr_27 [i_8] = ((/* implicit */unsigned int) var_6);
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) << (((((((/* implicit */int) var_1)) + (((/* implicit */int) var_1)))) - (36)))))) ? (((((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_4))))) ^ (((/* implicit */int) ((var_8) <= (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) : ((~(((((/* implicit */int) var_7)) | (((/* implicit */int) var_12))))))));
        }
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) var_4);
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                for (signed char i_12 = 1; i_12 < 9; i_12 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_5))))) ^ (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8)))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_11)))) ? (((/* implicit */unsigned long long int) var_11)) : ((~(var_9)))))));
                        arr_37 [i_8] [i_12] [(unsigned short)10] [(_Bool)1] [4] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) var_8)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (((/* implicit */short) var_0))))))))), (((((/* implicit */int) var_4)) % (((/* implicit */int) var_1))))));
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            arr_40 [i_12] [i_11] [i_10] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_4)) : (((int) var_2))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) var_5)) - (34685)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (((long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */signed char) var_10))))))));
                            var_26 = ((/* implicit */unsigned int) var_3);
                        }
                        var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967281U)))));
                    }
                } 
            } 
        }
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_3), (((/* implicit */short) var_7))))), (((((/* implicit */int) var_0)) | (((/* implicit */int) var_3))))))), (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))));
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                arr_47 [i_14] [i_15] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)9633)) + (((/* implicit */int) (short)26093))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1424064481)) <= (2540628896614244219ULL))))) | (var_9))));
                arr_48 [i_15] [i_8 - 1] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((var_12) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) : (((int) var_2))))) : (min((((/* implicit */unsigned long long int) (short)8946)), (18446744073709551600ULL))));
                /* LoopSeq 4 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_8)))) ? (((/* implicit */int) ((((var_11) << (((((/* implicit */int) var_5)) - (34685))))) <= (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_12)))))))) : (((/* implicit */int) min((((/* implicit */signed char) ((2340631937U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))))), (((signed char) var_10)))))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((signed char) var_5)))));
                    arr_52 [i_8] [i_8] [i_14] [i_15] [i_16] [i_16] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))), (((var_6) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                    var_31 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-35))));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))) - ((-(var_8)))));
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) var_3))));
                }
                for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) 
                {
                    arr_60 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 135873257)) ^ (4445184575101070203ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))) - (var_11)));
                    arr_61 [i_8] [i_8] [i_14] [i_14] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) - (((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((((((/* implicit */int) var_3)) | (((/* implicit */int) var_1)))) != (((/* implicit */int) ((_Bool) var_5)))))) : (max((((/* implicit */int) ((short) var_6))), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_0))))))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_35 = ((/* implicit */unsigned int) ((var_10) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (((var_6) / (((var_11) << (((((/* implicit */int) var_2)) - (119)))))))));
                    arr_64 [i_8] [i_15] [i_14] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (max((((/* implicit */long long int) var_1)), (var_8)))))));
                }
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(var_8))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_1))))))))) ? ((-((+(((/* implicit */int) var_0)))))) : (((((/* implicit */int) (signed char)38)) << (((/* implicit */int) ((872563916U) > (872563936U))))))));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) min((var_7), (var_7))))));
                            var_38 = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
            }
        }
        var_39 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_7))))) < (max((((/* implicit */long long int) var_0)), (var_6))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_1))))))));
        arr_70 [i_8] = (+(((((/* implicit */_Bool) (short)-28920)) ? (((/* implicit */unsigned long long int) 1615480846U)) : (17708357953173280181ULL))));
    }
}

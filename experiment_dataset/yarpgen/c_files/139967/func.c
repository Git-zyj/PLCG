/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139967
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_4))))) ? (var_2) : (((((/* implicit */int) (signed char)95)) | (((/* implicit */int) var_11)))))))))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((arr_1 [i_0] [i_0]), (((/* implicit */int) (_Bool)1)))) + ((+(((/* implicit */int) (unsigned char)245))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)245)) + (((/* implicit */int) (signed char)1))))) : (((unsigned int) (_Bool)1))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_13 *= ((/* implicit */signed char) var_1);
                            var_14 = ((/* implicit */unsigned long long int) var_1);
                            arr_12 [i_0 - 2] [i_1] [i_0 - 2] [i_2 - 2] [i_1] [i_2] = ((/* implicit */int) arr_7 [i_2 + 2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 |= ((/* implicit */long long int) ((unsigned int) min((((var_6) ? (var_10) : (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))));
    var_16 ^= ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */signed char) -6225996551500876947LL);
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) 4611686018427256832LL);
        var_17 = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (arr_14 [i_4])))), (var_7))));
        var_18 = ((/* implicit */unsigned long long int) var_10);
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (-1682025374) : (((/* implicit */int) (signed char)0))))) >= (((((/* implicit */long long int) var_9)) & (arr_14 [i_4]))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (arr_13 [i_4] [i_4]))) : (((/* implicit */unsigned long long int) (+(((long long int) arr_14 [i_4])))))));
    }
    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) (((-((-(var_1))))) / (max((((/* implicit */long long int) arr_19 [i_5 + 2])), (var_8)))));
            arr_21 [i_5 - 1] [12] [i_6] &= ((/* implicit */_Bool) max((arr_19 [i_6]), (((/* implicit */signed char) var_4))));
        }
        for (signed char i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
        {
            arr_25 [i_5] [i_5] = arr_19 [i_5];
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_23 [i_8] [i_5 - 1] [i_5 - 1]))))) ? (max((((/* implicit */long long int) arr_23 [i_8] [i_5 + 2] [i_5 + 1])), (var_8))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_23 [i_8] [i_5 + 1] [i_5 - 1])))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? ((-(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) - (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (((((/* implicit */_Bool) arr_18 [i_5] [i_8])) ? (arr_29 [i_5] [i_5 - 1] [i_7] [i_8] [i_5]) : (((/* implicit */long long int) var_9))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_11 = 1; i_11 < 10; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (arr_20 [2U] [i_5 - 1]))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-23972))))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_40 [i_10] [i_10] [i_5] [i_10] = ((/* implicit */signed char) ((var_1) & (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned int) ((var_4) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5 + 1])))));
        }
        /* LoopNest 3 */
        for (short i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 1) 
                {
                    {
                        var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (arr_44 [i_13] [i_5 + 1])))) & (max((((/* implicit */long long int) var_4)), (arr_38 [i_5] [i_5] [i_14] [i_5 - 1] [(_Bool)1] [i_15 - 1])))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (((~(((/* implicit */int) var_5)))) | (((/* implicit */int) ((signed char) var_4))))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_6)))))) & ((+(((/* implicit */int) arr_33 [i_5] [i_5]))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            var_29 = ((/* implicit */long long int) var_3);
                            var_30 = ((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)42491)));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? (max((var_10), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_22 [i_14] [i_15] [i_16])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_16] [i_15] [i_14])))));
                        }
                        for (int i_17 = 3; i_17 < 13; i_17 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_5 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_47 [i_17 - 3] [i_15 - 1] [i_5 - 1])) != (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_42 [i_5] [i_17]))))))))) : ((-(var_10)))));
                        }
                        for (signed char i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            arr_57 [i_5 + 1] [i_5 - 1] [i_5] [i_5] [i_5 - 1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)1))))) : (max((var_9), (((/* implicit */int) var_5))))))), ((-(((((/* implicit */_Bool) var_10)) ? (arr_22 [i_14] [i_15 + 1] [i_14]) : (((/* implicit */unsigned long long int) var_1))))))));
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) min((((/* implicit */int) ((short) ((unsigned char) var_9)))), ((+(((/* implicit */int) var_4)))))))));
                        }
                    }
                } 
            } 
        } 
        var_35 = (!(((arr_29 [i_5] [i_5 + 2] [i_5 - 1] [11ULL] [i_5]) > ((-(var_8))))));
        /* LoopSeq 2 */
        for (unsigned short i_19 = 1; i_19 < 13; i_19 += 1) 
        {
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_55 [i_5 + 1] [12] [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_5 + 1]), (((/* implicit */int) arr_28 [i_5] [6LL] [i_5 + 2] [i_5 - 1] [12]))))))))));
            arr_60 [i_5] [i_5] = (!(((/* implicit */_Bool) ((long long int) min((526863997U), (((/* implicit */unsigned int) var_6)))))));
            /* LoopNest 3 */
            for (short i_20 = 3; i_20 < 12; i_20 += 1) 
            {
                for (long long int i_21 = 3; i_21 < 13; i_21 += 3) 
                {
                    for (int i_22 = 2; i_22 < 13; i_22 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */int) var_0);
                            arr_71 [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5] [i_5] [i_21] [i_5 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_10)))) ? (((((/* implicit */_Bool) arr_26 [i_5] [i_22 + 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10))) : (((/* implicit */unsigned int) ((int) arr_26 [i_5] [i_22 + 1] [i_5])))));
                            var_38 = var_6;
                            var_39 = ((/* implicit */long long int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_23 = 3; i_23 < 10; i_23 += 1) 
            {
                var_40 += ((/* implicit */unsigned char) arr_20 [8U] [10LL]);
                arr_74 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] = ((/* implicit */signed char) arr_30 [i_5] [i_19] [i_19] [i_5]);
            }
        }
        for (unsigned int i_24 = 0; i_24 < 14; i_24 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_25 = 0; i_25 < 14; i_25 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_26 = 0; i_26 < 14; i_26 += 1) 
                {
                    for (long long int i_27 = 0; i_27 < 14; i_27 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1498943071)) || (arr_42 [i_5] [i_5 + 2]))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_70 [i_26] [i_26])) || (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_1)))))))));
                            arr_84 [12LL] [i_27] [i_5] [i_26] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(arr_65 [i_27] [i_25]))), (((/* implicit */unsigned int) var_5))))) ? (((long long int) ((var_8) + (((/* implicit */long long int) -1498943071))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_28 = 0; i_28 < 14; i_28 += 3) 
                {
                    for (short i_29 = 0; i_29 < 14; i_29 += 3) 
                    {
                        {
                            var_42 = ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (min((var_1), (((arr_41 [i_5] [i_24]) ? (((/* implicit */long long int) ((/* implicit */int) arr_86 [(_Bool)1] [i_24] [i_25] [i_28] [i_29]))) : (var_8))))));
                            var_43 = (signed char)7;
                        }
                    } 
                } 
                arr_92 [i_5] [i_5] [i_5] [i_25] = ((/* implicit */_Bool) var_11);
            }
            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9))))))))))));
            arr_93 [i_5] = ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))));
        }
    }
    /* vectorizable */
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
    {
        var_45 = ((/* implicit */signed char) arr_95 [i_30] [i_30]);
        var_46 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((/* implicit */int) arr_95 [i_30] [i_30]))));
        var_47 = ((/* implicit */signed char) (-(((/* implicit */int) arr_95 [i_30] [i_30]))));
        /* LoopNest 3 */
        for (int i_31 = 2; i_31 < 17; i_31 += 3) 
        {
            for (long long int i_32 = 0; i_32 < 19; i_32 += 2) 
            {
                for (long long int i_33 = 0; i_33 < 19; i_33 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_34 = 0; i_34 < 19; i_34 += 2) 
                        {
                            var_48 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_100 [i_34] [i_32] [i_32] [4U] [12U])) ? (-6225996551500876947LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
                            var_49 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 4LL))));
                            var_50 |= ((/* implicit */long long int) var_5);
                            arr_104 [i_34] [i_31] [(_Bool)1] [i_31 + 1] [i_31] [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_103 [(signed char)10] [i_33] [i_34])) >= (((/* implicit */int) var_0))));
                        }
                        arr_105 [i_30] [i_30] [i_30] [13LL] = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_35 = 1; i_35 < 17; i_35 += 3) 
    {
        var_51 += ((/* implicit */int) var_0);
        var_52 ^= ((/* implicit */unsigned long long int) min((((var_1) + (((/* implicit */long long int) arr_108 [16])))), (((/* implicit */long long int) ((int) arr_108 [6LL])))));
    }
}

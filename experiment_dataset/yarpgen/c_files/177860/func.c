/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177860
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (-1LL)));
                        var_19 &= ((/* implicit */unsigned int) (unsigned short)15360);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned short) max((max((4294967274U), (((/* implicit */unsigned int) var_15)))), (min((((/* implicit */unsigned int) (_Bool)1)), ((-(2328710404U)))))));
        arr_14 [i_4] [i_4] = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4]))) : (var_1))), (((/* implicit */unsigned long long int) var_4)))) >> (((max((((/* implicit */int) arr_11 [i_4])), (((((/* implicit */int) (short)22674)) << (((4542714495806443057LL) - (4542714495806443051LL))))))) - (1451089)))));
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
        arr_15 [i_4] [i_4] &= ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)15360)) + (max((((/* implicit */int) var_11)), (var_8)))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_20 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((max((((/* implicit */int) var_4)), ((~(((/* implicit */int) (_Bool)1)))))) | (var_7)));
                    arr_21 [(signed char)18] [21] = ((/* implicit */signed char) var_11);
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
    {
        arr_25 [i_7] = -4542714495806443037LL;
        arr_26 [i_7] [i_7] = ((/* implicit */long long int) 21U);
        /* LoopSeq 4 */
        for (short i_8 = 3; i_8 < 19; i_8 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_9 = 3; i_9 < 20; i_9 += 3) /* same iter space */
            {
                arr_31 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */signed char) (((_Bool)1) ? (0LL) : (2LL)));
                var_22 = ((/* implicit */short) var_16);
                arr_32 [i_9] [i_8 + 3] [i_9] = ((/* implicit */short) max((((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)28672)))) + (((((/* implicit */int) arr_22 [i_7])) - (((/* implicit */int) arr_24 [i_7] [i_7]))))))), (((((/* implicit */long long int) ((/* implicit */int) var_10))) / ((+(3477331792881021521LL)))))));
            }
            for (unsigned short i_10 = 3; i_10 < 20; i_10 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_22 [i_7]), (var_9)))) ? (((/* implicit */int) arr_27 [i_7] [i_8] [20LL])) : ((-(((/* implicit */int) (signed char)-8))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    arr_37 [i_7] [i_10] [i_10] [i_11] = ((/* implicit */unsigned short) (_Bool)0);
                    arr_38 [i_11] [i_11] [i_11] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_28 [(_Bool)1]))) + ((+(((/* implicit */int) var_10))))));
                }
                var_24 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25119))) : (var_16)))))));
                var_25 = max((((/* implicit */long long int) (unsigned short)65535)), (((((var_13) / (((/* implicit */long long int) var_8)))) / (((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_7])) / (((/* implicit */int) var_12))))))));
            }
            for (unsigned short i_12 = 3; i_12 < 20; i_12 += 3) /* same iter space */
            {
                arr_43 [i_12 - 1] [i_8] [i_7] = ((/* implicit */signed char) var_5);
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((var_16) + (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (signed char)8))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (var_13))))))))));
            }
            for (unsigned int i_13 = 3; i_13 < 21; i_13 += 2) 
            {
                var_27 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) 402653184U)), (-1LL)))));
                arr_47 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) var_5)) < ((+(((/* implicit */int) var_15))))))), (max((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) arr_30 [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65514))))))));
                var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) 3438537232832716860LL)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_6)), (var_14)))), ((+(arr_29 [i_7] [i_8 - 1] [i_8 - 1] [i_13]))))))));
                var_29 -= (unsigned short)64364;
            }
            var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)7)), ((unsigned short)65535)));
        }
        for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            arr_50 [i_7] [i_14] = min(((~(((/* implicit */int) var_5)))), ((+(((/* implicit */int) var_11)))));
            var_31 = ((/* implicit */unsigned short) (+(((arr_36 [i_7]) - (arr_36 [i_7])))));
            /* LoopSeq 1 */
            for (unsigned char i_15 = 1; i_15 < 21; i_15 += 1) 
            {
                var_32 -= ((/* implicit */signed char) var_3);
                arr_53 [i_7] [i_15] [i_14] [i_15 + 2] = ((/* implicit */unsigned short) arr_24 [i_7] [i_7]);
            }
            /* LoopNest 3 */
            for (long long int i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                for (int i_17 = 2; i_17 < 20; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_33 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */int) arr_55 [i_16] [i_14] [i_16] [i_16])), (arr_30 [i_7])))) ? (((/* implicit */int) max((var_4), (((/* implicit */signed char) var_6))))) : (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) var_12)))))), (((/* implicit */int) arr_49 [i_7] [i_7] [(signed char)13]))));
                            var_34 = ((/* implicit */int) min((var_34), (max(((+(((/* implicit */int) arr_34 [i_7] [i_17 - 1])))), (max((arr_30 [i_17]), (((/* implicit */int) (signed char)21))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 23; i_19 += 2) /* same iter space */
        {
            arr_63 [i_19] = ((/* implicit */_Bool) arr_24 [i_7] [(unsigned short)20]);
            /* LoopNest 3 */
            for (long long int i_20 = 3; i_20 < 20; i_20 += 1) 
            {
                for (signed char i_21 = 0; i_21 < 23; i_21 += 2) 
                {
                    for (unsigned char i_22 = 0; i_22 < 23; i_22 += 1) 
                    {
                        {
                            arr_72 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [(_Bool)1] |= ((/* implicit */int) var_15);
                            arr_73 [i_22] [i_19] [i_20] [i_21] [(signed char)22] [i_22] = ((/* implicit */unsigned int) var_14);
                            arr_74 [i_7] [i_7] [i_7] [i_7] [i_7] [i_22] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_13))))));
                            var_35 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_20 - 2] [i_20 - 3] [i_21])) ? (arr_57 [i_20 - 2] [i_20 - 3] [i_20 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)2)))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((signed char) var_5)))));
        }
        /* vectorizable */
        for (signed char i_23 = 0; i_23 < 23; i_23 += 2) /* same iter space */
        {
            arr_78 [i_7] [i_23] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
            arr_79 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)61242))))) ? (((((/* implicit */int) arr_54 [i_7] [i_7])) + (((/* implicit */int) (unsigned short)21064)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))));
            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) var_6))));
        }
        /* LoopNest 3 */
        for (signed char i_24 = 0; i_24 < 23; i_24 += 2) 
        {
            for (unsigned char i_25 = 0; i_25 < 23; i_25 += 2) 
            {
                for (short i_26 = 0; i_26 < 23; i_26 += 1) 
                {
                    {
                        var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_7])) ? ((~(((/* implicit */int) (signed char)13)))) : (((/* implicit */int) arr_55 [i_7] [i_7] [i_25] [(signed char)3]))))) ? (((/* implicit */int) (unsigned short)21078)) : (((/* implicit */int) var_11)));
                        arr_88 [i_7] [i_25] [i_24] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_51 [i_24] [i_24] [i_26]))))) | (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7] [i_7] [i_25] [i_25]))) : (arr_52 [i_7] [i_7] [i_7] [i_25])))));
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) max((((/* implicit */int) var_6)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_85 [i_7] [i_7] [i_7] [i_7]))))))))))));
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-108)) ? (10LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) arr_55 [i_7] [i_24] [i_24] [i_26]))))))));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_66 [i_7] [i_24] [i_25] [i_26]))))) ? (arr_68 [i_7] [i_7] [i_7] [i_7]) : (var_16)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_27 = 0; i_27 < 23; i_27 += 4) 
        {
            for (signed char i_28 = 0; i_28 < 23; i_28 += 4) 
            {
                for (unsigned short i_29 = 0; i_29 < 23; i_29 += 4) 
                {
                    {
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_91 [i_7] [i_7] [i_7] [i_7]))) : (max((arr_68 [i_7] [i_27] [i_27] [i_29]), (((/* implicit */long long int) -1022605269))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_16)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62126))))) : (((/* implicit */int) arr_41 [i_7] [i_7] [16LL] [13LL]))))))))));
                        arr_96 [i_29] [i_28] [i_27] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1022605262)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (unsigned short)21054)))) <= (((/* implicit */int) var_9))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_30 = 0; i_30 < 23; i_30 += 4) /* same iter space */
    {
        var_43 = var_2;
        var_44 = ((/* implicit */long long int) var_3);
        var_45 = ((/* implicit */unsigned short) arr_56 [i_30] [(unsigned char)1] [(short)14]);
        var_46 &= (~(((((/* implicit */_Bool) -1022605256)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-1381054924625640380LL))));
    }
    var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (unsigned short)12159))));
    var_48 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
    var_49 = ((/* implicit */unsigned short) var_13);
    var_50 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_0)), (min((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (((1381054924625640397LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21055)))))))));
}

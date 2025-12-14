/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161116
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
    var_11 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) << (((var_3) - (2035873275U)))))));
    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? (((int) var_4)) : (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))) > (min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) (_Bool)1))))));
    var_13 = ((/* implicit */_Bool) ((((var_4) || (var_6))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) max(((unsigned char)136), (((/* implicit */unsigned char) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    arr_10 [i_1] [i_1] [i_2] [i_1] [i_0 + 2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22116)) ? (((/* implicit */int) arr_5 [i_3 + 3] [i_2 + 1] [i_2 + 1] [i_1 + 1])) : (((/* implicit */int) var_4))));
                    var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)22125)))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [6] [i_1 - 1] [19U] [i_1 + 2])) : (((/* implicit */int) (signed char)36))))) ? (((/* implicit */int) (signed char)-38)) : (((((/* implicit */int) (unsigned char)156)) + (((/* implicit */int) (_Bool)1)))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2]))));
                    arr_14 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_0 + 1] [i_1] [i_1] [i_1] [(unsigned char)7] [i_4]));
                }
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    arr_18 [(unsigned char)9] [i_2] [i_0 - 2] [i_1 - 1] [i_0 - 2] &= ((/* implicit */unsigned char) (unsigned short)49903);
                    var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_2 - 1] [i_2 + 1] [i_1 - 1] [i_5])) ? (((/* implicit */int) arr_16 [i_0 - 2] [i_2 - 1] [i_1 + 1] [i_1 + 1] [(_Bool)1])) : (((/* implicit */int) arr_16 [i_0 - 2] [i_2 + 2] [i_1 + 2] [i_1 + 1] [i_2]))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_19 [(signed char)6] [i_1] [i_0 + 1]))));
                    var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1 + 2] [i_2 - 1] [i_6])) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) var_5))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        var_20 |= ((/* implicit */int) ((((/* implicit */int) (short)-22091)) == (((/* implicit */int) (short)-8059))));
                        var_21 = ((/* implicit */signed char) ((unsigned int) arr_2 [i_0 + 2]));
                    }
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (2245819948U)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_1 [i_1 + 1])))) : (((/* implicit */int) (short)-22116))));
                }
            }
            arr_26 [i_0 + 2] [(unsigned short)12] [(short)4] |= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_0 - 2]))));
        }
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            arr_29 [(unsigned char)14] [i_9] [i_0 + 1] = ((((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (short)25014)))) * (((((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 1] [i_0 - 2])) - (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [(signed char)2] [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
            arr_30 [i_9] = (signed char)-18;
            /* LoopNest 3 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (unsigned int i_11 = 1; i_11 < 20; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        {
                            arr_38 [i_10] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25013)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) ? ((-(arr_3 [i_10 - 1] [i_10 - 1] [i_0 - 1]))) : (((/* implicit */int) arr_13 [i_0] [i_9] [i_0 + 1] [i_0] [i_10] [i_0 + 1]))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_32 [i_12])) : (((/* implicit */int) arr_32 [i_12]))))) || (((/* implicit */_Bool) ((int) arr_33 [i_11 + 1] [i_11] [i_0 + 2] [i_0])))));
                            var_24 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_36 [i_12] [(_Bool)1] [i_12] [i_11 - 1] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))))));
                            var_25 = ((((((/* implicit */_Bool) min((((/* implicit */short) arr_23 [i_0] [i_9] [i_10] [i_11] [i_11])), (arr_5 [i_0] [i_9] [i_10 - 1] [i_12])))) ? (1582721458) : ((-(566654404))))) + (((/* implicit */int) var_4)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_13 = 2; i_13 < 22; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) (short)-6181)))));
                        arr_45 [i_0] [i_0] [i_14] [i_15] [(signed char)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_15] [i_14] [i_13 - 1]))))) ? (((/* implicit */int) (((-(var_9))) != ((((_Bool)1) ? (arr_39 [i_13]) : (((/* implicit */unsigned int) arr_28 [i_13 + 1] [i_14] [i_15]))))))) : (((/* implicit */int) ((unsigned short) arr_37 [i_14] [i_15])))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (short)-19440)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-8050)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((short) arr_7 [i_0] [i_13] [i_14] [i_15]))) : (((/* implicit */int) max((var_0), ((_Bool)1))))))));
                    }
                } 
            } 
            arr_46 [i_0] = ((/* implicit */unsigned char) arr_2 [(short)0]);
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 636561398)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (short)8045)) : (((/* implicit */int) (!((_Bool)1))))))) : ((-(((((/* implicit */_Bool) 417905777149137431LL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
            var_29 = ((/* implicit */signed char) 636561394);
        }
        /* LoopNest 3 */
        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)16780))))) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_18])) : (((/* implicit */int) (short)-8061))));
                        var_31 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0 - 1] [i_0] [i_0]);
                        var_32 = ((/* implicit */int) (short)14236);
                    }
                } 
            } 
        } 
        arr_54 [i_0] = ((/* implicit */unsigned char) arr_48 [i_0 - 2]);
        var_33 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (unsigned int i_19 = 2; i_19 < 21; i_19 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)91))))))));
        arr_57 [i_19 + 2] [i_19] &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (arr_42 [i_19] [i_19] [i_19 - 2] [i_19])))) && ((!(((/* implicit */_Bool) 2988987848U))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)37192))))))))));
    }
    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) var_8))));
}

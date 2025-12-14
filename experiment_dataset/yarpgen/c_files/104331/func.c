/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104331
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))) && (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) == (33488896U))) ? (((33488896U) ^ (4261478409U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))));
                    var_18 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) == (arr_6 [i_0] [i_0] [i_0]))) ? (min((4261478409U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2] [i_2 - 1])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1201815149)) | (4261478409U)))), (((unsigned long long int) arr_0 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((((/* implicit */_Bool) 4261478400U)) ? (1201815148) : (-1201815151)))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */signed char) 5551301520508978023ULL);
        arr_11 [i_3] = ((/* implicit */unsigned long long int) (signed char)78);
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 14; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                            {
                                var_20 = ((/* implicit */_Bool) (-(33488896U)));
                                var_21 *= ((/* implicit */signed char) arr_15 [i_6] [i_6]);
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)1024)) - (-1201815165)))) ? ((-(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (var_7) : (63U)));
                            }
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                            {
                                arr_25 [i_4] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)200)) >> (((3230670160591591449ULL) - (3230670160591591449ULL)))));
                                var_23 *= ((/* implicit */_Bool) min((min(((((_Bool)1) ? (arr_16 [i_4] [i_5] [i_6] [i_7]) : (((/* implicit */int) (unsigned short)22534)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))), (((((/* implicit */_Bool) 12895442553200573593ULL)) ? (1201815158) : (((/* implicit */int) (_Bool)0))))));
                                var_24 *= ((/* implicit */unsigned int) (short)-1032);
                            }
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                            {
                                var_25 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 32767))))), ((-(((/* implicit */int) (unsigned char)93))))));
                                arr_30 [i_4] [i_6] [i_6] [i_7] [i_7] [i_10] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12895442553200573596ULL)) ? (((/* implicit */unsigned long long int) var_6)) : (2347338569378343624ULL)))))));
                                arr_31 [i_7] [i_7] [i_7] [6ULL] [i_7] |= ((/* implicit */int) ((((unsigned long long int) 365197931400234448ULL)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            }
                            arr_32 [i_6] = ((/* implicit */unsigned long long int) arr_29 [i_6] [i_6 + 1] [i_6 - 2] [i_6]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    var_26 *= ((/* implicit */unsigned char) min(((~(1201815143))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)26199)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((unsigned long long int) arr_23 [i_4]));
                                var_28 = ((/* implicit */int) (~((+(365197931400234448ULL)))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(-325374679)))), ((+(min((((/* implicit */unsigned long long int) (_Bool)0)), (3416217857950674381ULL)))))));
                    var_30 = ((/* implicit */long long int) 5551301520508978023ULL);
                    var_31 = ((((/* implicit */_Bool) ((int) arr_24 [i_5] [i_5 - 1] [i_5] [i_5] [i_11]))) ? (((/* implicit */int) (!(((-1201815134) > (1201815152)))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_14)))))));
                }
                for (unsigned short i_14 = 4; i_14 < 13; i_14 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 16; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */int) min((((/* implicit */signed char) min((((1201815127) == (((/* implicit */int) (signed char)105)))), (((((/* implicit */unsigned long long int) -1606613743)) == (3416217857950674388ULL)))))), (arr_44 [i_4] [i_5] [i_16])));
                                arr_49 [i_4] [i_5] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_27 [i_5] [i_14] [i_15])) ? (((/* implicit */int) (short)20614)) : (-1698832542))) : (((/* implicit */int) (short)-26304))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                                var_33 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 1545385749U)))) ? ((-((+(((/* implicit */int) (short)5551)))))) : ((+(((/* implicit */int) (short)-28958))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */long long int) ((365197931400234448ULL) > (18081546142309317168ULL)));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_35 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_45 [i_4] [(unsigned char)4] [i_17] [i_5]))), (((/* implicit */unsigned long long int) (-(((arr_38 [i_4]) | (((/* implicit */int) (unsigned char)235)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((max((803862424U), (536869888U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_5] [i_17] [i_18])))))) > (((((/* implicit */_Bool) arr_20 [i_5 + 3] [i_5 + 2] [i_5] [i_5] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((arr_46 [i_4] [i_5] [i_18] [i_17] [i_18]), (3416217857950674388ULL)))))));
                        var_37 = ((/* implicit */unsigned short) min((arr_18 [i_5 + 3]), (arr_18 [i_4])));
                        var_38 *= ((/* implicit */signed char) ((((long long int) 824010088)) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    }
                    var_39 = ((/* implicit */short) (+(((/* implicit */int) ((short) (_Bool)1)))));
                    var_40 = ((/* implicit */unsigned char) min((6561153069347860429ULL), (((/* implicit */unsigned long long int) 503316480))));
                    arr_55 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((short) (signed char)-107));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_19 = 3; i_19 < 14; i_19 += 1) 
    {
        arr_59 [i_19] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_57 [i_19 - 2] [i_19]))));
        var_41 = ((/* implicit */short) ((arr_57 [i_19 + 3] [i_19]) ? (((/* implicit */int) arr_57 [i_19] [i_19])) : (((/* implicit */int) arr_57 [i_19 - 1] [i_19]))));
    }
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 23; i_20 += 2) 
    {
        for (unsigned int i_21 = 0; i_21 < 23; i_21 += 4) 
        {
            for (signed char i_22 = 0; i_22 < 23; i_22 += 4) 
            {
                {
                    arr_67 [i_20] [i_21] [i_21] [i_22] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (min((((/* implicit */unsigned int) (unsigned char)121)), (536869881U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))))))));
                    var_42 |= ((/* implicit */signed char) ((int) ((unsigned int) arr_65 [i_21] [i_21] [i_22] [i_21])));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_24 = 0; i_24 < 19; i_24 += 4) 
        {
            var_43 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_69 [i_23])) ^ (536869861U)));
            /* LoopSeq 1 */
            for (unsigned long long int i_25 = 0; i_25 < 19; i_25 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_26 = 3; i_26 < 18; i_26 += 1) 
                {
                    for (unsigned int i_27 = 3; i_27 < 17; i_27 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_79 [i_23] [i_24] [i_25] [i_26])) && (((/* implicit */_Bool) arr_64 [i_23] [i_24] [i_25] [i_26])))))));
                            arr_81 [i_23] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */short) arr_80 [i_26 - 1] [i_27 - 1] [i_27 + 1] [i_27] [i_27] [i_27]);
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned short) (~((((_Bool)0) ? (((/* implicit */int) (short)23691)) : (((/* implicit */int) (_Bool)1))))));
            }
        }
        var_46 = ((/* implicit */unsigned int) arr_76 [i_23] [i_23] [i_23] [i_23]);
        var_47 *= ((/* implicit */unsigned long long int) (-(arr_80 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])));
    }
}

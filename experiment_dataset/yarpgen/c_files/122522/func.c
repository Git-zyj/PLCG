/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122522
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = (_Bool)1;
        var_20 = ((/* implicit */_Bool) max((var_20), ((_Bool)1)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_21 = ((_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
                    var_22 = ((/* implicit */_Bool) arr_4 [(_Bool)1]);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-((-(((((/* implicit */int) arr_4 [i_3])) - (var_17))))))))));
        arr_12 [i_3 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1])), (arr_1 [i_3])))) ? ((+(((((/* implicit */long long int) var_17)) - (9135977663990539176LL))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))), ((+(var_14)))))));
        arr_13 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_3] [16U] [i_3])) < (((/* implicit */int) (_Bool)1)))))));
    }
    var_24 = ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)));
    /* LoopSeq 4 */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) ((_Bool) arr_2 [10U]))) ^ (((/* implicit */int) min(((signed char)-53), (((/* implicit */signed char) (_Bool)1))))))));
        var_26 += ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_19 [i_5] = ((_Bool) ((var_4) <= (-1LL)));
        arr_20 [i_5] = arr_18 [i_5];
        var_27 = ((signed char) arr_18 [i_5]);
        arr_21 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 781527623U)) ? (-1231942453777964139LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_18)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_28 = ((long long int) ((_Bool) arr_23 [i_6]));
        arr_25 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_3)), (var_11)))))))) ? ((((+(arr_6 [i_6]))) / (((/* implicit */int) (!(arr_7 [(_Bool)1] [i_6] [i_6])))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_9))))));
        arr_26 [i_6] = ((/* implicit */unsigned short) min((((int) arr_23 [i_6])), (((/* implicit */int) var_11))));
        arr_27 [i_6] [i_6] = ((/* implicit */int) var_15);
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_29 = ((/* implicit */_Bool) (+(arr_1 [i_7])));
                    var_30 = ((_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((2171156459U) - (2171156457U)))));
                    arr_37 [(signed char)14] [i_8] [i_8] [(signed char)14] |= ((/* implicit */_Bool) var_9);
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_49 [i_13] [i_7] [i_7] [i_12] [19LL] = ((int) var_9);
                            arr_50 [i_13] [i_11] [i_11] [i_11] [i_7] [i_11] [i_7] |= var_16;
                        }
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            arr_53 [i_7] [i_7] [(_Bool)0] [i_12] [i_14] [i_7] [i_12] = ((/* implicit */long long int) ((_Bool) (_Bool)1));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((var_17) - (((/* implicit */int) var_11)))))));
                            arr_54 [i_14] [i_10] [i_10] [i_10] [i_14] |= ((/* implicit */signed char) ((((/* implicit */int) arr_51 [i_7] [i_10] [i_11] [i_14] [i_14])) + (((/* implicit */int) arr_39 [i_7] [i_10] [i_7]))));
                            arr_55 [i_7] [i_7] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)50313)) : (((/* implicit */int) var_8)));
                            var_32 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */int) var_6)) : (arr_45 [i_12] [i_12] [i_11] [i_12]))) : (((/* implicit */int) var_19))));
                        }
                        for (int i_15 = 1; i_15 < 18; i_15 += 3) 
                        {
                            arr_59 [i_7] [i_10] [i_10] [i_12] [i_7] = ((/* implicit */signed char) 0LL);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? ((+(arr_44 [i_7] [14LL] [i_11] [i_11] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-35)))));
                            var_34 ^= ((/* implicit */_Bool) ((var_15) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_19)) != (((/* implicit */int) arr_38 [i_7] [i_7]))))))));
                            arr_60 [i_7] [i_10] [i_11] [i_7] [i_15 + 1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3435464901U))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((_Bool) ((((/* implicit */_Bool) arr_46 [i_15 - 1])) ? (arr_28 [i_7] [i_7]) : (((/* implicit */unsigned int) 596419541)))))));
                        }
                        var_36 = ((((((/* implicit */int) var_13)) % (((/* implicit */int) (_Bool)1)))) >> (((-1537869715) + (1537869727))));
                        var_37 = ((/* implicit */_Bool) arr_28 [i_10] [(signed char)12]);
                        arr_61 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */unsigned int) ((arr_7 [i_7] [i_10] [i_11]) ? (((/* implicit */int) arr_8 [16LL])) : (((/* implicit */int) (_Bool)1))))) : ((+(var_1)))));
                    }
                } 
            } 
        } 
        arr_62 [i_7] = ((/* implicit */long long int) var_7);
        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_7] [14U])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(arr_7 [i_7] [i_7] [i_7])))))))));
        /* LoopSeq 2 */
        for (int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_18 = 2; i_18 < 18; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        {
                            arr_74 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) var_11);
                            arr_75 [i_19] [i_7] [(_Bool)1] [i_7] [(_Bool)1] = ((/* implicit */int) var_3);
                            arr_76 [5LL] [i_17] [i_7] [i_16] [8U] = ((/* implicit */int) arr_73 [i_7] [i_16] [i_7] [i_18] [(_Bool)1]);
                        }
                    } 
                } 
                arr_77 [18] [i_17] [i_17] [i_7] |= ((_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (2171156459U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    arr_80 [i_7] [i_7] [i_7] [i_17] |= ((/* implicit */unsigned int) arr_17 [i_7]);
                    var_39 += ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (_Bool)1)))));
                    var_40 = ((/* implicit */unsigned short) var_14);
                }
            }
            for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) 
            {
                arr_85 [i_21] [i_21] [i_16] &= ((/* implicit */signed char) (+((+(((/* implicit */int) arr_67 [i_7] [i_16] [(_Bool)1]))))));
                var_41 = ((/* implicit */_Bool) 1LL);
                var_42 = ((/* implicit */long long int) ((unsigned int) var_0));
            }
            /* LoopNest 2 */
            for (signed char i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    {
                        arr_93 [i_7] = ((/* implicit */long long int) arr_71 [i_22] [i_16] [i_7] [i_7] [i_23] [i_7] [i_16]);
                        var_43 = ((/* implicit */int) min((var_43), (var_17)));
                        arr_94 [i_7] [i_16] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (9053986391348824510LL)));
                        arr_95 [i_7] [i_16] [i_16] [i_16] [i_7] = ((/* implicit */signed char) var_17);
                        var_44 += ((/* implicit */unsigned short) arr_64 [i_22]);
                    }
                } 
            } 
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            arr_98 [i_7] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_40 [i_7] [i_7]))));
            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_7] [i_24] [i_7] [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_87 [(unsigned short)18])))))));
            arr_99 [10] [i_7] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_84 [i_7] [i_24] [(signed char)17])) : (((/* implicit */int) (unsigned short)18723))))) : (arr_32 [i_7] [i_7] [i_7])));
        }
    }
    var_46 += ((_Bool) ((((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) var_19))))) / (var_4)));
    /* LoopNest 2 */
    for (signed char i_25 = 0; i_25 < 17; i_25 += 4) 
    {
        for (int i_26 = 1; i_26 < 14; i_26 += 4) 
        {
            {
                arr_105 [i_26] = ((/* implicit */_Bool) (+(((((2627513241U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11571))))) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (unsigned short i_27 = 0; i_27 < 17; i_27 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            {
                                var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_26 - 1])) ? (((((/* implicit */_Bool) min((var_7), (var_18)))) ? (min((arr_112 [i_25] [i_27] [i_27] [(_Bool)1] [i_25]), (-1862829610))) : (((((/* implicit */int) var_12)) | (((/* implicit */int) var_2)))))) : (min((var_17), ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_114 [i_25] [i_26 + 1] [i_25] [i_28] [i_29] |= ((/* implicit */_Bool) arr_92 [i_26 - 1] [i_26 - 1] [i_26 + 1] [i_26 - 1] [i_26 - 1] [(signed char)12]);
                                var_48 = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (min((((/* implicit */long long int) arr_97 [i_26])), (var_14)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_30 = 2; i_30 < 16; i_30 += 2) 
                    {
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            {
                                var_49 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), (arr_79 [i_30 - 1] [i_30 - 1] [i_30 + 1] [i_30])))), (((((/* implicit */_Bool) max(((signed char)114), (var_18)))) ? (var_1) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))))));
                                var_50 = min((max((((/* implicit */int) var_0)), (((var_17) << (((((((/* implicit */int) (signed char)-28)) + (39))) - (10))))))), (((/* implicit */int) (unsigned short)47130)));
                                var_51 = arr_71 [i_31] [i_31] [i_31] [i_31] [(_Bool)1] [i_31] [i_31];
                            }
                        } 
                    } 
                    var_52 = (((+(((1795525809006144401LL) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))) <= (((/* implicit */long long int) ((int) (signed char)-10))));
                }
                arr_121 [i_25] = ((/* implicit */signed char) (+(((/* implicit */int) arr_52 [i_25] [i_25] [i_25] [(_Bool)1] [(signed char)17] [i_25] [(_Bool)1]))));
            }
        } 
    } 
}

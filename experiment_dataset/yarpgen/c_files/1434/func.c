/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1434
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
    var_20 = ((/* implicit */_Bool) 2380564404370097573LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)45)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : ((+(-2380564404370097573LL)))));
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6976964370507863476ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_12))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned int) var_14);
            var_22 = ((/* implicit */unsigned int) -5698611934662701511LL);
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_23 -= ((/* implicit */unsigned short) ((2510352069U) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
                /* LoopSeq 3 */
                for (long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                {
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9)) ? (arr_14 [i_3] [i_2] [i_3] [i_2]) : (arr_14 [i_3] [i_3] [i_3] [i_3])))) ? (arr_10 [i_0] [i_2] [i_3]) : (((/* implicit */unsigned int) -1256477114))));
                    arr_16 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (((+(var_2))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) * (1784615226U))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)148))))) ? ((+(524287))) : (((var_8) ? (((/* implicit */int) arr_11 [i_0] [i_3] [i_0] [i_3])) : (((/* implicit */int) arr_7 [i_0]))))));
                }
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */short) (~(((((/* implicit */int) (short)127)) | (((/* implicit */int) (_Bool)1))))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_3] [i_2] [i_0])) ? (-1370401009) : (-1370400998)))) ? (((1370401004) + (((/* implicit */int) (_Bool)1)))) : (((int) arr_14 [i_3] [i_3] [i_2] [i_3]))));
                }
                for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) 1256477114)) ? (((/* implicit */int) arr_20 [i_6] [i_2])) : (((/* implicit */int) arr_20 [i_6] [i_6])))))));
                    var_29 = ((/* implicit */long long int) (-(3962170315511610856ULL)));
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (~(((unsigned int) (short)11231)))))));
                }
            }
            arr_22 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (unsigned short)65535);
        }
        arr_23 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)111))));
    }
    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        var_31 = ((/* implicit */short) ((unsigned short) (_Bool)1));
        var_32 -= ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) arr_25 [4LL])))));
        var_33 += ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) min((arr_25 [10LL]), (arr_25 [(unsigned char)4])))) || (((/* implicit */_Bool) ((var_5) ? (14586643607732130196ULL) : (((/* implicit */unsigned long long int) 134217727)))))))), (((int) ((((/* implicit */_Bool) -472904817)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128)))))));
    }
    /* LoopNest 2 */
    for (short i_8 = 2; i_8 < 19; i_8 += 4) 
    {
        for (long long int i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            {
                var_34 -= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_8])) ? (((/* implicit */int) arr_29 [i_9] [i_9 + 2] [i_9 + 2])) : (arr_27 [i_8 + 1])))), (((long long int) arr_27 [i_8]))));
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) 9223372036854775807LL))));
                var_36 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) (short)10018)) ? (arr_28 [i_8] [i_9] [i_9]) : (4635985U))) << ((((+(((/* implicit */int) (unsigned char)71)))) - (59))))), (((2476100748U) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_8] [i_8] [i_9])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        for (short i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            arr_40 [i_10] [i_10] [i_12] = ((/* implicit */short) ((max((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)111)), (arr_3 [i_10])))), (var_3))) << (((((((/* implicit */_Bool) (-(-448420713)))) ? (((arr_36 [i_12] [i_11]) * (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (6954033309736795329LL)))));
                            arr_41 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((1256477114) - (((/* implicit */int) (unsigned short)11))));
                            var_37 = ((/* implicit */long long int) ((_Bool) ((_Bool) (_Bool)1)));
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((unsigned long long int) (((_Bool)0) ? (3044358189880368904ULL) : (0ULL)))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 12519670661797867804ULL)))) * (((arr_2 [i_13] [i_13]) / (((/* implicit */long long int) arr_30 [i_13]))))))))))));
                            /* LoopSeq 3 */
                            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                            {
                                arr_45 [i_10] [i_10] [i_10] [i_12] [i_12] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_15);
                                var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)160)) ? (67108863LL) : (1181175176067403646LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_17 [i_10] [i_11])) : (((/* implicit */int) (short)27036))))) : (((((/* implicit */_Bool) arr_17 [i_10] [i_10])) ? (((/* implicit */long long int) 2113206640U)) : (18010000462970880LL)))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)37)) ? (arr_24 [i_13] [i_13]) : (9003390828137262221LL)))), (min((arr_25 [i_10]), (((/* implicit */unsigned long long int) 8657642073746050751LL)))))))))));
                            }
                            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
                            {
                                var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_10] [i_13])) || ((_Bool)1))))) > (min((((/* implicit */long long int) 243974122)), (18010000462970879LL)))))) - (((/* implicit */int) arr_39 [i_10] [i_10] [i_12] [i_10] [i_13])))))));
                                arr_50 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(536870656LL))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8881759596871378958LL))))))))) ? (min((((/* implicit */unsigned long long int) ((var_11) / (arr_15 [i_10] [i_13] [i_15])))), ((+(arr_4 [i_15] [i_11] [i_11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_39 [i_10] [i_11] [i_12] [i_13] [i_15]), (arr_48 [i_10] [i_11] [i_11] [i_11] [i_11] [i_11] [i_15])))))));
                                var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 594360450)) + (((arr_38 [i_15] [i_12] [i_10] [i_12] [i_15]) / (var_0)))))))))));
                            }
                            for (long long int i_16 = 0; i_16 < 11; i_16 += 1) 
                            {
                                var_42 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (var_14)))), (((arr_25 [i_13]) * (arr_25 [i_10])))))));
                                var_43 |= ((/* implicit */int) 460044397U);
                                arr_54 [i_12] [i_10] [i_10] [i_10] [i_10] = var_12;
                            }
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((max((17179869168LL), (var_0))) > (min((9223372036854775807LL), (((/* implicit */long long int) 1276751699U)))))))));
                var_45 = ((/* implicit */_Bool) 3542281272150037687LL);
            }
        } 
    } 
}

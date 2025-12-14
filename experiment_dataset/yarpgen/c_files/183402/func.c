/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183402
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_0 - 1]) / (arr_10 [i_0] [i_0 + 1])))) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (arr_10 [i_0] [i_0 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 718889258U)))))));
                                var_11 = var_8;
                            }
                        } 
                    } 
                    arr_15 [i_0 + 1] [12U] [i_1] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_3), (((((/* implicit */int) (unsigned short)10776)) << (((((/* implicit */int) (unsigned char)105)) - (102)))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)91)))))) : (((((100694127) > (var_10))) ? (((((/* implicit */_Bool) 1030876344U)) ? (((/* implicit */int) var_6)) : (arr_0 [14U] [i_0]))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)55935))))))));
                    arr_16 [i_0] [i_0] [i_2 - 2] [i_0] = ((/* implicit */int) var_0);
                    arr_17 [i_0] = var_2;
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        arr_20 [i_5] = ((((/* implicit */_Bool) min((1556577368U), (((/* implicit */unsigned int) ((176814139) <= (var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2738389927U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (-1) : (min((var_2), (((/* implicit */int) (unsigned short)55911)))))) : (-176814139));
        var_13 = ((/* implicit */unsigned int) (unsigned char)147);
        var_14 *= ((((/* implicit */_Bool) -176814139)) ? (((/* implicit */int) (((((_Bool)1) || (var_0))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [(unsigned short)17])))))))) : (var_1));
    }
    for (int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 8; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) ((var_6) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */int) ((((/* implicit */int) var_7)) <= (1271401360)))) ^ (min((var_4), (((/* implicit */int) (_Bool)1))))))));
                        arr_31 [4] [i_7] [i_7] [i_6] = ((/* implicit */int) var_9);
                    }
                } 
            } 
            arr_32 [i_7] [i_7] = ((min((2147483647), (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */_Bool) 308612089)) ? (((((/* implicit */_Bool) 255U)) ? (0) : (((/* implicit */int) (unsigned char)168)))) : (((arr_29 [i_6] [i_7]) << (((/* implicit */int) (_Bool)1)))))));
            arr_33 [i_6] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) var_0)))))), (min((4117569984U), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)212)), (-519373150))))))));
            var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2738389927U), (((/* implicit */unsigned int) (unsigned char)132))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -2079176888)) && ((_Bool)0)))) > (arr_28 [8U] [8U] [i_7] [i_7]))))) : (min((min((((/* implicit */unsigned int) var_9)), (2738389927U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))));
            /* LoopSeq 2 */
            for (int i_10 = 1; i_10 < 10; i_10 += 2) 
            {
                var_17 = ((((((/* implicit */int) (unsigned char)168)) & (arr_25 [i_10 - 1]))) * (max((arr_3 [i_10 + 1]), (-1))));
                var_18 = max((((/* implicit */int) var_5)), ((-(((/* implicit */int) arr_21 [i_10 - 1] [i_7])))));
                var_19 = ((/* implicit */int) min((((((((/* implicit */int) var_7)) < (-2122161729))) ? (((unsigned int) (unsigned char)255)) : (max((1208635640U), (((/* implicit */unsigned int) (unsigned char)121)))))), (((/* implicit */unsigned int) ((max((980911214U), (((/* implicit */unsigned int) var_0)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((-135605361) < (((/* implicit */int) (unsigned short)19659)))))))))));
            }
            /* vectorizable */
            for (unsigned int i_11 = 2; i_11 < 8; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        {
                            arr_46 [i_6] [i_7] [i_11] [i_7] [i_13] = ((/* implicit */_Bool) (+(arr_36 [4] [i_7] [i_11 - 2] [i_6])));
                            var_20 = ((/* implicit */int) max((var_20), (((7340032) / (1073741824)))));
                            arr_47 [i_6] [i_7] [i_11] [i_7] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_6])) << (((2147483647) - (2147483619)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)59435)) : (-1349312759)));
                var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (arr_8 [i_7] [i_7] [i_7] [i_6]) : (var_8))) >= (((/* implicit */int) (unsigned char)21))));
            }
        }
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_0)))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    {
                        arr_55 [1U] [1U] [1U] [i_15] [i_16] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)234)))), (((((/* implicit */_Bool) (unsigned short)13164)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))));
                        var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1556577368U)) ? (((/* implicit */int) (_Bool)0)) : (1623409192))) << (((1208635640U) - (1208635614U)))));
                        var_25 = ((/* implicit */int) min((var_25), ((-(((/* implicit */int) ((((1746960314U) + (((/* implicit */unsigned int) -1)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((1556577368U) < (149081069U))))))))))));
                    }
                } 
            } 
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) 0)) : (3692121596U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -58674246)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)21))))))))));
            /* LoopSeq 1 */
            for (unsigned short i_18 = 1; i_18 < 10; i_18 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_19 = 3; i_19 < 9; i_19 += 1) 
                {
                    var_27 = ((/* implicit */unsigned int) max((((/* implicit */int) (((_Bool)1) && ((_Bool)1)))), ((-(((/* implicit */int) ((((/* implicit */unsigned int) var_3)) >= (0U))))))));
                    var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1743327280U)) ? (1556577368U) : (((/* implicit */unsigned int) 7)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_3)) > (min((1208635640U), (((/* implicit */unsigned int) 58674245))))))))));
                }
                for (unsigned int i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    arr_64 [i_6] [i_17] [i_17] [i_17] [i_20] [(unsigned short)3] = min((max((((((/* implicit */_Bool) -995559620)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_6)) & (var_1))))), (((/* implicit */int) ((((((/* implicit */_Bool) 134217727)) ? (-995559620) : (((/* implicit */int) (unsigned short)49542)))) >= (((/* implicit */int) ((-856499819) != (-856499819))))))));
                    var_29 = ((unsigned int) (unsigned char)0);
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) ? (524287) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */int) var_6))))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_6] [i_20] [i_6] [i_18 - 1] [i_20]))) : (2738389927U)))))))))));
                    arr_65 [i_17] [i_18] [i_17] [i_17] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_3), (var_10)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (4267575151U))) : (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (-1)))))), (((/* implicit */unsigned int) ((var_8) >= (var_10))))));
                    arr_66 [i_6] [i_6] [i_17] [i_6] = ((/* implicit */unsigned short) (_Bool)0);
                }
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) arr_1 [i_17])), (856499818)))));
                arr_67 [6] [i_17] [i_17] [6] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) 995559619)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_52 [i_18] [i_18] [i_6] [i_6])))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= (4294967295U)))))))));
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42629)) ? (((/* implicit */unsigned int) (+(-995559620)))) : (100663296U)));
                var_33 = ((/* implicit */unsigned int) ((3751034799U) >= (((/* implicit */unsigned int) (+(-1524419234))))));
            }
            /* LoopSeq 1 */
            for (int i_21 = 0; i_21 < 11; i_21 += 2) 
            {
                arr_71 [i_17] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))) <= (min((1483023011U), (((/* implicit */unsigned int) var_2)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_6] [i_17] [i_6] [i_6] [i_6])) ? (arr_37 [i_6] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20379)))))) ? (((unsigned int) (unsigned short)0)) : (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) var_7))))))))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) + (arr_35 [i_6] [i_17])));
                var_35 = var_7;
            }
            var_36 += ((/* implicit */unsigned short) min(((~(1483023011U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21875)) ? (((((/* implicit */int) (unsigned char)255)) + (995559620))) : (((((/* implicit */_Bool) 793204470)) ? (((/* implicit */int) var_0)) : (var_2))))))));
        }
        arr_72 [i_6] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) 1995666739)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3517023492U)))))) ? (var_10) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_0))))) ? (((/* implicit */int) (unsigned char)89)) : ((~(585548740))))));
        /* LoopNest 2 */
        for (unsigned int i_22 = 0; i_22 < 11; i_22 += 2) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                {
                    arr_79 [i_6] [i_22] [i_23] [i_22] = ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) ((((/* implicit */int) var_6)) > (arr_75 [9] [(unsigned short)3] [i_23])))) : (((/* implicit */int) (unsigned short)45156))))) ? (((((/* implicit */_Bool) 1963078417)) ? (((/* implicit */int) arr_50 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_50 [i_6] [i_6] [i_6] [i_6])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)18670)))));
                    var_37 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) 995559619)), (arr_77 [i_6] [4] [i_6])))) ? (((((/* implicit */_Bool) 8191)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 3276374405U)) ? (((/* implicit */int) var_9)) : (var_10))))), (((/* implicit */int) var_5))));
                    var_38 = (-(max((((/* implicit */int) (_Bool)0)), (min((var_1), (((/* implicit */int) var_9)))))));
                    arr_80 [i_6] [i_22] [(unsigned char)2] = ((/* implicit */unsigned short) min((var_4), (-833207374)));
                }
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119159
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) var_8);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((short) (-(((657569272U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((3637398024U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1)));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12654)) << (((var_10) - (2440027852586756243LL)))));
    }
    var_14 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_15 = ((/* implicit */long long int) (-(var_7)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(((long long int) var_1)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            arr_18 [i_2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 657569272U)) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (657569287U)));
                            arr_19 [i_2] [i_3] [i_3] [i_3] [i_6 + 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) != (((/* implicit */long long int) 3637398005U)))))) == (657569272U)));
                        }
                    }
                    for (unsigned short i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 3; i_8 < 18; i_8 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1179879353)) ? (1179879353) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))));
                            arr_24 [i_2] [0] [i_4] [i_4] [i_7] [i_8] = ((/* implicit */int) var_6);
                        }
                        for (unsigned int i_9 = 4; i_9 < 17; i_9 += 3) 
                        {
                            arr_27 [i_2] [i_2] [i_4] [i_7 - 1] [i_9] [i_7 - 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_7)));
                            var_18 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)3968)) ? (-2060940533) : (((/* implicit */int) (unsigned short)59094)))));
                        }
                        arr_28 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) (unsigned short)14911)))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-7530946167369874455LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_7)) ? (657569261U) : (2813533625U)))));
                        arr_29 [(unsigned short)18] [(unsigned short)7] [i_4] [i_2] = ((/* implicit */unsigned short) -7530946167369874455LL);
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)50625)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1334658280U))))));
                    }
                }
                /* LoopSeq 4 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned char) ((-1) + (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (-7)))))));
                                var_22 -= ((/* implicit */unsigned long long int) (~((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) 657569281U))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((657569256U) == (3637398030U))))));
                    var_24 = min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)3959)) | (((/* implicit */int) (_Bool)1))))))), (var_8));
                }
                for (long long int i_13 = 2; i_13 < 17; i_13 += 4) 
                {
                    var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -1179879370)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) -1179879329)) % (5187561908593039834LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)21146)))) : (max((0), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)86)) : (-1179879329)))))));
                    var_26 += ((/* implicit */unsigned short) ((long long int) (+((-(var_7))))));
                }
                for (short i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        var_27 -= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) max((var_0), (-9223372036854775801LL)))) ? (((/* implicit */int) (short)-24538)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((17316377154280976678ULL) >> (((15738680581789480053ULL) - (15738680581789480043ULL))))) - (16910524564727503ULL)))));
                        arr_44 [(_Bool)1] [i_3] [i_2] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */unsigned long long int) ((((-1LL) - (((/* implicit */long long int) -1179879328)))) + (((/* implicit */long long int) ((/* implicit */int) (short)-21490)))))) : (((((/* implicit */_Bool) ((signed char) (signed char)-58))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) 9223372036854775785LL))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((((long long int) (short)-16611)) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)61)))))));
                            arr_47 [i_2] [i_15] [i_14] [i_14] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((int) var_6))) != (var_1)));
                            arr_48 [i_2] [i_3] [i_14] [i_15] [i_16 + 2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_9)))) ? (var_8) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (-1179879353))))))));
                        }
                        var_29 = ((/* implicit */int) var_9);
                    }
                    var_30 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) 2172809263820889238ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1801562776)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_5)))))));
                    var_31 *= ((/* implicit */unsigned char) var_2);
                    var_32 = var_9;
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_33 = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) (short)-18138)) ? (var_9) : (-3416522194126457769LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    arr_51 [(_Bool)1] [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) | (-1179879333))) ^ (606356638)))) ? (((((((/* implicit */_Bool) var_10)) ? (1179879353) : (((/* implicit */int) var_11)))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)56))))))));
                    var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(1370733784337864847LL)))), (((((/* implicit */_Bool) 1845062799112777459ULL)) ? (17188190767216589336ULL) : (((/* implicit */unsigned long long int) -9223372036854775804LL))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)11569)))) ^ (((/* implicit */int) (short)16060))))) : ((~(var_8)))));
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        for (unsigned int i_19 = 3; i_19 < 17; i_19 += 2) 
                        {
                            {
                                arr_57 [i_2] [i_2] [i_17] = ((/* implicit */long long int) max((1845062799112777452ULL), (((/* implicit */unsigned long long int) (((((-(var_10))) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
                                arr_58 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (int i_20 = 3; i_20 < 18; i_20 += 2) /* same iter space */
                {
                    arr_62 [(unsigned char)2] [i_3] [i_20] |= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (unsigned char)140)), (var_8))) + (((/* implicit */unsigned long long int) max((-13), (((/* implicit */int) (unsigned char)143)))))));
                    var_35 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1179879343)) ? (var_0) : (-268917376435890520LL)))) ? (((/* implicit */int) ((unsigned char) 25LL))) : ((~(((/* implicit */int) (unsigned char)140))))))));
                    var_36 &= ((/* implicit */unsigned short) var_9);
                }
                for (int i_21 = 3; i_21 < 18; i_21 += 2) /* same iter space */
                {
                    arr_66 [i_2] [i_3] [i_21 - 3] = ((/* implicit */unsigned char) (~(var_1)));
                    arr_67 [i_2] [i_3] [(unsigned short)16] [12U] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)191)) % (((/* implicit */int) (unsigned short)58214))));
                }
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) var_6);
    var_38 = ((/* implicit */int) (unsigned short)0);
}

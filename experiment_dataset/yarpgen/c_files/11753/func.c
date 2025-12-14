/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11753
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)9417)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32765)))) + (((/* implicit */int) ((_Bool) arr_2 [i_2] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_4] [i_2])) && (var_6))) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))) ? (((/* implicit */int) (short)9401)) : (((((/* implicit */_Bool) (short)24557)) ? (((/* implicit */int) arr_13 [i_2] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))))));
                                arr_18 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (short)14359)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)63)))))));
                    var_15 += ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_1]))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */short) ((max((((/* implicit */unsigned int) (short)-11233)), (282230623U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9426))) - (3952372087U)))) ? (((/* implicit */int) (short)9414)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) (short)-11233)) ? (((/* implicit */int) arr_9 [i_6] [i_5] [i_0])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-20177))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_24 [i_7] [i_6] [i_5] [i_0])))))));
                        var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (((var_4) % (arr_1 [i_0])))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)51753)))) & (((/* implicit */int) (short)-119))))) : (arr_7 [i_6]));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            arr_31 [i_8] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7300))) : (3952372087U)));
                            arr_32 [i_8] [i_0] [i_6] [i_0] [i_0] = max((((15U) * (3646570865U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9412)) ? (((/* implicit */int) (short)14359)) : (((/* implicit */int) (short)23910))))));
                            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_7] [i_5 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9438))) : (((((/* implicit */_Bool) (short)14351)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1792))) : (1081276333U))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-21472)))))));
                        }
                        /* vectorizable */
                        for (short i_9 = 2; i_9 < 10; i_9 += 2) 
                        {
                            arr_36 [i_9] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned int) (((((_Bool)0) ? (((/* implicit */int) (short)9400)) : (((/* implicit */int) var_0)))) < (((/* implicit */int) ((short) (short)-26776)))));
                            var_19 = ((/* implicit */short) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_29 [i_9] [i_9] [i_9] [i_9] [i_9 - 1]))));
                            arr_37 [i_9] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) var_13);
                            arr_38 [i_0] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? ((~(arr_12 [i_9] [i_7] [i_6] [i_6] [i_5] [i_0]))) : (var_10)));
                            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41248)))))));
                        }
                        for (short i_10 = 1; i_10 < 12; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_1))));
                            var_22 ^= ((/* implicit */unsigned short) ((((arr_29 [i_10] [i_7] [i_6] [i_5] [i_0]) && (arr_29 [i_10] [i_7] [i_6] [i_5] [i_0]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9406)) ? (((/* implicit */int) arr_42 [i_10] [i_7] [i_6] [i_5] [i_0])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (unsigned short)24288)))) : (((/* implicit */int) var_0))));
                        }
                        arr_43 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0])) % (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5124))))));
                        var_23 &= ((/* implicit */short) (-(11416459U)));
                    }
                } 
            } 
        } 
        arr_44 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)47252)))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-17726)) : (((/* implicit */int) (unsigned short)17439)))))));
    }
    for (unsigned short i_11 = 1; i_11 < 17; i_11 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9))))))) * (((((/* implicit */_Bool) (short)28153)) ? (2763237105U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
            var_25 = min((4294967288U), (((/* implicit */unsigned int) (short)32752)));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_26 = ((/* implicit */short) ((max(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32070))) : (2980855550U))), (((/* implicit */unsigned int) (short)2)))) < (3713156143U)));
            arr_53 [i_13] [i_11] = ((/* implicit */short) ((min((((((/* implicit */_Bool) (unsigned short)51771)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32761)))), (((/* implicit */int) max((arr_50 [i_13] [i_11] [i_11]), (arr_46 [i_13] [i_11])))))) * (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8192)) ? (2148143720U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) && ((!(((/* implicit */_Bool) var_12)))))))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)60997)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) ((_Bool) 960810728U))))));
            arr_54 [i_13] [i_13] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1153821442U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) var_10)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))));
            arr_55 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)22661))))) ? (((/* implicit */int) (unsigned short)8397)) : (((/* implicit */int) max((arr_48 [i_13] [i_11]), (arr_48 [i_13] [i_11]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) ? (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3862810155U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)63)))));
        }
        var_28 *= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-32761))))) || (((/* implicit */_Bool) arr_50 [i_11] [i_11] [i_11])))), (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_49 [i_11 - 1] [i_11] [i_11 + 2]))))));
        var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)7383)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */int) (short)23788)) / (((/* implicit */int) arr_52 [i_11 + 2] [i_11] [i_11 + 2])))) : ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-7885))))));
        var_30 = ((/* implicit */unsigned short) (short)254);
    }
    var_31 ^= ((/* implicit */_Bool) max((((((((/* implicit */int) (short)3)) << (((((/* implicit */int) var_0)) - (32921))))) + (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) (short)30))))))), (((/* implicit */int) var_3))));
}

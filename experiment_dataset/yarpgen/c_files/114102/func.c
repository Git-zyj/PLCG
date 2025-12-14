/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114102
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_9 [i_0] [14] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) (unsigned short)65508)), (((((/* implicit */_Bool) (short)-9651)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9651))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max(((short)-9642), ((short)20097)));
                                var_12 -= ((/* implicit */_Bool) (((!(var_1))) ? (((/* implicit */int) ((short) arr_1 [i_3]))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_2))))));
                                arr_18 [i_3] [i_1] [i_1] [(_Bool)1] [i_4] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    var_13 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27446)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9633))))) ? (((((/* implicit */_Bool) (short)8107)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1710559768U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9642)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    arr_25 [17U] = ((/* implicit */short) (((+(var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    arr_26 [i_0] [i_0] [i_1] = ((((((/* implicit */int) (short)9641)) != (((/* implicit */int) var_4)))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-29375)) : (((/* implicit */int) var_6))))));
                    var_14 = ((/* implicit */short) 1126407816);
                }
                for (signed char i_7 = 1; i_7 < 15; i_7 += 3) 
                {
                    var_15 = ((/* implicit */unsigned long long int) (signed char)-37);
                    var_16 = (short)-9642;
                    var_17 *= (short)-8193;
                    var_18 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((long long int) arr_1 [i_0]))))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (7456514754543332576ULL)))))));
                }
                /* LoopSeq 3 */
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) 10822722576431368541ULL);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((short)-9649), (arr_32 [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))) ? ((~(arr_28 [i_1] [i_1] [i_1] [i_10]))) : ((+(2584407527U)))));
                        }
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_19 [i_9] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) arr_34 [i_0])) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((short) var_7)))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) 4294967295U)) ? (arr_37 [i_9] [10LL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_0)))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_11 = 4; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */long long int) var_0);
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned char)240), (((/* implicit */unsigned char) var_0))))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_1)))))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 5533575939814614695LL))))), (4294967282U))))))));
                            }
                        } 
                    } 
                    var_24 ^= ((short) ((((/* implicit */_Bool) arr_13 [i_8])) ? (734007099U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24898)))));
                }
                for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        var_25 = ((/* implicit */short) max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-1429)), (min((((/* implicit */unsigned int) var_0)), (arr_24 [i_0] [i_13] [i_0]))))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_15 = 2; i_15 < 16; i_15 += 4) 
                    {
                        var_27 += ((/* implicit */unsigned int) (_Bool)1);
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_8 [i_13]))));
                        var_29 = ((/* implicit */unsigned int) -1556506376);
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
                        {
                            {
                                arr_55 [i_0] [i_17] [i_0] [(unsigned char)10] [i_17] = ((/* implicit */signed char) var_8);
                                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (unsigned char)113)) : ((-(((/* implicit */int) (short)30381)))))))));
                                var_31 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((min((var_10), ((_Bool)0))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))), (8729525392936689185LL)));
                            }
                        } 
                    } 
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_32 = ((/* implicit */short) ((var_0) ? (((((/* implicit */int) ((_Bool) arr_24 [i_0] [i_0] [i_0]))) - (((arr_52 [i_18] [i_1] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))))) : ((((_Bool)0) ? (((/* implicit */int) (short)25682)) : (((/* implicit */int) ((signed char) var_10)))))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_23 [i_0] [i_0] [i_0])))) >= (((/* implicit */int) min((var_1), ((_Bool)0))))))) == (((/* implicit */int) (short)9642))));
                }
            }
        } 
    } 
    var_34 = ((/* implicit */long long int) min((((/* implicit */int) var_7)), ((+(((((/* implicit */int) var_2)) | (((/* implicit */int) (short)-9653))))))));
    var_35 &= ((/* implicit */int) var_2);
}

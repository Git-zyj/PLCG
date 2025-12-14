/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106111
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))));
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 15; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0 + 2] [i_1 + 3] [i_0 + 2] [i_1 + 2]))));
                            var_19 = ((/* implicit */int) 0U);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (1023U)))) ? (max((var_2), (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-6136)) : (1107038047))))))), ((+(max((18446744073709551614ULL), (((/* implicit */unsigned long long int) 1107038047)))))))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(var_4)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_1 - 1])), (9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) (-(var_0)))) : (max((var_10), (((/* implicit */unsigned long long int) arr_3 [i_0] [3U] [i_1 + 2])))))) : (((/* implicit */unsigned long long int) 1107038047))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 3) 
        {
            var_22 = ((/* implicit */_Bool) ((unsigned int) var_11));
            var_23 = ((/* implicit */unsigned long long int) var_9);
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-(arr_14 [6U]))))));
        }
        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_22 [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_8])) ? (((((/* implicit */_Bool) (~(1107038038)))) ? (((/* implicit */int) ((short) var_16))) : (arr_13 [i_6] [i_7] [i_8]))) : (arr_8 [11LL] [i_6] [11LL] [i_7] [5ULL])));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((arr_19 [i_0] [i_0] [i_0] [4LL]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) << (((((/* implicit */int) (_Bool)0)) * (916637062)))))))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                var_26 -= ((/* implicit */_Bool) arr_21 [i_0] [i_9] [i_0 + 2] [i_0 - 1]);
                var_27 = ((/* implicit */int) var_12);
            }
            for (unsigned int i_10 = 1; i_10 < 13; i_10 += 3) 
            {
                var_28 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_29 [i_0 - 1] [12U] [2U]))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 352246071U))))), ((+(var_10)))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        {
                            arr_35 [i_0] [i_6] [i_10] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_3)), (var_4)));
                            var_29 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (short)0))));
                        }
                    } 
                } 
            }
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                arr_40 [i_0] [i_6] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1531727347U)) ? (((/* implicit */int) (_Bool)0)) : (arr_0 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 3; i_14 < 15; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        {
                            var_30 -= ((/* implicit */_Bool) (~((((!(((/* implicit */_Bool) -709304588)))) ? (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27601))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7722))) - (var_12)))))));
                            var_31 = (-(((/* implicit */int) (!(var_13)))));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) ((var_5) >> (((5647314454750187378ULL) - (5647314454750187369ULL)))))) - ((~(-199275847638912461LL))))) : (((((/* implicit */_Bool) (+(-586692902)))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_6] [i_13] [i_14])) ? (arr_34 [(unsigned short)9] [i_6] [i_13] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3827))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2657050973U)) ? (2147483647) : (((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
            }
            var_33 *= ((/* implicit */unsigned int) ((max((9223372036854775807LL), (((/* implicit */long long int) 2147483647)))) / (((/* implicit */long long int) (+(((/* implicit */int) (short)27598)))))));
        }
        for (unsigned int i_16 = 1; i_16 < 15; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned short i_18 = 1; i_18 < 13; i_18 += 1) 
                {
                    for (short i_19 = 1; i_19 < 15; i_19 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) var_1))));
                            var_35 |= min((1278653189U), (3509437272U));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) arr_42 [i_18 - 1] [i_18 + 1] [i_18] [i_0])) : (((((/* implicit */long long int) var_14)) | (var_0)))))) ? ((-(((unsigned int) var_10)))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U))) : (((((/* implicit */_Bool) arr_24 [i_16 + 1] [i_19])) ? (arr_55 [i_0] [i_16 - 1] [i_0]) : (((/* implicit */unsigned int) arr_48 [i_0] [i_16] [i_17]))))))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_37 [i_0 + 2] [i_0 + 1])))) ? (max((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-1215107027)))), ((~(var_2))))) : ((~(((var_6) ? (arr_23 [i_0] [i_16 + 1] [(short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18217))))))))))));
            arr_56 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(max((arr_1 [i_16 + 1]), (((/* implicit */unsigned int) -2109505457)))))) - (((((/* implicit */_Bool) min((arr_21 [i_0] [i_0] [i_16 + 1] [i_0]), (2056871160U)))) ? ((+(var_14))) : ((+(arr_23 [i_0] [i_16 + 1] [i_0])))))));
            /* LoopSeq 2 */
            for (short i_20 = 1; i_20 < 15; i_20 += 1) 
            {
                arr_59 [i_0 - 1] [i_16] [i_0] [i_0 - 1] = arr_25 [i_0] [i_16] [i_0];
                arr_60 [i_0] [i_16] [i_20 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) 4294967282U)))))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_0 + 2] [i_0 + 2] [i_16 - 1] [i_20 - 1] [i_20 - 1]) >> (((/* implicit */int) var_6))))) : (max((((((/* implicit */_Bool) var_10)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), ((~(var_1)))))));
                var_38 = ((/* implicit */short) var_8);
            }
            for (unsigned int i_21 = 0; i_21 < 16; i_21 += 3) 
            {
                var_39 = ((/* implicit */unsigned int) (+(1215107027)));
                var_40 += ((/* implicit */_Bool) (+(max((min((var_0), (arr_36 [(unsigned short)6]))), (((/* implicit */long long int) arr_27 [3U] [i_0] [i_0]))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_22 = 1; i_22 < 15; i_22 += 4) 
            {
                var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) (!(((/* implicit */_Bool) 459999436)))))));
                arr_66 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_57 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) var_0))))));
                var_42 = ((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) arr_2 [i_22] [i_16])) : (((/* implicit */int) arr_50 [i_0] [i_0] [i_0] [13U]))))));
                var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((_Bool) arr_63 [i_22 - 1] [10] [i_0 - 1])))));
            }
        }
        var_44 = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-1771)) : (1795808818)))) ? (arr_16 [2] [i_0] [i_0 - 1]) : ((+(arr_24 [i_0] [i_0])))))) : ((-(var_1)))));
    }
    var_45 -= ((/* implicit */unsigned long long int) var_5);
}

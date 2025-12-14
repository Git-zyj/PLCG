/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139585
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
    var_18 = ((/* implicit */long long int) var_5);
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-17)), (424112023124910498LL)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(signed char)2] [(signed char)2])))))))) ? (max((var_17), (((long long int) (signed char)-47)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)12)), (min((var_16), (((/* implicit */long long int) (signed char)9))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (((((-(((/* implicit */int) var_5)))) + (2147483647))) >> ((((((!(((/* implicit */_Bool) (short)-6809)))) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) var_0)))) - (46))))))));
                            var_23 &= ((((/* implicit */int) (signed char)59)) >= (((/* implicit */int) (signed char)40)));
                            var_24 &= ((var_14) == ((+((~(var_3))))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) ((short) arr_5 [i_0 - 4] [(_Bool)1]))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) var_9))))))), (((max((var_13), (((/* implicit */long long int) (_Bool)1)))) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_3]))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 4; i_5 < 17; i_5 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-35)))) != (((/* implicit */int) ((_Bool) arr_8 [i_1] [i_1] [i_3] [i_5]))))))));
                            arr_16 [i_5] [(signed char)11] [6LL] [i_2] [(unsigned char)4] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)5]))) : (-3929897932196923718LL)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (short)5960))));
                        }
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_2 - 1] = ((/* implicit */long long int) (signed char)-31);
                            var_27 = ((/* implicit */short) ((long long int) (signed char)55));
                            var_28 = ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) | ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)65)))))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_15)) | (((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 1] [(short)14] [i_6])))))) : (((/* implicit */int) min((((/* implicit */short) arr_5 [i_1 + 1] [i_1 + 1])), (var_9))))));
                        }
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_7), (var_14))), (((((/* implicit */_Bool) -6031138639719657468LL)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-28)))))))) ? (((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3])) ? (var_7) : (-3789374090175577270LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            arr_23 [i_0 + 2] [i_7] [i_2] [i_2] [(_Bool)0] [i_7] = ((/* implicit */signed char) ((unsigned char) arr_9 [i_0] [i_1 - 1] [i_2 + 1] [(_Bool)1]));
                            var_31 -= ((/* implicit */unsigned char) ((5475357718005814747LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10)))));
                            var_32 = ((/* implicit */long long int) (_Bool)1);
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15))))) * (((/* implicit */int) var_15)))))))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_8] = ((/* implicit */long long int) (unsigned char)208);
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                            var_35 -= ((/* implicit */signed char) (unsigned char)55);
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (signed char)80))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_9 = 2; i_9 < 15; i_9 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_10 = 3; i_10 < 17; i_10 += 1) 
            {
                arr_32 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_10] = ((/* implicit */signed char) ((arr_15 [i_0 + 2] [i_10 - 1] [i_10 - 1] [i_0 + 1] [8LL]) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) (signed char)127))));
                var_37 ^= (+((-(2159384039971063972LL))));
                arr_33 [i_10] [i_10] [i_0] = ((/* implicit */_Bool) (short)-1);
            }
            for (short i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_12 = 1; i_12 < 17; i_12 += 3) 
                {
                    arr_40 [i_12] |= ((/* implicit */short) ((signed char) (+(((/* implicit */int) (unsigned char)63)))));
                    arr_41 [i_0 - 2] [i_0] [i_0 + 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 4]))) : (17592186043904LL)))));
                    arr_42 [i_9 - 1] [i_11] [i_12] = (short)5527;
                    var_38 = ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_10 [i_0 - 4] [i_0 - 4] [i_0] [i_0 + 2]));
                }
                for (signed char i_13 = 1; i_13 < 16; i_13 += 1) 
                {
                    arr_46 [i_0 + 2] [i_9 - 1] [i_11] [i_13] [i_13] |= ((/* implicit */signed char) (!((!((_Bool)1)))));
                    arr_47 [i_0] [i_9 - 1] [i_11] [i_13 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 34359738367LL)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (short)-9))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((5475357718005814727LL), (min((((/* implicit */long long int) (signed char)-1)), (-1968446354267864973LL)))))));
                }
                /* LoopNest 2 */
                for (signed char i_14 = 1; i_14 < 17; i_14 += 3) 
                {
                    for (signed char i_15 = 1; i_15 < 16; i_15 += 3) 
                    {
                        {
                            arr_52 [i_0] [i_9] [i_15] [i_14] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)1)))))));
                            arr_53 [i_0] [i_0] [i_15] [i_0] [i_0] [i_0] [(short)16] = (signed char)-67;
                        }
                    } 
                } 
                var_39 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_37 [i_9 + 2] [i_0] [i_0] [i_0 + 1]))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-25061))))) : (min((-5475357718005814714LL), (var_3)))));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        {
                            arr_59 [i_0] [i_16] &= ((long long int) min((((/* implicit */int) max(((unsigned char)228), (((/* implicit */unsigned char) (signed char)-5))))), (((((/* implicit */int) (signed char)-4)) % (((/* implicit */int) var_6))))));
                            var_40 = ((/* implicit */short) (+(((/* implicit */int) min(((signed char)-4), (((/* implicit */signed char) var_1)))))));
                            arr_60 [i_0] [i_16] |= ((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */int) arr_57 [i_9 + 2])) <= (((/* implicit */int) var_15))))), (max((var_0), (arr_57 [i_9 + 1])))));
                            arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))) - (288229826395897856LL)));
                            var_41 = ((/* implicit */short) (unsigned char)255);
                        }
                    } 
                } 
            }
            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (signed char)113))));
            arr_62 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((signed char) (signed char)107)))) - (((((/* implicit */_Bool) (signed char)-5)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))))))));
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (short i_19 = 4; i_19 < 16; i_19 += 4) 
                {
                    {
                        var_43 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) (unsigned char)246))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1))))) : (3186271128013028193LL))) <= (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (signed char)114))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_39 [i_0] [i_9] [i_18] [(_Bool)1] [(signed char)9] [i_0])), (var_10))))) : (arr_34 [i_0] [(unsigned char)12] [i_18] [i_19])))));
                        var_44 -= ((/* implicit */short) ((((/* implicit */int) (signed char)102)) / (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_45 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))));
        arr_69 [i_20] |= ((/* implicit */signed char) 8333121076311438297LL);
    }
    /* LoopNest 2 */
    for (long long int i_21 = 3; i_21 < 18; i_21 += 1) 
    {
        for (short i_22 = 2; i_22 < 18; i_22 += 2) 
        {
            {
                var_46 ^= ((/* implicit */signed char) min((((_Bool) var_8)), ((((_Bool)1) || (((/* implicit */_Bool) 9223372036854775777LL))))));
                var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_21] [i_22] [i_21])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((var_3) & (-7598103796948851057LL))))))) / (((/* implicit */int) max((var_10), (((/* implicit */short) arr_72 [i_22] [i_21] [i_21 - 1]))))))))));
                var_48 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)7))));
                var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_72 [i_21] [i_22] [i_22])) ? ((+(((/* implicit */int) (signed char)-109)))) : (((var_4) ? ((+(((/* implicit */int) (short)28556)))) : (((/* implicit */int) ((_Bool) 7598103796948851037LL))))))))));
            }
        } 
    } 
}

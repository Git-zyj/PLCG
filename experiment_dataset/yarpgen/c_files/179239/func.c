/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179239
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
    var_15 = ((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (((/* implicit */long long int) max((((/* implicit */int) var_9)), (var_0)))))));
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_2)) != (((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_7))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) var_13);
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) == (((/* implicit */int) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)29)))))))) ? (((/* implicit */int) max(((unsigned char)36), ((unsigned char)233)))) : (((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_14))))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_6 [(_Bool)1] [i_1] [(unsigned short)16] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_7)))));
            /* LoopSeq 2 */
            for (short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                arr_10 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)224))));
                var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 408853876U)) ? (((/* implicit */unsigned long long int) 3886113419U)) : (10488207495987433127ULL)))));
                arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_14))))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7)))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) var_12);
                            arr_19 [i_1] [10U] [i_1] [(_Bool)0] [(short)0] [6] [(unsigned short)12] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) 408853871U)) && (((/* implicit */_Bool) 4294967295U)))))));
            }
            arr_20 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_10)))) && ((!(((/* implicit */_Bool) var_12))))));
            var_22 *= ((/* implicit */unsigned int) (((+(var_10))) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (var_10)))));
        }
        for (unsigned char i_6 = 2; i_6 < 17; i_6 += 4) /* same iter space */
        {
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)42), ((unsigned char)224))))) : (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : (4294967295U)))))) : (((((/* implicit */_Bool) ((long long int) var_1))) ? (max((((/* implicit */long long int) var_3)), (var_11))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_12)))))));
            var_24 = ((((/* implicit */int) (short)-13295)) <= (((((/* implicit */_Bool) (unsigned short)44398)) ? (((((/* implicit */_Bool) 1069656515U)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (unsigned char)12)))) : (((/* implicit */int) ((unsigned char) (_Bool)1))))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            var_25 = var_10;
                            var_26 = ((/* implicit */int) max(((unsigned char)90), (((/* implicit */unsigned char) (_Bool)1))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((short) ((unsigned long long int) max((var_9), (((/* implicit */short) var_2))))));
                        arr_37 [i_0] [i_10] [i_10] [i_11] = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)224)))) == (((/* implicit */int) var_3))));
                        arr_38 [i_10] [(_Bool)1] = ((/* implicit */signed char) min(((-(((((/* implicit */unsigned long long int) var_0)) - (var_7))))), (((/* implicit */unsigned long long int) var_6))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            var_28 = ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
                            var_29 = ((/* implicit */int) var_14);
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */long long int) var_0)) / (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) > (var_7))))))))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14))))))))));
                            arr_41 [i_0] [i_6] [i_10] [15LL] [3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_7)))) ? ((+(var_12))) : (((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_13 = 2; i_13 < 17; i_13 += 4) /* same iter space */
        {
            arr_44 [(short)7] [(signed char)11] [(signed char)5] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) var_10))));
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 229523774U)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (unsigned char)0))));
        }
        for (unsigned char i_14 = 2; i_14 < 17; i_14 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), ((short)32767)))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) var_5)))) : (var_0))) / (max((((((/* implicit */int) (unsigned char)243)) / (((/* implicit */int) (unsigned char)227)))), ((+(((/* implicit */int) (short)-21545))))))));
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(var_10)))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (min((var_7), (((/* implicit */unsigned long long int) var_4))))))));
            arr_48 [i_0] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3586911948082309306LL)) ? (1949202001U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) != (min((8ULL), (((/* implicit */unsigned long long int) (short)-13311))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (var_10)))))));
        }
        /* LoopNest 2 */
        for (short i_15 = 3; i_15 < 17; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2038136004)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (unsigned char)224))))) ? (((/* implicit */int) min((var_2), (var_2)))) : (((((/* implicit */int) var_3)) % (((/* implicit */int) var_14))))));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) (unsigned short)33488)) : (((/* implicit */int) (short)-2601))));
                                arr_59 [i_0] [0U] [i_15] [(short)8] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)29241)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) : (4294967295U)))), (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_8))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_13)), (var_2))))))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4)))))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_19 = 3; i_19 < 15; i_19 += 3) 
        {
            var_38 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((376032266), (((/* implicit */int) var_13)))))))));
            var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) - ((-(((/* implicit */int) var_14))))));
        }
        /* vectorizable */
        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) /* same iter space */
        {
            var_40 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) var_5)))));
            arr_65 [i_0] [i_20] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) ((signed char) (-2147483647 - 1))))));
            var_41 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                for (unsigned char i_22 = 0; i_22 < 18; i_22 += 3) 
                {
                    {
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (var_0))))))));
                        var_43 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_10)))) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))));
                        var_44 = ((/* implicit */short) ((((var_3) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)62))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_23 = 0; i_23 < 18; i_23 += 3) /* same iter space */
        {
            var_45 = ((/* implicit */int) ((var_3) ? (((((/* implicit */_Bool) 4194303ULL)) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) ^ (((/* implicit */int) min((var_6), (var_4)))))))));
            var_46 = ((/* implicit */unsigned int) var_12);
            var_47 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_11))))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_12) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : ((~(var_12)))))));
            var_48 = ((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))));
        }
    }
    var_49 = ((/* implicit */short) max((max((((/* implicit */int) (short)-3055)), (1148333191))), (((/* implicit */int) ((((_Bool) var_2)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119517
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned char) (+((~(((/* implicit */int) var_5))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        arr_4 [(short)8] |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_11)))))))));
        var_20 = ((long long int) (+((-(var_6)))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */_Bool) (~((~((~(var_6)))))));
                    var_21 ^= ((int) ((short) (!(((/* implicit */_Bool) var_10)))));
                    var_22 = (+(((/* implicit */int) (signed char)-90)));
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((int) var_11)))))));
                }
            } 
        } 
        arr_10 [(unsigned char)0] = ((/* implicit */short) (+((+(var_1)))));
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_17 [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(13959827287943070082ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_14)))))) : (var_8)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+((~(var_16))))))));
                        arr_21 [i_5] [i_4] [i_4] [i_0 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_13))))));
                        arr_22 [0] [i_4] [0] [(unsigned char)7] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        arr_25 [8] [i_0] [i_3] [i_4] [i_4] [i_6] = (+(((/* implicit */int) ((short) var_0))));
                        var_25 = ((/* implicit */unsigned short) var_17);
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_16)))));
                            var_27 &= ((/* implicit */long long int) var_1);
                        }
                        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 4) /* same iter space */
                        {
                            arr_32 [6] [i_4] [i_4] [i_3] [i_3] [i_4] [i_0] = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_11))))))));
                        }
                        arr_33 [i_0 + 4] [i_6] [i_4] [i_6] &= ((/* implicit */int) (+((-(var_8)))));
                    }
                }
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_10 = 2; i_10 < 18; i_10 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        {
                            arr_49 [i_11] [i_10] [i_10] [i_12] [i_10] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? ((~(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) var_10))))))));
                            var_29 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) ((unsigned short) var_11))))));
                            arr_50 [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((_Bool) (_Bool)1)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-70)))))) : ((~(((/* implicit */int) ((signed char) var_2)))))));
                            arr_51 [i_9] [i_10 - 2] [19U] [i_9] [(_Bool)1] [i_12] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */short) (+((~(((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
        }
        for (int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (short i_15 = 1; i_15 < 18; i_15 += 3) 
            {
                for (short i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (~(var_1)))) : (((long long int) var_1))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_17 = 4; i_17 < 19; i_17 += 4) 
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) ((short) var_14))) : (var_1)))))));
                            var_33 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) ((unsigned short) var_13)))))));
                        }
                        /* vectorizable */
                        for (long long int i_18 = 0; i_18 < 20; i_18 += 4) /* same iter space */
                        {
                            arr_64 [i_9] [(_Bool)1] [i_14] [i_15] [i_16] [i_9] = ((/* implicit */unsigned short) (-((~(var_11)))));
                            var_34 = ((/* implicit */short) (!(var_9)));
                            var_35 = ((/* implicit */signed char) (-((-(((/* implicit */int) var_7))))));
                        }
                        for (long long int i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
                        {
                            var_36 = var_13;
                            arr_68 [(signed char)11] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_3)))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) var_7))))))) : (((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_1)) : (var_3))))));
                            var_37 &= ((/* implicit */_Bool) ((unsigned char) var_9));
                        }
                        for (long long int i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
                        {
                            var_38 = ((/* implicit */long long int) (+(var_17)));
                            var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) var_17))));
                            var_40 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))));
                        }
                        arr_71 [i_16] [i_15] [(short)16] [i_14] [i_9] &= ((/* implicit */int) (+(((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((/* implicit */unsigned long long int) (+(var_3)))) : ((~(var_8)))))));
                        var_41 *= ((/* implicit */short) (+(((/* implicit */int) var_15))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_21 = 3; i_21 < 19; i_21 += 2) 
            {
                arr_74 [i_9] [0U] [i_21 - 1] [i_21] = ((/* implicit */_Bool) (+((+((~(((/* implicit */int) var_5))))))));
                arr_75 [i_21] [i_14] [i_9] = ((/* implicit */int) (-(((((_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 20; i_23 += 1) 
                {
                    for (short i_24 = 0; i_24 < 20; i_24 += 3) 
                    {
                        {
                            var_42 = (~((~(var_13))));
                            arr_84 [6] [i_23] [7] [i_22] [i_23] [14LL] [i_24] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((_Bool) var_15))))));
                        }
                    } 
                } 
                arr_85 [(_Bool)1] [i_22] = ((/* implicit */unsigned int) ((int) (~((-(((/* implicit */int) var_14)))))));
            }
            for (int i_25 = 0; i_25 < 20; i_25 += 1) 
            {
                arr_89 [i_9] [i_14] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_4)))))))));
                arr_90 [i_9] [i_9] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) (+(var_3)))) : (((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */unsigned long long int) var_3)))))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_26 = 0; i_26 < 20; i_26 += 4) 
            {
                for (unsigned short i_27 = 0; i_27 < 20; i_27 += 3) 
                {
                    {
                        arr_96 [(_Bool)1] [i_27] [i_27] [i_9] = ((/* implicit */signed char) (-((~(((/* implicit */int) (!(var_7))))))));
                        var_43 *= ((/* implicit */unsigned short) ((unsigned int) (+((-(((/* implicit */int) var_5)))))));
                    }
                } 
            } 
        }
        var_44 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
    }
    for (unsigned long long int i_28 = 2; i_28 < 12; i_28 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            for (short i_30 = 0; i_30 < 14; i_30 += 4) 
            {
                {
                    var_45 = ((/* implicit */unsigned short) var_3);
                    var_46 = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)52));
                }
            } 
        } 
        arr_104 [i_28] = ((/* implicit */unsigned char) ((_Bool) (+((~(var_13))))));
    }
    var_47 &= ((/* implicit */unsigned char) (+((~(((long long int) var_1))))));
}

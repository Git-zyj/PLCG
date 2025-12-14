/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17015
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
    var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) ((unsigned char) var_9))) - (((/* implicit */int) ((_Bool) var_9))))) : (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_4)) ? (var_11) : (var_1)))));
                            var_14 = ((/* implicit */unsigned char) (~((+(var_6)))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_10)))));
        }
        for (long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) var_9);
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) (((-(var_1))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (var_2))))));
        }
        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
        {
            var_17 ^= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))));
            var_18 = ((/* implicit */_Bool) var_3);
        }
        for (long long int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
        {
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_11)))));
            var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)448))))) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (var_2)))));
        }
        arr_24 [i_0] = var_4;
    }
    for (unsigned short i_8 = 1; i_8 < 12; i_8 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_20 = (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))));
            var_21 = ((unsigned long long int) ((unsigned long long int) var_8));
        }
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_22 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32)) && ((_Bool)1)))) >> ((((+(var_1))) - (18319252558389901085ULL))))))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : ((+(((((/* implicit */int) var_8)) + (var_6)))))));
            var_24 = ((/* implicit */int) ((short) (((-(((/* implicit */int) var_8)))) == (var_6))));
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_5))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) var_0))))))) : ((-(var_11))))))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        {
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned short) ((_Bool) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) || (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11)))))))));
                            arr_39 [i_13] [i_13] [i_11] [i_11] [i_13] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    {
                        arr_48 [i_8] [i_16] [i_14] [i_15] [i_16] = ((unsigned short) ((var_0) || ((!(((/* implicit */_Bool) var_10))))));
                        arr_49 [i_16] [i_16] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    {
                        arr_54 [i_8] [i_8] [i_18] [i_17] = ((/* implicit */unsigned short) var_0);
                        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
                    }
                } 
            } 
        }
        /* LoopSeq 4 */
        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (signed char i_21 = 0; i_21 < 14; i_21 += 2) 
                {
                    for (unsigned long long int i_22 = 1; i_22 < 13; i_22 += 1) 
                    {
                        {
                            arr_67 [i_8] [i_19] [i_20] [i_8] [i_22] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_5)) >> (((var_11) - (17461290593406150930ULL)))))))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((~(var_7))))) : (((/* implicit */unsigned int) var_2))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 14; i_23 += 3) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(((/* implicit */int) var_9))))))) : (var_7)));
                        arr_75 [i_8 + 1] [i_19] [i_23] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) ((short) var_11))) : (var_6)));
                        arr_76 [i_24] [i_19] [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        arr_77 [i_8 + 1] [i_8 + 1] [i_23] [i_19] = ((/* implicit */short) (((-(((long long int) var_0)))) != (((/* implicit */long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) var_4)))))))));
                    }
                } 
            } 
            arr_78 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) var_8)))))) ? (((/* implicit */int) ((unsigned char) ((unsigned char) var_1)))) : (((/* implicit */int) ((_Bool) var_4)))));
            arr_79 [i_19] [i_8 - 1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (+(var_7)))) ? ((~(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            var_30 += ((/* implicit */unsigned short) var_1);
            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
            var_32 *= (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((unsigned long long int) var_7)))) != (var_6)));
            var_34 = var_3;
        }
        /* vectorizable */
        for (short i_26 = 4; i_26 < 13; i_26 += 4) /* same iter space */
        {
            arr_84 [i_26 + 1] [i_8] = ((/* implicit */_Bool) var_8);
            arr_85 [i_8 + 2] [i_26 - 3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) <= (((((/* implicit */int) var_8)) >> (((/* implicit */int) var_5))))));
        }
        for (short i_27 = 4; i_27 < 13; i_27 += 4) /* same iter space */
        {
            arr_89 [i_8] = ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)131))) : (((/* implicit */int) var_8))))));
            arr_90 [i_8 + 2] [i_8 + 1] [i_8 + 1] = ((/* implicit */signed char) var_3);
        }
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_4)))))))))))));
    }
}

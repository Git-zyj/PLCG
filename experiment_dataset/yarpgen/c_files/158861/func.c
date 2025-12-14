/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158861
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
    var_17 = ((/* implicit */unsigned short) var_14);
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -1918510657550039445LL)) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2]))))));
            var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 1] [i_1 - 1])) / (-1272123946)))));
            var_21 = ((/* implicit */long long int) ((signed char) (-(1272123944))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [i_1] [(short)10] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 - 1] [(unsigned short)1] [(unsigned short)1]))))) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1] [i_2]))));
                        arr_10 [i_0] [10LL] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3]);
                        arr_11 [i_2] [(short)6] [i_2] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1272123956)) || (((((/* implicit */int) (short)-32751)) != (((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_3 [i_3] [i_1] [i_0])) : (-1272123962)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))) : (var_4)))));
            arr_16 [(short)10] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) (short)4597)))) + (2147483647))) << (((((((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */long long int) -1272123944)))) + (4395270763641136652LL))) - (15LL)))));
            arr_17 [0] [i_4] = ((/* implicit */int) arr_3 [i_4] [i_0] [i_0]);
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) var_3)) / ((+(-1272123946))))))));
            arr_18 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) & (-2010077753))) ^ (arr_1 [i_4])));
        }
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (arr_4 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) var_4))));
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */short) ((unsigned short) (-(((((/* implicit */int) var_7)) - (((/* implicit */int) arr_3 [i_5] [i_5] [i_5])))))));
        arr_22 [i_5] [i_5] = var_10;
    }
    var_24 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (int i_6 = 2; i_6 < 13; i_6 += 4) 
    {
        arr_26 [i_6] = ((/* implicit */signed char) (~((+(((arr_23 [i_6] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
        var_25 = var_3;
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6 - 2] [i_6 - 2])) ? (((/* implicit */int) (short)4095)) : (1272123959)))) ? (((/* implicit */long long int) ((int) var_5))) : (((arr_24 [i_6 + 2] [i_6 - 2]) << (((1272123983) - (1272123982)))))));
        arr_27 [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)25085)) ? (arr_23 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_6] [i_6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))))) >= ((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_24 [(short)6] [(short)6])))))));
    }
    for (long long int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
    {
        arr_32 [i_7] = ((/* implicit */short) (~((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) 1272123945)) : (var_5)))))));
        /* LoopSeq 1 */
        for (signed char i_8 = 1; i_8 < 10; i_8 += 3) 
        {
            arr_36 [i_7] = ((/* implicit */signed char) var_15);
            arr_37 [i_7] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (unsigned short)41358)))));
        }
        var_27 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_31 [i_7] [i_7])) >= (((/* implicit */int) arr_31 [i_7] [i_7])))));
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            arr_40 [i_7] [i_7] = ((((/* implicit */_Bool) ((((1751631952U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)17754))))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) arr_35 [i_7]))))))) && (((/* implicit */_Bool) var_7)));
            arr_41 [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((arr_6 [i_7] [i_9] [i_7] [i_9] [i_7] [i_9]) * (((/* implicit */int) var_8))))))) ? (((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1272123955)))))) : (((/* implicit */unsigned int) (~(1406113705))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned long long int) ((((((var_16) - (((/* implicit */long long int) ((/* implicit */int) var_12))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_9] [i_10])) ? (1922714608) : (((/* implicit */int) var_13))))))) | (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned short) var_6)))))));
                arr_44 [(short)6] [i_9] [i_10 + 1] = ((/* implicit */unsigned short) arr_42 [i_10 + 3] [i_10 + 3] [i_10 + 1] [i_10 + 1]);
            }
            for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) ((arr_20 [(_Bool)1] [(_Bool)1]) == (((/* implicit */unsigned long long int) 131941395333120LL)))))))) - (((((/* implicit */_Bool) var_10)) ? ((-(arr_43 [i_7] [i_11]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_7] [i_7] [i_7] [i_11])))))))));
                var_30 = ((/* implicit */short) (-(((max((((/* implicit */unsigned long long int) var_5)), (var_4))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                arr_49 [i_11] = var_9;
            }
            for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 1) 
            {
                arr_53 [i_12] = ((/* implicit */short) (+(((((((/* implicit */int) (short)-4173)) + (2147483647))) >> (((1272123943) - (1272123942)))))));
                var_31 = ((/* implicit */int) var_16);
                var_32 = ((/* implicit */signed char) var_0);
                var_33 = ((/* implicit */unsigned long long int) ((16597325861639691572ULL) < (((/* implicit */unsigned long long int) (+(-1272123933))))));
            }
            var_34 ^= ((/* implicit */_Bool) arr_33 [i_9] [(short)3] [i_7]);
        }
    }
    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
    {
        arr_58 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) -2147483646)) ? (((/* implicit */int) (unsigned short)5853)) : (((/* implicit */int) (unsigned short)65535))));
        arr_59 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((_Bool) var_10)) ? (((/* implicit */unsigned long long int) 2097151LL)) : ((-(arr_57 [i_13] [i_13])))))) && (((/* implicit */_Bool) arr_55 [i_13] [i_13]))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110736
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
    var_18 = ((/* implicit */unsigned int) var_7);
    var_19 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + ((+(581987933U)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_15)))) ? (((/* implicit */long long int) (~(3712979339U)))) : (min((var_6), (9223372036854775796LL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_0] [i_3] [i_2] [i_2] = ((/* implicit */signed char) (-(arr_8 [2U] [i_1] [(unsigned short)14] [8LL] [i_0] [i_3])));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((3712979337U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42))))))));
                    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        var_22 |= ((/* implicit */unsigned char) var_15);
                        arr_15 [i_0] [i_3] [i_2] [i_2] [7LL] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_0] [(unsigned short)8] [i_3] [i_3] [i_3] [i_4 + 3] [i_4])) % (((/* implicit */int) (signed char)-1))));
                        arr_16 [i_1] |= ((/* implicit */short) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) + (arr_3 [i_4] [i_2])));
                    }
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_18 [i_2] [i_3] [i_5])));
                        arr_20 [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (arr_18 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)54)))))));
                    }
                }
                var_24 = ((/* implicit */unsigned short) arr_18 [i_1] [i_1] [i_1]);
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_0] [i_0] [(short)9] [(unsigned short)4] [i_6] [i_6]))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_11)) * (((/* implicit */int) var_11))))));
                    var_26 &= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12))))));
                    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) | (arr_18 [i_0] [i_1] [i_6]))) & (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                }
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) var_4);
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        {
                            arr_31 [i_0] [i_0] [(unsigned short)0] [i_8] [(_Bool)1] [(unsigned short)0] [i_7] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_29 [i_1]))));
                            arr_32 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) && (arr_0 [i_7] [i_8])));
                        }
                    } 
                } 
                arr_33 [i_7] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))) : (((((/* implicit */_Bool) 3712979363U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_1])))))));
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_2))));
            }
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                arr_39 [i_10] = ((/* implicit */signed char) (unsigned short)65535);
                arr_40 [i_0] [(unsigned short)0] [1ULL] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_10]))));
            }
            var_29 = ((unsigned long long int) arr_25 [i_1]);
        }
        for (short i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [(_Bool)1] [6ULL] [i_11])) + (((/* implicit */int) arr_27 [i_0] [i_11] [i_11] [i_11]))));
            arr_43 [5ULL] [5ULL] [5ULL] = ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0]);
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((3712979360U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_26 [i_14] [i_0])) : (((/* implicit */int) (signed char)86))))));
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_42 [i_13] [(unsigned short)8]))));
                            var_33 = ((/* implicit */long long int) ((short) var_1));
                            var_34 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (var_8))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */unsigned long long int) (~(arr_17 [i_11] [i_11] [i_0])));
        }
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
        {
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [i_15])))))));
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_37 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_54 [i_0] [i_15] [i_16])) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_16]))))));
                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_7 [i_0])));
            }
            var_39 = ((/* implicit */unsigned int) (+((-(var_4)))));
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    {
                        arr_61 [i_17] = ((/* implicit */signed char) var_16);
                        var_40 = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_56 [i_17])) : ((-(((/* implicit */int) arr_10 [i_0] [(short)7] [(short)7] [i_18]))))));
                    }
                } 
            } 
            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) var_5))))) != (((/* implicit */int) arr_4 [i_0] [i_0] [i_15])))))));
        }
        for (int i_19 = 2; i_19 < 14; i_19 += 1) 
        {
            var_42 = ((/* implicit */unsigned short) (short)-1);
            var_43 = ((/* implicit */short) (signed char)-28);
        }
        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((-(((/* implicit */int) (signed char)6))))));
        var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)34916)) : (((/* implicit */int) var_2))));
        /* LoopSeq 2 */
        for (unsigned short i_20 = 0; i_20 < 15; i_20 += 3) 
        {
            arr_67 [i_0] [i_20] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 581987957U)) ? (arr_19 [i_20] [i_20] [i_20] [i_0]) : (((/* implicit */int) var_7))))));
            var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_38 [i_0] [i_0]))));
        }
        for (unsigned char i_21 = 0; i_21 < 15; i_21 += 1) 
        {
            arr_70 [i_21] [i_21] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_16)))));
            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) var_10))));
            var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_53 [i_21])) / ((~(((/* implicit */int) arr_59 [i_0] [i_0] [9LL] [i_21]))))));
            /* LoopNest 2 */
            for (unsigned short i_22 = 0; i_22 < 15; i_22 += 3) 
            {
                for (long long int i_23 = 0; i_23 < 15; i_23 += 1) 
                {
                    {
                        arr_76 [i_21] [i_22] [i_23] = ((/* implicit */unsigned short) (+(arr_50 [i_0])));
                        arr_77 [i_23] [i_23] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (signed char)44)) : ((+(((/* implicit */int) var_11))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_24 = 0; i_24 < 15; i_24 += 4) 
        {
            for (signed char i_25 = 0; i_25 < 15; i_25 += 3) 
            {
                {
                    var_49 = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) (_Bool)1)))));
                    var_50 = arr_62 [(unsigned char)14] [i_24] [i_25];
                }
            } 
        } 
    }
    var_51 = ((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)7))))) - (((long long int) (unsigned short)65528)))));
}

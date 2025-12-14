/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17270
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
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((arr_0 [(short)3] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)46970)))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0 - 3])) : (((/* implicit */int) (unsigned short)46956)))) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0 + 1])), ((unsigned short)26353))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            arr_8 [(unsigned char)4] [i_1] [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) (short)15183)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(short)0])))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) 2272431288995718462LL)) ? (arr_12 [i_2 - 2] [i_2 - 2] [i_2] [i_0]) : (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_0])));
                arr_13 [i_0] [i_0] [i_2] [10ULL] &= (+(((/* implicit */int) arr_9 [i_2] [i_2] [i_1])));
                var_13 = ((/* implicit */long long int) min((var_13), ((+(-2272431288995718463LL)))));
            }
        }
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 + 1] [i_3 - 2])) ? (((/* implicit */long long int) -121117523)) : (((((/* implicit */_Bool) 2272431288995718452LL)) ? (arr_12 [i_3] [6] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)12876))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 + 1]))) : (arr_1 [i_3])));
    }
    for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
    {
        arr_21 [i_4] = ((/* implicit */unsigned char) arr_20 [i_4]);
        arr_22 [(unsigned char)14] [(unsigned char)14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-21763))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)44)) ? (18LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) (-(var_5)))) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15183))))) : (var_3)))));
    var_17 = ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_5 = 1; i_5 < 13; i_5 += 3) 
    {
        arr_26 [i_5] = ((/* implicit */unsigned char) ((868873536U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_5])) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) (unsigned short)46970)))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) -1145312758)) ? (4294967287U) : (2847659324U))))));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1617)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)98))) : (arr_1 [(unsigned short)4])))) ? (1949276154U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [2U] [i_5] [i_5 + 1]))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_20 |= ((((/* implicit */_Bool) (short)0)) ? (arr_5 [i_6] [i_6]) : (arr_5 [i_6] [i_6]));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 3; i_7 < 12; i_7 += 4) 
        {
            arr_31 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_7 - 1] [i_7 - 1]))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_9 [(unsigned char)12] [i_7] [(unsigned char)12]))));
        }
        for (unsigned int i_8 = 3; i_8 < 12; i_8 += 4) 
        {
            arr_35 [i_6] [(signed char)0] [i_8] = ((/* implicit */short) arr_25 [i_8]);
            /* LoopSeq 2 */
            for (signed char i_9 = 2; i_9 < 12; i_9 += 3) 
            {
                arr_40 [i_6] [i_8] [i_9] [1LL] = ((/* implicit */unsigned long long int) (signed char)16);
                var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1961019841)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (0LL)));
            }
            for (signed char i_10 = 1; i_10 < 11; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 3; i_11 < 10; i_11 += 2) 
                {
                    for (unsigned short i_12 = 3; i_12 < 13; i_12 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) arr_30 [i_11]);
                            arr_50 [(signed char)2] [i_8] [i_10 + 3] [i_11] [i_12 - 2] [i_11] = ((/* implicit */int) ((unsigned int) 66584576));
                        }
                    } 
                } 
                arr_51 [8] [i_8 - 1] [i_10 + 3] = ((((/* implicit */_Bool) (unsigned short)11258)) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)14])) ? (((/* implicit */int) arr_47 [(short)5] [i_8] [(signed char)7] [(short)5] [(short)5])) : (0))) : (((/* implicit */int) arr_43 [i_8 + 1])));
            }
        }
        var_24 = ((/* implicit */short) arr_36 [i_6] [(unsigned char)0] [(unsigned char)0] [i_6]);
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
    {
        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_53 [i_13]))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)116)) ? (-796409327) : (((/* implicit */int) (unsigned short)64269))));
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 16; i_14 += 4) 
        {
            for (int i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 4) 
                {
                    {
                        var_27 += ((/* implicit */signed char) (~(1862781275)));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~(arr_56 [4ULL] [i_14] [4ULL] [i_16 - 1]))))));
                        arr_62 [i_13] [i_13] [i_13] [1U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_61 [i_16 + 1] [7] [i_16 + 3] [i_16 - 1] [i_16 + 1] [i_16])) ? (((/* implicit */long long int) 1447307971U)) : (2272431288995718443LL)));
                        var_29 = ((int) ((((/* implicit */_Bool) (unsigned short)32640)) ? (4028766445U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_13] [(signed char)14])))));
                    }
                } 
            } 
        } 
        var_30 -= ((/* implicit */unsigned char) arr_19 [i_13] [i_13]);
    }
}

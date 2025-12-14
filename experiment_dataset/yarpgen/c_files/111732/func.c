/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111732
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [8LL] [i_2])) >= (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 - 4] [i_1 + 1] [i_1 + 1])) <= (((/* implicit */int) arr_9 [i_2 - 3] [i_1 - 1] [i_1 - 1])))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5981851174749323041ULL)) ? (5981851174749323041ULL) : (5981851174749323041ULL)));
                    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_0]))));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])) == (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))), (((((/* implicit */_Bool) ((12464892898960228575ULL) - (5981851174749323022ULL)))) ? (5981851174749323041ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_2])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    var_16 *= ((/* implicit */unsigned char) max((5981851174749323038ULL), (((/* implicit */unsigned long long int) (unsigned char)0))));
                    arr_18 [(unsigned short)10] [10U] [i_5] [i_5] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) 15190077681237420856ULL))), (var_10))))));
                    var_17 |= ((/* implicit */short) var_7);
                    arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-115)))))) : (max((((/* implicit */unsigned long long int) (unsigned char)255)), (12464892898960228579ULL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) var_10);
                var_20 ^= ((/* implicit */short) min((max((var_9), (arr_17 [i_7 + 1] [i_7] [i_7 + 2] [i_7 + 1]))), (arr_17 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7])));
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)1)))))))), (arr_14 [i_7 + 2] [i_7 + 2] [i_7 + 2])));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                {
                    var_22 = (+(max((((/* implicit */unsigned long long int) (unsigned char)15)), (12464892898960228560ULL))));
                    arr_35 [16U] [16U] = ((/* implicit */short) var_2);
                    arr_36 [i_8] [i_9] [i_8] = ((/* implicit */short) ((unsigned char) var_11));
                    arr_37 [i_8] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) ((signed char) 5981851174749323055ULL))) ? (((((/* implicit */_Bool) 12464892898960228557ULL)) ? (12209696364657828859ULL) : (12464892898960228536ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 5981851174749323063ULL))) ? ((~(((/* implicit */int) arr_28 [1ULL])))) : (((/* implicit */int) (unsigned char)100))));
    }
    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
    {
        arr_41 [i_11] [(signed char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_11])) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (arr_33 [(short)22] [i_11]))))));
        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_11])) * (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) arr_40 [i_11]))))));
    }
    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            for (unsigned short i_14 = 2; i_14 < 23; i_14 += 3) 
            {
                {
                    var_25 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_42 [i_14 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_42 [i_12]))), (((/* implicit */long long int) var_3))));
                    arr_51 [i_12] [i_12] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_12] [i_13] [i_14 + 1] [i_14 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_14] [i_13] [i_14]))) : (var_0)))) ? (((/* implicit */int) ((((/* implicit */int) arr_49 [i_12] [i_13] [i_12])) != (((/* implicit */int) arr_48 [i_13] [i_13] [i_14 - 2] [i_14 + 1]))))) : ((~(((/* implicit */int) arr_48 [i_12] [i_13] [i_14] [i_14 + 1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_15 = 2; i_15 < 21; i_15 += 2) /* same iter space */
                    {
                        arr_54 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) <= (((/* implicit */int) arr_46 [i_14 + 1] [i_14] [i_14 - 1]))));
                        var_26 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)250))));
                        var_27 *= ((/* implicit */unsigned char) (~(var_10)));
                        arr_55 [i_14] [i_13] [i_14] [i_13] = arr_48 [i_15 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1];
                    }
                    for (signed char i_16 = 2; i_16 < 21; i_16 += 2) /* same iter space */
                    {
                        arr_58 [i_12] [i_14] [i_12] [0U] [(short)3] [i_13] = var_11;
                        arr_59 [i_14] [i_14] [i_14] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_5)), (6237047709051722757ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_14] [i_16 - 1] [i_16 - 1] [i_16 - 1])) ? (((/* implicit */int) arr_56 [(short)12] [i_16 - 1] [i_16] [(short)12])) : (((/* implicit */int) arr_56 [(unsigned short)2] [i_16 + 1] [i_16 + 1] [i_16])))))));
                        arr_60 [i_16 - 1] [i_14 + 1] [i_12] [i_12] = ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) (-(var_0)))), (var_1)))));
                        arr_61 [i_12] [i_12] [i_13] [i_14 - 2] [i_16 - 1] [i_14 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)125))))) ? (((((/* implicit */_Bool) var_4)) ? (12464892898960228574ULL) : (((((/* implicit */_Bool) (unsigned char)168)) ? (5981851174749323037ULL) : (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115)))));
                    }
                }
            } 
        } 
        arr_62 [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_48 [i_12] [i_12] [i_12] [i_12]))));
    }
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
    {
        arr_67 [i_17] = ((/* implicit */short) ((signed char) var_3));
        var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_44 [(unsigned char)16]))));
    }
}

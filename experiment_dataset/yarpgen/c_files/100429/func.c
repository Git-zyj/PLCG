/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100429
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
    var_20 = ((/* implicit */short) min((max((12352842096351113973ULL), (((/* implicit */unsigned long long int) (unsigned short)25730)))), (((/* implicit */unsigned long long int) (((~(-1152020918))) != (((/* implicit */int) max((var_17), (var_17)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((-(6123437119472581935ULL))), (((/* implicit */unsigned long long int) var_5)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) -1152020893)) && (((((/* implicit */_Bool) min((1152020892), (-1152020924)))) && ((!(((/* implicit */_Bool) arr_1 [i_0]))))))));
                        arr_9 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */short) min((((/* implicit */long long int) min(((unsigned char)229), (((/* implicit */unsigned char) (signed char)0))))), (((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((/* implicit */long long int) arr_3 [i_3] [i_3 - 2] [i_3 + 2])) : (-442062429371148606LL)))));
                        var_23 = ((/* implicit */int) (+(min((((((/* implicit */unsigned long long int) 1152020931)) / (var_4))), (((/* implicit */unsigned long long int) ((arr_4 [i_3 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2))))))));
                        var_24 = ((/* implicit */_Bool) min((max((var_16), (((/* implicit */int) arr_6 [i_0] [i_3 - 2] [(signed char)6] [i_3])))), (((((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */short) arr_8 [i_3] [i_1]))))) << (((((((/* implicit */int) var_11)) + (120))) - (8)))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 2; i_4 < 16; i_4 += 2) 
    {
        var_25 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) min(((signed char)84), (min((arr_10 [i_4] [i_4]), (arr_10 [i_4] [i_4 - 2])))))) : (-1152020948)));
        var_26 ^= ((/* implicit */unsigned char) ((int) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((-1152020952) + (1152020977))) - (25))))));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_10 [i_4 - 2] [i_4 - 1]))) << ((((-(((/* implicit */int) arr_10 [(short)7] [(short)7])))) + (92)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((_Bool) var_2)))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_29 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_20 [i_5] [i_5] [i_7] [(unsigned short)4] [i_8])) : (1152020897)));
                        var_31 = ((/* implicit */short) ((((/* implicit */int) var_17)) << (((((((/* implicit */_Bool) arr_15 [i_5] [i_8])) ? (((/* implicit */int) arr_22 [i_7] [i_6] [i_7] [i_8] [i_7] [i_5])) : (422673427))) - (18458)))));
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_17))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))) + (((((/* implicit */_Bool) arr_24 [i_5] [i_6] [i_7] [i_8] [i_9] [i_6])) ? (((/* implicit */int) arr_15 [i_5] [i_7])) : (((/* implicit */int) arr_22 [i_6] [i_8] [i_7] [i_7] [i_6] [i_5]))))));
                        }
                        for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_28 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_7] [i_8] [i_7])) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) var_12))));
                            var_34 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_22 [i_5] [i_6] [i_6] [i_6] [i_8] [i_10])) >> (((arr_12 [i_5]) + (94627638)))))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (!(arr_20 [i_5] [i_5] [i_7] [i_8] [i_10]))))));
                            var_36 &= ((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) >> (((((/* implicit */int) (short)23220)) - (23208)))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (((-(((/* implicit */int) (short)-12793)))) >> (((((((/* implicit */_Bool) arr_29 [i_5] [i_6] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)31337)) : (((/* implicit */int) arr_17 [i_5] [i_6] [i_7])))) - (31324))))))));
                        var_38 -= ((/* implicit */unsigned char) (!(arr_30 [i_11] [i_7] [i_6])));
                    }
                }
            } 
        } 
        var_39 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5])))))));
        var_40 += ((/* implicit */long long int) ((((/* implicit */_Bool) 1376037714)) ? (arr_18 [i_5] [i_5] [i_5]) : (arr_18 [i_5] [i_5] [i_5])));
    }
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
    {
        for (int i_13 = 2; i_13 < 10; i_13 += 3) 
        {
            {
                var_41 = ((/* implicit */unsigned char) (+(var_18)));
                var_42 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_13 + 1] [i_13 + 2])) << (((/* implicit */int) arr_30 [i_13 - 2] [i_13 + 3] [i_13])))) != (((((/* implicit */_Bool) arr_12 [i_13])) ? (arr_12 [i_12]) : (((/* implicit */int) arr_15 [i_12] [i_13]))))));
                arr_37 [i_13 + 2] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_13 + 1] [i_13 + 1] [i_13 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_18)) ? (var_18) : (((/* implicit */long long int) var_3))))))) ? (8968832355190650583ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_18 [i_12] [i_12] [i_12])))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)57391)))) : (((1152020889) << (((((/* implicit */int) (short)21017)) - (21017))))))))));
            }
        } 
    } 
}

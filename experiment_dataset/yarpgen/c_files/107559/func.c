/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107559
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
    var_17 -= var_16;
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) -367544667843296858LL);
                    var_18 = ((/* implicit */long long int) (-(min((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((4611668426241343488LL), (((/* implicit */long long int) var_10))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611668426241343470LL)) ? (((/* implicit */unsigned long long int) -4611668426241343482LL)) : (var_5)))) ? (((/* implicit */long long int) var_3)) : (-1LL)))));
    /* LoopSeq 4 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3])), (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_21 = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) var_4)) ? (-36028797018963968LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_5 - 1] [8ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_4] [i_4 - 2] [i_4 + 1] [i_4] [i_4 - 1]))));
                            var_22 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_18 [i_3] [i_3] [i_5] [i_6] [i_3] [i_7]) : (((/* implicit */int) (unsigned char)255)))));
                            arr_22 [(signed char)14] [i_4] [(signed char)14] [(unsigned char)8] [i_7] = ((/* implicit */signed char) -4611668426241343489LL);
                        }
                        for (signed char i_8 = 2; i_8 < 14; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) max((6717183888394742712ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))))))));
                            var_24 = ((/* implicit */unsigned int) (unsigned short)2757);
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 4) 
                        {
                            arr_27 [i_3] [i_4 + 2] [i_3] [5U] [i_3] = ((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [i_3] [(_Bool)1] [i_6] [10U]);
                            var_25 = ((/* implicit */signed char) (unsigned short)36788);
                        }
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9138981401304103208ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_28 [i_5] = ((/* implicit */int) 9223372036854775803LL);
                    }
                } 
            } 
        } 
        arr_29 [(_Bool)1] = ((/* implicit */signed char) (unsigned char)255);
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) var_6))));
        var_28 = ((/* implicit */unsigned int) 11729560185314808901ULL);
        arr_30 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) << (((arr_13 [i_3] [i_3]) - (221994231)))))) ? (((/* implicit */long long int) min((arr_13 [i_3] [1]), (arr_13 [2LL] [(signed char)16])))) : (min((((/* implicit */long long int) arr_16 [i_3] [(signed char)10] [i_3] [i_3] [i_3] [(signed char)10])), (-2720319037541494095LL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        var_29 -= ((/* implicit */signed char) ((unsigned char) arr_32 [i_10]));
        var_30 = ((/* implicit */signed char) var_5);
        var_31 = ((/* implicit */short) (unsigned short)896);
    }
    for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        arr_37 [5LL] [i_11] = ((/* implicit */unsigned int) var_15);
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)20226)))))));
        var_33 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_35 [i_11] [i_11])) ? (arr_8 [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_11] [9U] [i_11] [10LL])) ? (((/* implicit */int) var_13)) : (arr_0 [i_11] [i_11]))))))))));
        var_34 = ((/* implicit */unsigned short) var_13);
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 17502333058342184824ULL))) ? (arr_38 [i_12 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (var_3) : (2147483647))))));
        var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) ^ (9100572927617842727ULL)));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_13 = 0; i_13 < 24; i_13 += 2) 
    {
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49223)) ? (arr_38 [i_13]) : (arr_38 [i_13])));
        var_38 = ((/* implicit */signed char) 2147483647);
    }
    for (int i_14 = 0; i_14 < 20; i_14 += 2) 
    {
        var_39 = ((/* implicit */unsigned long long int) arr_41 [i_14]);
        var_40 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 706909937)))) ? ((+(((((/* implicit */_Bool) 7042729573916730225ULL)) ? (var_8) : (((/* implicit */unsigned long long int) arr_44 [i_14])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (3107363410U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))))));
        var_41 = ((/* implicit */signed char) arr_43 [(signed char)12] [i_14]);
    }
}

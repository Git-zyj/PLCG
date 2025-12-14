/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118279
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((unsigned short) max(((~(var_9))), (((/* implicit */unsigned int) var_0))))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), (var_7)))), ((~(var_9))))) ^ (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (-272435377)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_8))));
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-8717))))) > (arr_1 [5])));
        arr_2 [i_0] &= ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) var_5);
        var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (short)-512)) ? (((/* implicit */int) (unsigned short)47502)) : (((/* implicit */int) (short)512)))));
        var_18 = ((/* implicit */unsigned char) ((((int) var_6)) / ((+((-(((/* implicit */int) (unsigned short)16384))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (unsigned short)14436);
                    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_2] [i_4 - 1] [(short)9]))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_8 [i_4]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_4 - 1]))));
                                arr_18 [i_2] [i_3] [i_6] [i_5] [i_5] [5U] = arr_13 [i_2] [i_3] [i_4 - 1] [i_5 + 1];
                                var_23 ^= ((/* implicit */signed char) var_9);
                                var_24 -= ((/* implicit */unsigned short) arr_9 [i_4 - 1]);
                                var_25 = var_3;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((unsigned short) arr_12 [i_2] [i_2] [(unsigned short)7])))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_7])), (var_9)))) : (((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14440))) : (var_11)))) : (((((/* implicit */_Bool) arr_19 [i_7])) ? (arr_1 [i_7]) : (8014909547353047994LL)))))));
        arr_21 [i_7] = ((/* implicit */unsigned char) min(((-(var_1))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7])))))));
        var_28 = ((/* implicit */unsigned short) arr_17 [i_7] [i_7] [i_7] [i_7] [(unsigned short)19] [i_7] [i_7]);
    }
    for (short i_8 = 2; i_8 < 13; i_8 += 1) 
    {
        var_29 &= ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)512)), (-272435355)))) ? (795181718U) : (((/* implicit */unsigned int) -599014045)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)512)))))));
        var_30 = ((/* implicit */unsigned long long int) arr_1 [(short)11]);
    }
    /* LoopSeq 1 */
    for (int i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        var_31 = ((/* implicit */short) (~((~(arr_20 [i_9] [i_9])))));
        var_32 += ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_1 [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56829))) : (max((4054076300U), (((/* implicit */unsigned int) (short)512))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            arr_31 [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((int) arr_27 [i_9]));
            var_33 ^= ((/* implicit */int) var_8);
        }
    }
}

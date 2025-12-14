/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185151
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 ^= (_Bool)0;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */int) ((long long int) (unsigned char)252));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((/* implicit */int) var_6)) - (var_2))) - (arr_7 [i_3] [i_1] [i_1] [i_0]))))));
                        var_17 = ((/* implicit */_Bool) ((signed char) arr_6 [i_3 - 1] [i_2 - 1]));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_18 ^= ((/* implicit */unsigned long long int) arr_4 [i_4] [(signed char)16]);
                        arr_13 [i_0] [i_2] [i_2] [9U] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_5] [i_2] [i_2] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)0)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
                        var_19 = ((/* implicit */unsigned short) arr_4 [i_0 - 1] [i_1]);
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_1 [i_0] [3LL]))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_12)) : (1259838854182871755LL))));
                        arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_2] [i_1] [i_2])) : (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [6U] [i_1] [i_2] [i_6])) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_2])) : (var_1))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_23 [(_Bool)1] [(signed char)3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                {
                    var_23 = (+(1631376384U));
                    var_24 = ((/* implicit */long long int) arr_22 [i_9]);
                    var_25 = ((/* implicit */unsigned long long int) arr_10 [(unsigned short)11] [(signed char)3]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            for (long long int i_11 = 2; i_11 < 14; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 2) 
                {
                    {
                        arr_36 [i_7] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_10] [i_10] [i_10]))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < ((+(12401039308494517352ULL))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 16; i_13 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_15 = 1; i_15 < 12; i_15 += 3) 
            {
                arr_46 [i_15 + 1] [i_13] = ((/* implicit */long long int) arr_15 [i_14] [i_14] [i_15] [i_14]);
                var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_13] [i_14]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_10)))) : (1259838854182871755LL)));
                arr_47 [i_14] [i_13] [i_15] [i_14] = ((/* implicit */long long int) arr_14 [i_14] [i_13] [i_15] [i_13] [i_15]);
            }
            var_28 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)1914)) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (long long int i_16 = 0; i_16 < 16; i_16 += 3) 
            {
                for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    for (unsigned char i_18 = 3; i_18 < 15; i_18 += 2) 
                    {
                        {
                            arr_57 [(short)1] [(short)1] [(short)1] [i_16] [i_17] [i_17] [i_16] = ((/* implicit */unsigned long long int) arr_55 [i_16] [i_16] [i_14] [i_14] [i_16]);
                            var_29 = ((((/* implicit */_Bool) arr_48 [i_18 - 1] [i_18] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_40 [i_17]));
                            arr_58 [i_13] [i_13] [i_13] [i_13] [i_13] [i_16] [i_13] = ((/* implicit */unsigned short) 4032542208U);
                        }
                    } 
                } 
            } 
        }
        for (signed char i_19 = 0; i_19 < 16; i_19 += 2) 
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4032542208U)) ? (((/* implicit */int) arr_12 [i_13] [i_13] [i_19])) : (((/* implicit */int) arr_24 [i_19]))))) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7))))));
            var_31 *= ((/* implicit */signed char) ((long long int) var_8));
            arr_63 [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_19]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13969))) / (var_11)))));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_32 = ((/* implicit */short) var_5);
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_20] [i_13]))))) : (((/* implicit */int) (signed char)30))));
            arr_67 [i_13] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-9826)))) > (((((/* implicit */_Bool) arr_52 [i_13] [i_13] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) 3605511590U)) : (var_4)))));
        }
        /* LoopNest 3 */
        for (unsigned char i_21 = 0; i_21 < 16; i_21 += 4) 
        {
            for (signed char i_22 = 0; i_22 < 16; i_22 += 4) 
            {
                for (unsigned char i_23 = 0; i_23 < 16; i_23 += 3) 
                {
                    {
                        var_34 = ((/* implicit */int) (+(4021119000662729925LL)));
                        var_35 = -4021119000662729925LL;
                        var_36 ^= ((/* implicit */unsigned short) arr_5 [i_13] [i_13] [i_22]);
                    }
                } 
            } 
        } 
    }
    var_37 = ((/* implicit */signed char) max((((int) min((((/* implicit */long long int) (short)192)), (1346106498561360971LL)))), (max((((/* implicit */int) var_9)), (min((var_2), (((/* implicit */int) (signed char)-118))))))));
}

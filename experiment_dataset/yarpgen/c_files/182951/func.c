/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182951
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
    var_11 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 += ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)));
        var_13 = (+(((/* implicit */int) var_10)));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                        var_15 = (!(((/* implicit */_Bool) var_4)));
                        arr_11 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (2569458371U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3968))) : (((((/* implicit */_Bool) (unsigned short)3999)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (13170147200572761406ULL)))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5)));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [12LL] [i_1 - 2])) ? (arr_8 [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        }
        for (int i_4 = 2; i_4 < 19; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                {
                    arr_20 [i_6] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) (-(var_5)));
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7769795063559201898ULL)) ? (((/* implicit */int) (short)-19842)) : (((/* implicit */int) (unsigned short)3968))));
                        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))));
                        var_21 = ((/* implicit */unsigned long long int) (~(2569458366U)));
                    }
                }
                for (short i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_5 [i_0] [i_4 + 1]) ? (((/* implicit */int) arr_5 [i_4] [i_4 - 2])) : (((/* implicit */int) var_10))));
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)242)))))));
                    var_23 = ((/* implicit */unsigned long long int) (~(arr_7 [i_4] [(short)4] [i_4])));
                    var_24 -= (+(((/* implicit */int) var_6)));
                }
                /* LoopNest 2 */
                for (unsigned int i_9 = 3; i_9 < 18; i_9 += 3) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_4 - 2] [i_10 - 1]))));
                            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61568)) ? (var_5) : (arr_22 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])));
                            arr_35 [i_4] [i_4] = ((/* implicit */int) (!((_Bool)1)));
                        }
                    } 
                } 
                arr_36 [i_5] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (1725508917U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_4] [i_4 + 1] [i_4 - 2])))));
                var_27 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) 8965894431943889636LL))));
                arr_37 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1725508940U))));
            }
            arr_38 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_4] [i_0] [i_4 - 2])) ? (((/* implicit */int) arr_24 [i_0] [i_4] [i_0] [i_4 + 2])) : (((/* implicit */int) (unsigned char)10))));
        }
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_41 [i_11] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_11] [i_11] [i_11])) : (((/* implicit */int) var_10)));
        /* LoopNest 3 */
        for (short i_12 = 2; i_12 < 20; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 1) 
            {
                for (unsigned char i_14 = 2; i_14 < 19; i_14 += 1) 
                {
                    {
                        arr_53 [i_13] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1523653918)) ? (((/* implicit */int) (_Bool)1)) : (-1346934103)));
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [i_13 + 2] [i_13] [i_11]))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1725508928U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)31221))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (-1523653915) : (((/* implicit */int) (short)19844))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1523653915)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_13 - 2] [i_15 + 1] [i_15]))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)31221)) ? (((/* implicit */int) arr_24 [i_14 - 1] [i_16] [i_13] [i_16])) : (((/* implicit */int) arr_24 [i_14 + 1] [i_14 + 1] [i_13] [i_12]))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61540)) ? (1725508944U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100)))));
                            arr_60 [i_11] [i_11] [i_11] [i_11] [i_11] [i_14] [i_11] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -8577221793001209889LL)) ? (((/* implicit */int) arr_24 [i_14] [i_14] [i_12] [i_12])) : (((/* implicit */int) var_9))))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_51 [i_11] [i_12] [i_11] [i_11] [i_11]))));
                            arr_64 [i_11] [i_12] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_12 + 1])) ? (arr_2 [i_12 - 1]) : (((/* implicit */unsigned long long int) arr_18 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 2]))));
                        }
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4183748670U))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        arr_69 [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))));
        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2569458371U)) ? (((/* implicit */long long int) -1818090330)) : (2442200473244709763LL)));
    }
}

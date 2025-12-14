/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170745
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) ((signed char) arr_8 [i_2] [i_2 + 1] [i_2]));
                    var_16 = ((/* implicit */unsigned char) ((var_3) <= (arr_4 [i_2 - 2] [i_2 - 2])));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned int) var_6);
        var_17 = ((/* implicit */long long int) ((unsigned short) var_1));
    }
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_18 &= ((/* implicit */signed char) var_0);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 3; i_5 < 8; i_5 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5 - 2] [(unsigned short)8] [(unsigned short)8])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_10)))) ? (min((((/* implicit */long long int) var_13)), (var_8))) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_5 + 3] [(_Bool)1] [i_5])) | (((/* implicit */int) arr_7 [i_5 - 2] [(signed char)14] [i_5]))))));
                    var_20 |= ((/* implicit */short) ((unsigned int) -1022332041810723625LL));
                    arr_18 [i_3] [i_4] [i_3] [i_3] = ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((var_7) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (1022332041810723624LL))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((arr_15 [i_5 - 2] [i_5 - 1] [i_5 + 3]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_5 + 3] [i_3] [i_5 - 2]))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 10; i_6 += 2) 
        {
            var_21 = ((/* implicit */int) min((var_21), (min((((((/* implicit */int) arr_16 [i_6 + 1])) - (((/* implicit */int) var_2)))), (((/* implicit */int) max((var_1), (arr_16 [i_6 - 1]))))))));
            var_22 = ((/* implicit */int) var_3);
        }
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))));
            arr_23 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3])) - (((/* implicit */int) var_4))))) ? (min((((/* implicit */long long int) var_4)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_2))))));
            arr_24 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_13)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))))))));
            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (-1022332041810723641LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_7])))));
        }
        arr_25 [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) var_6)));
    }
    for (long long int i_8 = 1; i_8 < 13; i_8 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) << (((min((arr_33 [i_9] [i_8 + 1] [i_8]), (arr_33 [i_11] [i_8 - 1] [i_8 - 1]))) + (8458045939536819427LL)))));
                        var_26 = ((/* implicit */unsigned long long int) (+(var_10)));
                        var_27 = ((/* implicit */_Bool) ((((arr_5 [i_8 + 2] [i_8] [i_8]) ? (((/* implicit */int) arr_5 [i_8 + 3] [i_8] [i_8 + 3])) : (((/* implicit */int) arr_5 [i_8 + 3] [i_8] [4])))) & (((/* implicit */int) ((unsigned short) var_6)))));
                        arr_36 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) var_3);
                        arr_37 [i_8] = ((/* implicit */unsigned char) ((-1022332041810723635LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))));
                    }
                } 
            } 
        } 
        var_28 = var_9;
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (var_12)));
        arr_38 [i_8] = ((/* implicit */signed char) ((var_4) ? (((((var_4) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_29 [i_8])))) + (((var_12) ? (((/* implicit */int) arr_32 [i_8] [i_8] [i_8])) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_11))));
    }
    /* LoopNest 3 */
    for (unsigned short i_12 = 1; i_12 < 23; i_12 += 2) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 23; i_14 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) 2880378765U))));
                        var_31 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9041))) : (495967794906619932LL)))));
                        var_32 = ((/* implicit */short) arr_42 [i_14 + 1] [i_13]);
                        arr_49 [i_12] [i_14] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_45 [i_12 - 1] [i_12 - 1] [i_14 - 1] [i_14 - 2]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (unsigned char)46)))))) : (((unsigned int) var_13))));
                        arr_50 [i_13] [i_14] [3ULL] [i_15] = ((/* implicit */short) ((min((((/* implicit */long long int) var_11)), (var_3))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_44 [i_12 + 1])))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_33 = ((((/* implicit */long long int) max((((/* implicit */int) var_9)), (((var_12) ? (((/* implicit */int) arr_40 [i_16])) : (((/* implicit */int) var_11))))))) > (((((/* implicit */_Bool) arr_46 [i_12 - 1] [i_12 - 1] [i_14 - 3] [i_14 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_3))));
                        arr_54 [i_14] [i_14] [i_14] [i_12] = ((((/* implicit */_Bool) arr_41 [i_14 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_40 [i_12])) : (((/* implicit */int) var_0))))) : (((var_12) ? (arr_48 [7U] [i_13] [i_14] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) 495967794906619926LL))));
                        var_35 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_5)))) * (max(((-(((/* implicit */int) (short)18)))), (((/* implicit */int) ((short) var_5)))))));
                        arr_55 [i_12] [i_14] [i_14] [i_16] = ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((unsigned short) arr_46 [(unsigned char)20] [i_13] [i_13] [i_13])))));
                    }
                    arr_56 [i_14] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_11), (((/* implicit */short) var_12))))) | (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
}

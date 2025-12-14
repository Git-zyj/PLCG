/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1605
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2038986966)) ? (2038986972) : (((/* implicit */int) arr_0 [i_0])))) + (min((((/* implicit */int) (unsigned short)34976)), (-2038986991)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((int) ((((/* implicit */_Bool) arr_8 [(short)9] [i_2 - 3] [i_3 - 1] [i_3])) ? (arr_7 [i_1] [i_2 - 2] [i_3 + 2] [(unsigned short)6]) : (arr_7 [(_Bool)1] [i_2 - 2] [i_3 - 1] [(signed char)2]))))));
                        arr_10 [i_0] [i_0] [i_2 + 1] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (2148719308U)))))));
                        arr_11 [i_0] [i_3] = ((/* implicit */signed char) var_1);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_12 [i_4] [i_4])))) : (-6958101861042906640LL)));
        var_22 = ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (short)4096)))) : (((/* implicit */int) (_Bool)1)));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-31038))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) 2146248006U))));
        arr_18 [(short)12] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) -2134051508)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5]))) : (arr_12 [19LL] [19LL]))))))));
        arr_19 [(unsigned short)10] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (signed char)16)) && (((/* implicit */_Bool) (signed char)-104))))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_12 [i_5] [(_Bool)0]))));
    }
    var_26 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */int) var_17))))))) ? (min((((/* implicit */unsigned long long int) var_0)), (3546903414175419344ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) / (var_13)))));
    var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
    var_28 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_6] [i_6] [2ULL] [(unsigned short)11] [i_8 - 1])))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8579)))))));
                    }
                } 
            } 
        } 
        arr_31 [(signed char)7] = ((/* implicit */short) var_2);
        arr_32 [i_6] [11U] = ((((/* implicit */_Bool) (((_Bool)1) ? (var_13) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [16]))) : (arr_17 [i_6]));
        arr_33 [i_6] = ((/* implicit */short) -6002122013168254609LL);
        arr_34 [(_Bool)1] = ((/* implicit */unsigned int) var_3);
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) max((var_31), ((unsigned short)57363)));
        arr_37 [5ULL] [11LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5)) % (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) (unsigned short)47029)))) : (((/* implicit */int) arr_24 [i_10] [i_10]))));
    }
    for (short i_11 = 3; i_11 < 10; i_11 += 2) 
    {
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_35 [i_11 - 2])) ? (min((12070708951883364565ULL), (((/* implicit */unsigned long long int) arr_38 [2ULL] [i_11])))) : (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) var_10)))))));
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            for (unsigned short i_13 = 1; i_13 < 10; i_13 += 1) 
            {
                {
                    arr_46 [i_13] [(signed char)2] [6ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 6283746))));
                    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) arr_29 [12U] [i_11 - 2] [12] [i_13 - 1] [i_13] [i_13 - 1]))))) ? (max((arr_9 [i_13] [i_13] [6ULL] [i_13 + 1]), (arr_9 [i_11 - 1] [i_11 - 1] [i_11] [i_13 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [(signed char)0] [14ULL] [i_13] [i_13 + 1] [i_13] [i_13])))))))))));
                    var_34 = (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-30868)) ? (((/* implicit */int) (signed char)-56)) : (2038986966)))), (((((/* implicit */_Bool) 5)) ? (arr_20 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_11] [i_11] [6LL]))))))));
                    arr_47 [(signed char)8] [i_13] = ((/* implicit */int) (unsigned char)31);
                }
            } 
        } 
    }
}

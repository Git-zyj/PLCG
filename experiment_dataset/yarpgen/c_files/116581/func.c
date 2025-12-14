/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116581
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                arr_7 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(signed char)14])) || (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))) : (((int) (signed char)-122))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) arr_8 [i_2]);
                            arr_12 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 9801121931011767072ULL))));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_10 [i_2] [i_1]))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (~(13215974156266129735ULL)));
            }
            arr_14 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_8) : (((/* implicit */int) (short)29746))))) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1] [i_1]) ? (var_8) : (((/* implicit */int) var_3))))));
        }
        var_18 += ((/* implicit */int) ((((/* implicit */int) arr_11 [11ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_10 [i_0] [i_0]))));
        var_19 |= ((/* implicit */short) arr_6 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((9801121931011767072ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((734279058) < (((/* implicit */int) (unsigned short)42716)))))))))));
                    arr_21 [i_6] [i_5] [i_5] [9ULL] = ((/* implicit */long long int) ((signed char) arr_11 [i_0] [i_5] [i_5] [i_5] [i_6] [i_6] [i_6]));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 14179243736677891101ULL)) ? (2916133806920697689ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47)))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) (~(((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned short)42716))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                var_23 = arr_22 [(unsigned short)17] [(unsigned short)17];
                var_24 = ((/* implicit */int) ((_Bool) arr_22 [i_7] [i_9]));
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_26 [i_7] [i_10])) : (((/* implicit */int) arr_26 [i_8] [i_8]))));
                        arr_37 [(_Bool)0] |= ((/* implicit */long long int) (~(5719684887296641679ULL)));
                        arr_38 [i_7] [i_7] [i_9] [i_9] [i_10] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 734279058)) ? (arr_32 [i_7] [i_8] [i_9] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_8]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_26 [i_7] [i_8])) : (((/* implicit */int) (unsigned char)42)))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        arr_42 [i_9] = (~(((((/* implicit */_Bool) (unsigned short)29919)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))) : (9801121931011767072ULL))));
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7] [i_7])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_34 [i_7] [i_8] [i_9] [i_10] [i_12]))))) ? (((/* implicit */long long int) arr_30 [i_7] [i_7] [i_7] [i_7])) : (((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_12] [i_10] [i_8] [i_8] [i_7]))) - (arr_29 [i_12] [i_8] [i_8] [i_8]))));
                        var_27 -= ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)80)) | (((/* implicit */int) var_3))))));
                        var_28 += ((/* implicit */unsigned long long int) 9223372036854775807LL);
                    }
                    var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-47))));
                    arr_43 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_39 [i_10] [i_9] [i_8] [i_8] [(signed char)16] [i_9] [(signed char)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117)))))) ? (arr_32 [i_7] [i_8] [i_9] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_8])))));
                }
                var_30 = ((/* implicit */long long int) (~(arr_28 [i_7] [i_9])));
            }
            var_31 = ((/* implicit */unsigned long long int) max((var_31), ((~(arr_40 [i_7] [i_8] [i_7] [i_8] [i_8] [i_8])))));
            arr_44 [i_7] |= ((/* implicit */unsigned int) ((int) (unsigned short)65535));
            var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (unsigned short)35616)))));
            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (~(-1092828636))))));
        }
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 1; i_15 < 21; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) (unsigned short)20005);
                                var_35 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)45530))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) var_10))));
                    var_37 += ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_14] [i_13] [i_7] [i_7])) ? ((~(((/* implicit */int) arr_23 [i_7])))) : (((((/* implicit */_Bool) (short)-8173)) ? (((/* implicit */int) arr_24 [i_7])) : (((/* implicit */int) (unsigned short)20005))))));
                }
            } 
        } 
        arr_54 [i_7] |= ((/* implicit */signed char) (unsigned short)28196);
        arr_55 [i_7] = ((/* implicit */short) var_0);
    }
    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((31ULL), (18210391517237390003ULL)))) ? (min((var_2), (max((var_2), (var_9))))) : (((((/* implicit */_Bool) var_13)) ? ((~(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)14), (((/* implicit */unsigned short) (signed char)4))))))))));
}

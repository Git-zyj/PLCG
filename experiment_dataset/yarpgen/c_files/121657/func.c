/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121657
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
    var_15 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (+(2977622029U))))))));
    var_16 = (~(1317345288U));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) / (1317345267U)))), (arr_4 [i_0 - 3] [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) -45783512)) ? (1317345266U) : (((/* implicit */unsigned int) 1048080253)))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)33)) ? (262144) : (((/* implicit */int) (_Bool)0))))))));
                    var_17 -= ((/* implicit */int) arr_2 [i_1] [i_1]);
                    arr_9 [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2] [i_1 + 1] [i_0])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)0)), ((+(arr_7 [i_0] [i_1 + 1] [i_2]))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) max((var_18), (((int) min((((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) var_14))))), (max((arr_7 [i_0] [i_0] [i_0]), (arr_1 [i_0]))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_5)) | (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))))) != (max((((/* implicit */unsigned long long int) var_14)), ((+(arr_7 [i_0] [i_0] [i_0])))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-11)))) ? ((+(arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_0] [i_0] [i_0])))))) ? (max(((~(3660227950U))), (((/* implicit */unsigned int) (+(var_2)))))) : (((unsigned int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_13 [i_3 - 2])) : (arr_3 [i_3 - 2] [i_3] [i_3 - 1])));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned char)228)) >= (((/* implicit */int) var_12))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 + 1]))) <= (1034273156U)));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    arr_24 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */long long int) (+(-413968116)));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_1))));
                }
                arr_25 [i_3] = ((/* implicit */long long int) arr_2 [i_5] [3U]);
                var_24 = ((/* implicit */signed char) (((+(var_1))) >> (((arr_7 [i_5] [i_3 - 2] [i_3 - 2]) - (1335295440499732111ULL)))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                arr_28 [i_3 + 2] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)65535));
                var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    for (long long int i_9 = 1; i_9 < 13; i_9 += 2) 
                    {
                        {
                            arr_34 [i_3 - 2] [i_3 - 2] [i_3] [i_3 + 1] [i_3 - 2] = ((/* implicit */_Bool) -11);
                            arr_35 [i_7] [i_8] [i_7] [i_4 + 1] [i_3] = ((/* implicit */_Bool) (~((~(var_2)))));
                            arr_36 [i_3] [(unsigned short)3] [i_9] [i_8] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_21 [(_Bool)1] [i_7] [(_Bool)1]))))) ? (var_2) : (((/* implicit */int) var_14))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) arr_4 [(signed char)11] [i_3 + 2] [i_3 + 2]);
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_10 + 1] [i_3 - 2] [i_3]))));
                        var_29 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_29 [i_3] [i_3] [i_3])))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_4 [i_3] [i_3 - 2] [i_3 + 1]))));
                        arr_46 [i_3] [(signed char)0] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_12] [i_11] [i_10 - 1]))))) : (arr_33 [i_3] [i_3] [i_3] [i_3] [i_3])));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        arr_49 [i_3 - 2] [i_10] [i_11] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4045712587U))));
                        var_31 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)33))))));
                        arr_50 [i_3 - 2] [i_3 - 2] = ((/* implicit */int) arr_40 [i_3] [i_3] [i_3] [i_3]);
                        arr_51 [i_3] [i_3] [i_11] [i_11] [i_3] = (+(((/* implicit */int) ((_Bool) var_9))));
                    }
                    var_32 = ((/* implicit */int) 11840199500790186254ULL);
                }
            } 
        } 
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_44 [i_3] [(_Bool)1] [(_Bool)1] [i_3 + 1])) ? (arr_44 [i_3 - 1] [(unsigned short)10] [i_3] [i_3]) : (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_22 [i_3] [6] [i_3] [i_3] [6] [i_3])) : (((/* implicit */int) (unsigned char)41)))))));
        var_34 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3 + 2] [i_3])) ? (((/* implicit */int) arr_15 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_15 [i_3 - 2] [(unsigned short)8]))));
    }
    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) 
    {
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-121)) : (-1458679793)))) ? (max((((((/* implicit */_Bool) var_2)) ? (arr_53 [i_14]) : (((/* implicit */unsigned long long int) arr_52 [i_14])))), (((/* implicit */unsigned long long int) 770634446U)))) : (((/* implicit */unsigned long long int) arr_52 [i_14]))));
        arr_54 [i_14] = ((/* implicit */unsigned int) (+((+(min((arr_53 [i_14]), (((/* implicit */unsigned long long int) var_4))))))));
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 21; i_15 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
        {
            var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)223))));
            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_56 [i_16] [i_15])) | (((/* implicit */int) var_6))))) : (16525195319628270959ULL))))));
            arr_60 [i_15] [i_15] [i_15 - 2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_15 - 2]))) * ((((_Bool)0) ? (1891498601U) : (((/* implicit */unsigned int) 0))))));
            var_38 -= ((/* implicit */unsigned short) arr_57 [i_16]);
        }
        var_39 -= ((/* implicit */long long int) (unsigned short)2456);
    }
    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_11), (((/* implicit */long long int) var_0)))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))) ? ((+(((unsigned long long int) (signed char)-97)))) : (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) var_4)), (-8239629531539413064LL))))))));
    var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (unsigned char)146)) : (-1834725458)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146889
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) && (arr_1 [i_0])));
        var_19 &= ((((/* implicit */int) arr_1 [i_0])) * ((+(((/* implicit */int) var_0)))));
        arr_2 [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(var_10)))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) arr_7 [i_1] [i_1]))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_16)) + (2147483647))) << (((3408047199845432228LL) - (3408047199845432228LL))))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_16 [i_1] [i_2 - 1] [i_2 - 1] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) -3408047199845432201LL)) ? (((/* implicit */int) (signed char)-69)) : (79120310))) : (((/* implicit */int) var_11))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((arr_15 [(unsigned char)10] [i_2] [i_2] [i_2] [i_5]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 1])))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        arr_19 [6] [i_2] [6] [i_4] [2] &= ((/* implicit */short) ((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)8))));
                        arr_20 [i_6] [i_4] [i_6] [i_6] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_17)) / (((((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3 + 1])) | (((/* implicit */int) (unsigned short)32256))))));
                    }
                    for (unsigned int i_7 = 4; i_7 < 14; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (short)-32752))));
                        arr_23 [i_1] [i_2 - 1] [(unsigned short)12] [(unsigned short)12] [i_7] = ((/* implicit */unsigned short) arr_10 [i_2 - 1]);
                    }
                    arr_24 [i_2] [3ULL] = ((/* implicit */int) ((((/* implicit */_Bool) 3408047199845432244LL)) ? (-3408047199845432229LL) : (-3408047199845432229LL)));
                    var_24 = ((/* implicit */int) min((var_24), (((((-549764149) & (549764134))) << (((/* implicit */int) ((((/* implicit */_Bool) 8031291219919000466ULL)) && (((/* implicit */_Bool) var_12)))))))));
                    arr_25 [i_2] [i_2 + 2] [i_2] [i_2] [i_3] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((/* implicit */int) var_4))))) : (var_5)));
                    arr_26 [i_3] [i_3 + 1] [i_3] [(signed char)1] [(signed char)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 489940754416478622LL)) ? (var_10) : (((/* implicit */int) arr_1 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) + (((/* implicit */int) (signed char)24)))))));
                }
            }
            var_25 = arr_15 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 2];
        }
        /* vectorizable */
        for (unsigned short i_8 = 2; i_8 < 11; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    {
                        arr_35 [i_8 + 4] [i_9] [i_8 + 4] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_8 + 3] [i_8 + 1]))));
                        arr_36 [i_8 + 1] = ((/* implicit */int) 9223372036854775807LL);
                        arr_37 [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_17);
                        /* LoopSeq 1 */
                        for (long long int i_11 = 3; i_11 < 14; i_11 += 1) 
                        {
                            var_26 += ((/* implicit */short) ((arr_32 [i_11] [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_11 - 2]) >> (((arr_22 [i_11] [i_11 - 1] [i_11] [(unsigned short)4] [i_11 - 1]) + (638692280569457776LL)))));
                            var_27 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_4 [i_8 + 3]))));
                            arr_41 [i_8] [i_8 + 2] &= ((((/* implicit */_Bool) ((int) var_16))) ? (((/* implicit */int) arr_4 [i_8 + 3])) : (((/* implicit */int) var_1)));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (~(arr_27 [i_8 + 2]))))));
                            var_29 += ((/* implicit */unsigned short) ((arr_8 [i_11 + 1] [i_11 + 1] [i_8 + 4]) >> (((((((/* implicit */_Bool) arr_38 [i_11] [i_11 + 1] [i_1] [5LL] [i_1] [i_1])) ? (2307447174U) : (((/* implicit */unsigned int) 588951496)))) - (2307447144U)))));
                        }
                    }
                } 
            } 
            arr_42 [i_1] [(short)5] [(short)5] = 18012199486226432LL;
            arr_43 [i_1] = ((/* implicit */signed char) (+((~(((/* implicit */int) (signed char)-33))))));
            arr_44 [i_1] [i_8 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2307447150U) / (448108773U)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27182))) : (18012199486226455LL)));
        }
        var_30 = ((/* implicit */signed char) (unsigned char)182);
        arr_45 [i_1] = ((/* implicit */_Bool) ((min((3408047199845432233LL), (((/* implicit */long long int) arr_12 [4LL] [i_1] [i_1])))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 588951496)) ? (7LL) : (3408047199845432235LL)))) ? (max((((/* implicit */unsigned int) arr_4 [i_1])), (2307447158U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) arr_4 [i_1]))))))))));
        arr_46 [i_1] = ((/* implicit */long long int) var_5);
    }
    var_31 = ((/* implicit */short) var_2);
}

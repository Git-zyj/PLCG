/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142364
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) var_7))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_7);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) 18446744073709551597ULL);
        arr_10 [i_2] [(unsigned char)13] = ((/* implicit */int) min((((unsigned int) var_6)), (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_7 [i_2] [i_2]))))))))));
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)13970)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))) ? (-1LL) : (((/* implicit */long long int) (((+(((/* implicit */int) arr_7 [(signed char)17] [i_2])))) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)-13990)))))))))))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (signed char i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (arr_13 [i_4] [i_5] [i_6 + 1]) : (((/* implicit */long long int) 60))))))) : (((unsigned long long int) arr_15 [i_6 + 1] [i_6 - 2]))));
                            arr_22 [i_6 + 2] [i_4] [i_4] [8ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_19 [i_6 - 1] [i_5] [i_6 + 2] [i_5] [i_5])))));
                            arr_23 [i_6] [i_4] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_21 [i_5] [i_2] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))) : (18446744073709551602ULL))), (min((arr_14 [i_4]), (((/* implicit */unsigned long long int) arr_16 [i_4]))))));
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((short) arr_19 [i_2] [i_3] [i_4] [i_5] [i_6])))));
                        }
                    } 
                } 
            } 
            arr_24 [i_2] [i_3] [i_3] = ((/* implicit */signed char) (unsigned char)12);
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) (-(max((((/* implicit */long long int) 170428123U)), (arr_13 [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (short)13970))) << (((18446744073709551615ULL) - (18446744073709551592ULL)))));
                        var_16 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)192)))));
                        arr_30 [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)1920);
                    }
                } 
            } 
        }
        for (short i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) arr_27 [11U] [i_9]);
            arr_35 [13] [i_9] = ((/* implicit */unsigned int) -1052528869);
        }
    }
    /* LoopNest 3 */
    for (short i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        for (unsigned int i_11 = 3; i_11 < 11; i_11 += 3) 
        {
            for (signed char i_12 = 1; i_12 < 12; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        for (short i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            {
                                arr_48 [i_10] [i_13] [i_10] [i_10] [i_10] [i_10] [(short)12] = ((/* implicit */short) ((((/* implicit */_Bool) -60)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))) : (372383169779149157LL)));
                                var_18 ^= ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)63)), (-89)));
                                arr_49 [i_10] [(_Bool)1] [0ULL] [i_11 - 3] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_37 [i_10])), (arr_17 [i_10] [(unsigned short)15] [(unsigned short)15])))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) var_4))))) ? (((((/* implicit */_Bool) ((unsigned int) (unsigned short)505))) ? (((((/* implicit */_Bool) -1880145548)) ? (var_3) : (((/* implicit */unsigned long long int) 1880145547)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_39 [i_10]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned char) -1966830688))))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */signed char) (unsigned char)85);
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 1; i_16 < 12; i_16 += 3) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (signed char)-89)) - (((/* implicit */int) arr_39 [10U])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) var_9))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */_Bool) 4080985463U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_12 - 1] [i_16 - 1]))) : (arr_0 [i_12 - 1])))));
                                arr_57 [i_10] [i_10] [i_10] [i_16] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_52 [i_11] [i_11 + 1] [i_11] [i_12 - 1] [i_11])) ? (((/* implicit */long long int) 363166730)) : (arr_52 [i_10] [3U] [3U] [i_12 + 1] [3U])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((((2424866279531891920ULL) > (arr_0 [i_10]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_11 + 2]))))) : (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
}

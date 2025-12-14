/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144782
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
    var_11 = ((/* implicit */unsigned char) var_3);
    var_12 = ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) (~(-1989943619))))))), (min((((/* implicit */short) var_9)), (var_2)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) | ((-(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1])) > (((/* implicit */int) var_3)))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)1493)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_5 [i_0] [i_0] [i_2])))))) : (((unsigned long long int) var_5))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_3] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3])) ? (arr_8 [i_0] [i_2] [i_1] [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_10))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_3] [i_1])) : (((/* implicit */int) (short)-32767)))))));
                            var_16 = ((/* implicit */int) arr_7 [i_3] [i_1] [i_2] [i_1]);
                        }
                        /* LoopSeq 1 */
                        for (short i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (((((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5])) & (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2])))) : (((((/* implicit */int) arr_2 [i_0] [(short)13])) | (((/* implicit */int) (short)32761))))))), (var_10)));
                            var_18 = ((/* implicit */long long int) ((2085751794U) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_15 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 3] [i_5 + 1] [i_5 + 3]), (arr_15 [i_5 + 2] [i_5] [i_5 + 1] [i_5] [i_5 + 3] [i_5 + 1])))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                    {
                        var_19 = 2085751794U;
                        arr_22 [i_2] [i_1] [i_2] [i_6] &= ((/* implicit */short) ((((((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_6] [i_0] [i_1])) > (((/* implicit */int) arr_21 [i_2] [i_1] [i_2] [i_2] [i_2])))) && (((/* implicit */_Bool) arr_4 [i_6] [i_2] [i_0]))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6))) | (((/* implicit */long long int) arr_23 [i_7]))))) ? (max((((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7] [(_Bool)1] [16ULL] [i_7] [i_7] [i_7]))) : (arr_11 [10ULL] [10ULL]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) (short)0))))))) : (((unsigned int) (+(var_10)))));
        arr_26 [i_7] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32746)) ? (arr_20 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_0 [15])))) ? (arr_11 [i_7] [14ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))));
    }
    for (short i_8 = 2; i_8 < 16; i_8 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_10 [i_8 + 2] [i_8] [(unsigned short)24] [i_8 + 2] [i_8 + 2] [i_8 - 2])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_8] [18ULL] [i_8 - 1] [i_8 + 3])))))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 3; i_9 < 17; i_9 += 2) 
        {
            for (short i_10 = 1; i_10 < 19; i_10 += 2) 
            {
                {
                    arr_34 [i_8] [i_8] [i_9 + 2] [i_8] = ((/* implicit */int) arr_7 [i_8] [i_9] [i_8] [i_8]);
                    arr_35 [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (short)29128)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8] [i_8])) && (((/* implicit */_Bool) (signed char)55))))), (min((((/* implicit */unsigned int) var_4)), (var_5)))))));
                    var_22 ^= ((/* implicit */unsigned int) min((((short) arr_20 [i_8 + 1] [i_8] [i_8] [i_8] [i_8 + 3] [i_8])), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_8] [i_8] [i_8])) ? (-4194304) : (arr_0 [i_8 + 4])))) > (((unsigned int) arr_14 [i_10] [i_9] [i_9] [i_8] [i_8 - 1])))))));
                }
            } 
        } 
        arr_36 [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_27 [i_8])), ((~(((/* implicit */int) (short)-1494)))))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)33510)) ? (((/* implicit */int) ((((((/* implicit */_Bool) -389647085)) && (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) (short)-32762))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 2] [i_8])), (var_6)))) && (((/* implicit */_Bool) arr_24 [i_8 + 4] [i_8 + 1]))))))))));
    }
}

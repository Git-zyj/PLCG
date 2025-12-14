/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127281
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
    var_11 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_2 + 4]))) : (((((/* implicit */unsigned long long int) arr_11 [i_1])) * (arr_0 [i_1])))))) ? (max((((/* implicit */long long int) ((arr_2 [i_0]) % (arr_2 [i_0])))), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))));
                        var_13 = ((/* implicit */int) (-(((((/* implicit */_Bool) max((arr_11 [i_0]), (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_0] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1]))) : (arr_9 [(short)17] [i_1] [i_2] [i_0]))) : (arr_9 [i_0] [i_1 + 2] [i_1 - 2] [i_0])))));
                        arr_12 [i_0] [i_0] [22LL] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) >= (((((/* implicit */_Bool) max((arr_7 [i_0] [i_2 + 1] [i_3]), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (3066878332U) : (arr_2 [(_Bool)1])))) : (((arr_8 [i_3]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((((/* implicit */int) arr_7 [i_2] [i_1] [i_1])), ((+(max((var_6), (((/* implicit */int) (signed char)56)))))))))));
                        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0] [(_Bool)1] [(_Bool)1])), (arr_11 [i_0])))) ? ((+(-1942769912))) : (((/* implicit */int) arr_10 [i_2 - 1] [i_1] [i_1 - 2] [i_2 - 1] [i_2 - 1]))))) ? ((~((~(arr_14 [i_0] [i_0]))))) : ((+(((/* implicit */int) arr_5 [i_2 - 1] [i_1 + 2])))));
                        arr_16 [(signed char)14] [i_1] [i_1] [i_4 + 2] [i_0] = var_1;
                    }
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_16 -= ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) >= (var_3)))) ? ((+(((((/* implicit */_Bool) arr_18 [(short)11])) ? (arr_13 [i_0] [i_1] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0])))))) : (arr_9 [i_0] [i_5] [i_2 + 4] [i_1])));
                        var_17 += ((/* implicit */unsigned char) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_5 + 3]))))), ((short)2272)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_2 [i_0]) < (((/* implicit */unsigned int) arr_11 [i_1]))))))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (unsigned short)16128))));
                        }
                    }
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (short)-19377))));
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_28 [(_Bool)1] [i_1] [i_0] [i_7] [i_7] [(short)19] [i_8] = ((/* implicit */unsigned long long int) (unsigned short)0);
                            var_22 = ((((/* implicit */int) (unsigned short)0)) | (((arr_5 [i_0] [i_2]) ? (arr_11 [i_0]) : ((~(((/* implicit */int) arr_4 [i_0] [(unsigned short)5])))))));
                        }
                        arr_29 [i_0] [18ULL] [18ULL] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)78)), ((unsigned char)195)));
                    }
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) -2373614909662428018LL))));
                        var_24 = ((/* implicit */int) var_7);
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) == (arr_17 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_1]) != (((/* implicit */int) arr_27 [i_1] [i_1 - 2] [i_1 + 1] [i_2] [i_2])))))) : (max((var_3), (((/* implicit */long long int) (short)-19377))))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        arr_37 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((var_9) | (((/* implicit */unsigned long long int) arr_20 [i_1 + 2] [i_1 + 2] [i_2 + 2] [i_1 + 2]))));
                        arr_38 [i_2 + 1] [i_1] [i_2] [2ULL] |= ((/* implicit */_Bool) 2147483647);
                        var_26 = ((/* implicit */long long int) ((int) (~(var_1))));
                    }
                    arr_39 [i_0] [i_1] [i_0] = ((((/* implicit */long long int) arr_20 [i_1 - 1] [i_2 + 3] [i_2 + 3] [i_2])) < (-6184092181633957329LL));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-16782)) : (((/* implicit */int) (short)19377)))), (((/* implicit */int) var_8)))))));
}

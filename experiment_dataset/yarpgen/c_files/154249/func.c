/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154249
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
    var_14 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */int) min((((signed char) arr_6 [i_2] [i_3] [i_4])), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (var_4))))))) ^ (((/* implicit */int) arr_11 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_3] [i_4] [(signed char)5]))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [0U] = ((/* implicit */unsigned short) ((short) (short)12168));
                                var_16 = ((/* implicit */unsigned char) min((var_4), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2] [i_4] [i_4] [i_4])) > (((/* implicit */int) (short)31744))))))))));
                                arr_15 [i_0] [10] [i_0] [i_1] [i_0] [i_0] [i_0] = arr_9 [i_0 - 1] [i_0];
                            }
                        } 
                    } 
                } 
                var_17 = arr_13 [i_0] [(unsigned char)1] [i_0] [i_0] [i_0];
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_1] [(signed char)7] [(signed char)16] [i_7] = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
                                var_18 = ((signed char) min((arr_10 [i_0] [i_1] [5ULL] [i_6] [i_0]), (min((arr_9 [i_0] [i_0]), (((/* implicit */short) var_7))))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_7] [i_7]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1])) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-31741)))), (((/* implicit */int) ((unsigned short) var_5))))) : (((((((/* implicit */int) min((arr_8 [i_0] [i_1]), (arr_18 [i_0] [i_1] [i_5] [i_0])))) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0] [i_0])) - (14195)))))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((unsigned int) ((unsigned short) arr_16 [i_0] [i_5] [i_5])))));
                }
                for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        arr_32 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 2])) | (((/* implicit */int) var_9))))) & ((~(11322210780503742951ULL)))));
                        var_21 = ((/* implicit */unsigned int) ((short) (~(((((/* implicit */int) (short)-31744)) ^ (((/* implicit */int) (short)31739)))))));
                    }
                    for (short i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (((~(((/* implicit */int) var_5)))) | (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (short)31751)))))))) | (((((/* implicit */_Bool) var_6)) ? ((~(arr_21 [i_0] [17ULL] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19869)))))));
                        arr_37 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((int) arr_23 [i_10] [i_1] [(short)12] [i_0] [i_0 + 2] [(short)1]))) ? (((/* implicit */int) arr_33 [i_0] [(signed char)7] [i_0 - 1] [i_0])) : (486626477))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-31771)) : (((/* implicit */int) var_6))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-66)), ((short)-20886)))) ? (min((((/* implicit */int) var_7)), (((((/* implicit */int) arr_29 [(signed char)7] [i_1] [i_1] [i_0] [i_10])) - (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_5))));
                    }
                    var_24 &= ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [18] [18] [18] [8U])) : (((/* implicit */int) var_1)))), (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_11 [i_0] [(unsigned short)6] [i_8] [(unsigned short)6] [i_0] [20U] [i_0])))))) * (((((/* implicit */int) (short)31742)) / (((/* implicit */int) arr_19 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1]))))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((short) arr_30 [i_0] [i_1] [i_1] [i_8])))));
                }
            }
        } 
    } 
}

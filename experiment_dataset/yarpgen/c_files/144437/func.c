/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144437
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
    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (((-(((/* implicit */int) var_7)))) * (((/* implicit */int) var_10))))), (4153207539U)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (~(-1005118013))))));
        arr_3 [i_0] [(unsigned short)4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) -731640650)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [4ULL]))))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))) : (9052718370758770546ULL)))))) && (((/* implicit */_Bool) ((short) var_3)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) (signed char)62)));
                    arr_8 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_4 [i_1] [i_1]);
                    var_15 = ((/* implicit */signed char) ((arr_2 [i_2]) << (((((/* implicit */int) ((unsigned char) var_10))) - (209)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) (unsigned char)109);
                    arr_16 [i_5] [i_3] [i_3] = (+(((/* implicit */int) ((unsigned char) ((arr_14 [i_0] [i_3] [i_3] [i_4] [i_5]) ? (((/* implicit */int) arr_5 [(unsigned short)18] [(unsigned short)18] [i_4])) : (((/* implicit */int) var_10)))))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)12)) << (((((/* implicit */int) arr_15 [i_0] [i_6])) - (6762))))), ((((_Bool)1) ? (((/* implicit */int) arr_5 [9LL] [(_Bool)1] [i_4])) : (((/* implicit */int) arr_5 [i_6] [i_4] [i_4]))))));
                        var_18 = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) 9223372036854775807LL))));
                        var_19 = ((long long int) ((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) arr_15 [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (1073741696ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117)))))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_22 [i_0] [i_3] [i_4] [(short)18] [14ULL]))))));
                        arr_23 [i_0] [i_3] [i_4] [5ULL] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_3])) | (((/* implicit */int) arr_19 [i_0]))));
                        var_22 |= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_12 [4ULL] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7)))));
                    }
                }
                for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    arr_26 [i_0] [i_8] [i_8] [i_0] [i_8] |= ((/* implicit */short) arr_24 [i_0] [7LL] [i_0] [i_4] [(signed char)9]);
                    var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_17 [i_0] [i_0] [10] [i_0] [i_0])))) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (unsigned char)77))));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) var_4);
                            arr_31 [i_0] [(unsigned short)15] [i_4] [(unsigned short)15] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4153207560U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3782535835U)));
                            arr_32 [i_3] [i_9] [17LL] [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [12LL]))));
                            var_25 ^= ((/* implicit */unsigned long long int) (unsigned char)189);
                        }
                    } 
                } 
                arr_33 [i_0] [i_3] = ((/* implicit */long long int) var_8);
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((unsigned long long int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_40 [i_0] [i_3] [i_4] [i_12] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22701)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned char)212))))) || (((/* implicit */_Bool) 15U)))));
                        }
                    } 
                } 
            }
            arr_41 [i_3] = ((/* implicit */_Bool) var_1);
            /* LoopSeq 2 */
            for (int i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                var_27 = ((/* implicit */_Bool) var_6);
                var_28 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_13] [i_3] [17ULL] [10U] [i_3] [i_3])) ? (((/* implicit */int) var_4)) : (arr_18 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] [(unsigned char)9])))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_29 = ((/* implicit */long long int) (signed char)-29);
                var_30 |= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22710)) | (((/* implicit */int) arr_14 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [(short)13] [(unsigned char)8]))))) || (((/* implicit */_Bool) arr_15 [5U] [5U])))))));
            }
        }
    }
    var_31 = ((/* implicit */unsigned short) var_4);
    var_32 = ((/* implicit */_Bool) var_1);
}

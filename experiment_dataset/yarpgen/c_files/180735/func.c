/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180735
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_7), (((/* implicit */short) var_13)))))))) ? ((-((~(((/* implicit */int) var_4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_0]))))) >= (((((/* implicit */unsigned long long int) arr_4 [i_1])) % (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (15130449371879336472ULL)))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4]))))) & ((+(((/* implicit */int) var_4))))))) : ((~(((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)96)) ? (arr_2 [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_1] [i_4] [i_1])))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)37910)) != (((/* implicit */int) var_0)))))))), (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_9 [i_0] [i_1] [i_2] [i_2]) : (arr_9 [i_0] [i_0] [(unsigned char)0] [i_4]))), (454508050718288231ULL)))));
                                var_20 ^= ((/* implicit */short) max((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] [i_2])) ? (((((/* implicit */_Bool) var_13)) ? (10865718058588285520ULL) : (arr_3 [i_0] [i_2] [i_2]))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)127))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_10 [i_2] [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_0])) : (((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */short) (+(var_3)));
                                arr_24 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] [11] = ((((/* implicit */_Bool) ((short) arr_23 [(short)9] [i_1] [i_2] [i_5] [i_6] [i_6]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_23 [(short)11] [i_1] [i_2] [(short)11] [i_6] [(signed char)6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]);
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) min((((long long int) var_3)), (((/* implicit */long long int) ((21U) | (((/* implicit */unsigned int) var_10)))))))))))));
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_8))));
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            {
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)255))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_30 [i_7] [i_7]))))) : ((~(var_8)))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [12] [i_8] [i_8]))) ^ (arr_6 [i_7] [i_7]))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (short)26425))))))) : (((/* implicit */unsigned int) min((arr_1 [i_7]), (((((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_8])) ? (((/* implicit */int) arr_30 [i_7] [i_7])) : (arr_4 [i_7]))))))));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_18 [i_7] [i_7] [i_7] [i_7]))));
                var_27 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_3 [8LL] [i_7] [8LL])) ? (arr_3 [i_7] [i_7] [(_Bool)1]) : (arr_3 [(signed char)2] [i_8] [(signed char)2])))));
            }
        } 
    } 
}

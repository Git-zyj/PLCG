/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10279
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (unsigned short)38416);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [20ULL] [i_4 - 1] [i_1 - 2]), (arr_2 [i_0] [i_4 + 1] [i_1 + 1])))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)27139)))) : ((-(((/* implicit */int) arr_5 [i_0] [i_4 - 1])))))))));
                                arr_15 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)12500))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_20 [i_1] = ((/* implicit */unsigned char) (-(((895946928U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_1] [i_6 - 2] [i_6 + 1])) : (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_5])) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_2] [i_1 - 1] [i_6 - 2] [i_6 + 1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])))))))));
                                var_17 = ((/* implicit */short) arr_1 [0U] [i_1 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_10);
    var_19 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 2) 
    {
        var_20 *= ((/* implicit */unsigned int) arr_5 [i_7] [18ULL]);
        var_21 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_23 [i_7 - 1])) * (((/* implicit */int) (unsigned char)137)))) / (((/* implicit */int) max((arr_23 [i_7 - 2]), (((/* implicit */unsigned short) arr_6 [i_7] [i_7 - 1] [i_7 - 1])))))));
        arr_24 [(unsigned char)8] = ((/* implicit */_Bool) arr_17 [(unsigned short)20] [i_7] [i_7] [(unsigned short)20]);
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        var_22 = ((/* implicit */_Bool) min(((+((~(((/* implicit */int) arr_7 [i_8] [i_8] [i_8])))))), (((/* implicit */int) (unsigned short)38416))));
        var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)3)), (((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_14 [i_8] [i_8] [22U] [(_Bool)1])) : (((/* implicit */int) (unsigned char)216))))));
        /* LoopNest 2 */
        for (short i_9 = 2; i_9 < 17; i_9 += 2) 
        {
            for (short i_10 = 1; i_10 < 18; i_10 += 4) 
            {
                {
                    arr_33 [i_10] [i_8] = ((/* implicit */unsigned short) (unsigned char)139);
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_28 [i_8] [(_Bool)1] [i_10])))) / ((-(((arr_1 [14ULL] [i_10]) % (var_7)))))));
                    arr_34 [i_9 + 1] [(unsigned char)9] [i_8] [(unsigned char)9] = ((/* implicit */short) min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_10] [i_10] [(unsigned char)19] [(_Bool)1])) || (((/* implicit */_Bool) (+(arr_32 [i_8] [i_9] [i_9] [i_10])))))))));
                    var_25 = 10924124249151615689ULL;
                }
            } 
        } 
    }
}

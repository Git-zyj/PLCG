/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165466
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_16 += ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_9 [i_1] [i_3 - 2] [i_3 + 2] [i_3] [i_3 + 3] [i_3 - 2]) < (((/* implicit */unsigned long long int) arr_2 [i_3 + 3]))));
                                var_17 = ((unsigned long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned short)15521))));
                                var_18 &= ((/* implicit */unsigned short) ((var_6) ^ (((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1])))))));
                                arr_14 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] [15U] = arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [(short)14];
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        {
                            arr_20 [i_0] [i_1] = max((min((((((/* implicit */_Bool) (unsigned short)52577)) ? (arr_17 [(short)4] [i_1] [(short)4] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [(unsigned short)7]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_0] [(short)3] [15ULL] [i_0]))))))), (((/* implicit */unsigned long long int) arr_12 [i_0])));
                            var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_8 [6ULL]))));
                            arr_21 [i_0] [(_Bool)1] [11U] [i_5] [11U] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) min(((unsigned short)65531), (var_7)))) : (((/* implicit */int) (!((_Bool)1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 2; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned short i_10 = 1; i_10 < 13; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            {
                                arr_34 [i_9] [i_9] [i_9] [i_10] [i_9] = ((/* implicit */long long int) (unsigned short)22745);
                                var_21 &= ((/* implicit */_Bool) ((((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)12956), (((/* implicit */unsigned short) arr_29 [i_7] [i_9] [i_10] [i_10])))))))) ? (((/* implicit */int) arr_30 [12U] [i_8] [16ULL])) : (((/* implicit */int) arr_31 [i_8]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_12 = 3; i_12 < 15; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) 83546206232491624ULL);
                                var_23 = ((/* implicit */unsigned short) (signed char)-106);
                                var_24 = ((/* implicit */unsigned short) ((max((min((arr_39 [i_7]), (((/* implicit */unsigned long long int) var_3)))), (min((((/* implicit */unsigned long long int) arr_31 [i_8])), (15019950738669399611ULL))))) | (var_6)));
                                var_25 = ((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */short) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) arr_27 [i_13] [i_8] [i_8]))))), ((short)-32754)))), ((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((signed char) arr_25 [i_7]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

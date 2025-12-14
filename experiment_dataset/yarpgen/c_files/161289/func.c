/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161289
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_1 [i_1])))));
                arr_6 [i_1] [(short)4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) || ((!(((/* implicit */_Bool) (unsigned char)28)))))) && (((/* implicit */_Bool) ((short) arr_1 [i_0])))));
                arr_7 [i_1] = ((/* implicit */int) max(((-((~(arr_1 [4ULL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) | (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [(_Bool)1] [i_1] = ((/* implicit */int) arr_10 [i_1] [i_1] [i_1]);
                            arr_14 [i_0] [i_1] [i_2] [(unsigned char)2] [i_2] [i_1] = ((/* implicit */int) arr_12 [11ULL] [i_3] [i_1]);
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) arr_12 [2ULL] [0U] [i_1])) : (((/* implicit */int) arr_8 [i_1] [(signed char)2] [i_1])))))))));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                arr_17 [i_0] [i_0] [(signed char)9] [i_0] [8LL] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_12 [(_Bool)1] [i_2] [i_1]) && (((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_1] [i_4] [i_4] [6ULL]))));
                                arr_18 [i_0] [i_1] [6ULL] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */int) ((_Bool) max((arr_5 [i_0] [i_1] [12ULL]), (((/* implicit */unsigned int) arr_15 [i_1] [i_1])))))), ((~(((/* implicit */int) arr_0 [i_1]))))));
                                var_17 = arr_11 [i_0] [i_0] [i_1] [i_0] [(signed char)1] [i_0];
                            }
                            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                            {
                                arr_23 [i_1] [12U] [i_0] [(signed char)0] [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_0] [6U] [i_0]);
                                arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_21 [(signed char)9] [(signed char)9] [i_2] [i_1] [i_2] [i_2])), ((short)-11423))))) : (((((/* implicit */_Bool) 2361941871U)) ? (arr_10 [i_0] [i_1] [(unsigned short)7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_21 [i_5] [12] [i_1] [i_1] [i_1] [i_0])), (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_1])))))))));
                                var_18 = ((/* implicit */int) min((max((min((arr_15 [i_1] [i_3]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [0ULL] [i_5])) && (((/* implicit */_Bool) arr_0 [(_Bool)0]))))))), (((/* implicit */short) ((signed char) arr_0 [i_5])))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) (_Bool)1))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_14)))) | (((/* implicit */int) min((max((((/* implicit */unsigned short) var_0)), (var_1))), (var_5)))));
    var_20 = ((/* implicit */_Bool) var_0);
    var_21 = ((/* implicit */unsigned char) var_14);
}

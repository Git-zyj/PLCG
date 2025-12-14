/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145790
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
    var_15 = ((/* implicit */_Bool) max(((-(var_14))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) var_13)))))))));
    var_16 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_10 [i_3] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) var_10))), (arr_6 [i_1] [i_1] [i_2] [(unsigned char)0])));
                        arr_11 [i_0] [(_Bool)1] [(short)7] [i_1] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1]))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [1ULL] [9U] [i_1 + 1] [(unsigned char)12])), (var_9)))) ? (((/* implicit */int) arr_5 [i_0] [1] [i_1 + 1] [i_1])) : (((/* implicit */int) max((arr_5 [9] [i_1] [i_1 - 1] [6ULL]), (arr_5 [i_1] [i_1] [i_1 - 1] [(unsigned char)10])))))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) (unsigned short)44380);
            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_2);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (~(((10653933345238319691ULL) | (var_3)))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */int) arr_0 [11]))))) ? (min((((/* implicit */int) var_8)), (var_13))) : (((((/* implicit */_Bool) (unsigned short)21156)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)44380))))))) / ((~(max((var_3), (((/* implicit */unsigned long long int) 255LL))))))));
                    var_21 = max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_0 [i_4 + 1])), (((unsigned char) (_Bool)1))))), (5959273035436017468ULL));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                arr_25 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_14), (min((7843850353768710726LL), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_14 [(signed char)8] [(signed char)14]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [10] [(unsigned char)7]))) | (var_0))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_4] [i_6] [(short)14] [i_4])))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)14)), (arr_8 [(short)3] [(_Bool)1] [i_6] [12])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [(short)0] [3ULL] [i_5])) / (((/* implicit */int) arr_18 [1ULL] [i_5] [1ULL]))))) : (var_14)))));
                                var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned char) arr_0 [(signed char)7]))))) ? ((+(((/* implicit */int) (unsigned char)47)))) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) max(((-(((arr_24 [i_0] [i_4] [3] [11U] [i_0] [11] [i_5]) - (arr_23 [10ULL] [(signed char)2] [i_0] [(_Bool)0] [i_5] [i_5]))))), (((/* implicit */unsigned long long int) 4262289160837900504LL))));
                }
            } 
        } 
    }
}

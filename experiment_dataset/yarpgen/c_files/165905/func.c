/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165905
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_9)));
    var_17 = ((/* implicit */unsigned int) var_15);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (short)-31107))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_4 [i_4 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_10)))))))) ? (((/* implicit */int) ((((var_13) != (arr_4 [i_4]))) || (((((/* implicit */_Bool) (short)-31108)) && (((/* implicit */_Bool) arr_4 [(signed char)1]))))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_14)))))))))));
                                var_20 = ((/* implicit */unsigned long long int) ((arr_3 [i_4 - 2] [i_3 - 1] [i_2 + 2]) + (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))));
                                arr_17 [i_0] [i_1] [i_3] [i_3] [i_4 - 2] = ((/* implicit */unsigned short) arr_16 [i_3]);
                                arr_18 [i_0] [i_1] [i_3] [i_3] [i_4] [2LL] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((min((arr_3 [i_0] [i_1] [i_3]), (((/* implicit */long long int) (short)-3689)))), (arr_14 [i_3] [i_3] [i_2] [(unsigned short)4] [i_3])))), (var_13)));
                                var_21 -= ((/* implicit */unsigned int) 681479418);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) ((var_15) / (var_3))))) != (((((long long int) 172642545)) / (var_4)))));
                        arr_23 [i_0] [(short)4] [(short)1] [i_5] [6] [i_1] = ((/* implicit */signed char) ((((unsigned long long int) (short)31107)) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_5] [i_2 - 2] [i_1 - 1] [i_1 + 1]) && (((/* implicit */_Bool) var_4))))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_2))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 3) 
                    {
                        arr_28 [i_0] [(signed char)5] [(signed char)5] [i_6] [i_6] [(signed char)5] = ((/* implicit */short) max((max((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_2] [i_1])), (arr_0 [i_1] [i_1]))), (((/* implicit */unsigned int) ((signed char) arr_14 [i_0] [0ULL] [i_0] [i_2 - 2] [i_6])))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)206)) && (((/* implicit */_Bool) (short)-29663))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) 1484766150847023809ULL))));
                            var_26 -= ((/* implicit */unsigned short) ((long long int) arr_20 [i_7] [i_2] [(_Bool)1] [2LL]));
                        }
                        for (short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            arr_35 [i_6] [i_1] [i_1] [0LL] [i_1 + 1] [2U] [i_1] = ((/* implicit */long long int) 13084372383600065701ULL);
                            var_27 -= ((/* implicit */unsigned int) ((short) min((((((/* implicit */_Bool) 2652725561978182164LL)) ? (var_3) : (((/* implicit */long long int) var_1)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) - (-2652725561978182165LL))))));
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned char) var_7));
                        }
                    }
                }
            } 
        } 
    } 
}

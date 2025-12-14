/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143795
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
    var_12 = ((var_6) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))));
    var_13 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = (((-(((/* implicit */int) arr_5 [i_0 - 1] [(short)4] [i_2] [i_2 - 1])))) <= (((/* implicit */int) ((12313906690416498307ULL) > (min((((/* implicit */unsigned long long int) var_4)), (var_2)))))));
                    var_15 &= ((/* implicit */unsigned long long int) (short)-1758);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_5 [i_1] [i_1] [(short)3] [i_3])) * (((/* implicit */int) arr_0 [i_1] [(_Bool)1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_3])) - (((/* implicit */int) (short)32759))))) <= (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)3]))) : (var_0))))))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_0] [i_3]))))) ? (arr_8 [i_0] [i_1] [(short)15] [(short)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)1758), (((/* implicit */short) var_5)))))))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_10)) ? (15773270641218056475ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) << (((((/* implicit */int) var_10)) - (58932))))))));
                    }
                    var_18 = ((/* implicit */short) ((((var_9) << (((((/* implicit */_Bool) var_0)) ? (1ULL) : (0ULL))))) % ((~(arr_2 [i_0 - 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    var_19 |= ((/* implicit */short) (-(arr_13 [i_6] [8ULL] [(short)5])));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (15773270641218056475ULL) : (arr_10 [i_5])))) ? (max((arr_12 [i_4 - 2] [i_4 - 2] [i_4 - 1]), (arr_12 [i_4 + 1] [i_4] [i_4 + 1]))) : (min((((/* implicit */unsigned long long int) var_8)), (arr_12 [i_4 + 1] [(short)11] [i_4 + 1])))));
                        var_21 = ((((/* implicit */_Bool) 15773270641218056475ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_13 [i_4 - 1] [(_Bool)1] [i_4 - 1])) ? (arr_13 [i_4 - 1] [(_Bool)1] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((((/* implicit */_Bool) (short)-1758)) ? ((~(15465576254932212873ULL))) : (((arr_9 [(_Bool)1]) % (arr_9 [(_Bool)1]))))) << (((((arr_12 [i_4 - 2] [i_4 - 1] [i_4 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16256))))) - (2632ULL))))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_6))) : (((((/* implicit */_Bool) arr_10 [(short)14])) ? (arr_9 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26035))))))), (4312925678539166799ULL))))));
                    }
                    var_24 ^= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_1)) ? (arr_10 [i_5]) : (17285546106819725507ULL))) % (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2981167818777338742ULL)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_10))))))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_24 [i_4] [i_5] [(unsigned short)8] [(short)5] [i_9 - 1] [i_6] [(unsigned short)8] &= ((/* implicit */_Bool) var_0);
                                arr_25 [(unsigned short)8] [i_5] [(unsigned short)8] [(short)6] [17ULL] [0ULL] [17ULL] = max(((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_13 [i_4] [0ULL] [(short)7]))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18))) : (var_0))))), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_21 [(short)16] [i_4] [(short)12] [i_8]))))))));
                                var_25 = arr_10 [(unsigned short)17];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

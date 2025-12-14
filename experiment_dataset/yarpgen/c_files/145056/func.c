/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145056
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
    for (long long int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 + 3] = ((/* implicit */_Bool) min((((((((/* implicit */int) var_10)) == (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_1])) : (var_2))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) + (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))))));
                var_17 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((15084963099292459093ULL) | (((/* implicit */unsigned long long int) var_3)))))))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))) ? (((/* implicit */int) arr_0 [i_1 + 3] [i_2 + 1])) : ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))))) ? ((+(3361780974417092523ULL))) : (((/* implicit */unsigned long long int) max((arr_8 [i_4] [i_4 - 1] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) var_0)))))));
                                var_18 = ((/* implicit */unsigned int) ((((min((arr_14 [i_0] [i_2] [i_4] [i_4]), (((/* implicit */unsigned int) var_15)))) == (((/* implicit */unsigned int) var_7)))) ? (((/* implicit */unsigned long long int) max((arr_14 [i_1 + 3] [i_2 + 1] [i_4] [i_4 + 4]), (arr_14 [i_1 + 3] [i_2 + 1] [i_4] [i_4 + 4])))) : (((max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0 - 3] [i_4] [i_0] [i_0])), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]))) % (((arr_10 [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_14)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1 + 4] [i_1 + 2])) ? (var_14) : ((+(arr_6 [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((var_0) ? (var_3) : (((/* implicit */long long int) arr_14 [i_0 + 1] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 + 2] [i_1])))))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_1] [i_6]);
                            arr_24 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147352576))))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [i_6]))))));
                            var_19 = ((/* implicit */short) (!(arr_10 [i_0] [i_0] [i_0 - 3] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_7 = 1; i_7 < 14; i_7 += 2) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */short) arr_27 [i_7])), (arr_3 [i_7] [i_7] [i_7 + 1])))) : (((arr_9 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) % (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7]))) - (arr_6 [i_7] [i_7] [i_7])))) ? (min((arr_22 [i_7] [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) max((arr_13 [i_7] [i_7] [(signed char)8] [i_7] [i_7]), (((/* implicit */long long int) arr_17 [i_7] [i_7] [i_7]))))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) ^ (max((((/* implicit */unsigned long long int) arr_10 [i_7] [i_7] [i_7] [i_7])), (arr_11 [i_7] [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1])))))));
        var_20 = ((/* implicit */int) var_8);
    }
    var_21 = min((((((/* implicit */_Bool) var_7)) ? (var_15) : (var_2))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_14))))))));
    var_22 = ((/* implicit */int) var_1);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172597
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
    var_15 = (+(((((/* implicit */_Bool) var_9)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (22ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-23071)) : (((/* implicit */int) var_13))))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) >> (((var_4) - (1095672481)))))))))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_9)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)23071))))) : (max((22ULL), (var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) (short)-23072);
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0]))) : (arr_3 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) (short)-23087)) : ((+(((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)23066))) : (min((((/* implicit */unsigned long long int) var_1)), (22ULL))))), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((7), (((/* implicit */int) var_10))))) * (min((((/* implicit */unsigned long long int) (_Bool)1)), (35150012350464ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4 - 2] [i_4 + 4])) ? (((/* implicit */unsigned int) arr_2 [i_4 + 4] [i_4 + 4])) : (arr_0 [i_4 + 1] [i_4 - 3])))) : (4136834589772476344ULL)));
                    arr_14 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_2] [i_3] [i_2]);
                    var_21 = ((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 903969578))))), (((((/* implicit */_Bool) -8)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23073))))))) : (((/* implicit */unsigned int) arr_2 [i_2] [i_2]))));
                    var_22 = ((/* implicit */unsigned int) min((((arr_11 [i_4 + 1] [i_4 - 4] [i_4 + 2]) ? (((/* implicit */int) arr_11 [i_4 + 2] [i_4 - 4] [i_4 - 4])) : (((/* implicit */int) arr_11 [i_4 + 2] [i_4 - 4] [i_4 - 4])))), (((((/* implicit */_Bool) min((((/* implicit */short) var_2)), ((short)23924)))) ? (((((/* implicit */_Bool) (short)29810)) ? (-903969579) : (((/* implicit */int) arr_10 [i_2] [i_3])))) : (((/* implicit */int) ((var_5) <= (((/* implicit */int) (_Bool)1)))))))));
                    arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_4 - 3]))) : (min((((/* implicit */long long int) (unsigned short)7168)), (var_14))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */int) arr_7 [i_4 + 1])) : (((((/* implicit */_Bool) 4136834589772476344ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169931
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_14))));
                var_18 = var_15;
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) ((short) (-(7075803558291154333LL))))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_2)))) - (4231))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) % (8215896500608098284ULL)));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3615))) > (3250735913U))))) % (((((/* implicit */_Bool) var_2)) ? (var_5) : (var_3)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2] [i_2 - 1] [i_4] [i_2 - 1])) << (((arr_7 [i_2 + 2] [i_2 - 3]) - (3974356047U)))))), (((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (var_15)));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2] [i_3] [i_2] [i_5])) == (((/* implicit */int) arr_6 [i_2 - 3]))))), (((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                                arr_19 [i_2] [i_3] [i_2] [i_5] [i_2] [i_3] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1] [i_2])) > (((/* implicit */int) arr_16 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]))))), ((-(((/* implicit */int) arr_11 [i_2]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) max((var_12), (arr_9 [i_2]))))))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        arr_22 [i_2] [i_3] [i_4] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_0))))) : (((arr_7 [i_4] [i_4]) >> (((var_15) - (18060597175762184376ULL)))))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_4] [i_7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) / (((var_13) ^ (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) ((var_15) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_3]))))))))) : (((1044231382U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93)))))));
                        var_24 = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) arr_15 [i_7] [i_2 + 1] [i_7])))));
                    }
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), ((((((+(arr_21 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_8]))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2])) / (((/* implicit */int) arr_10 [i_2 + 1] [i_3] [i_8] [i_8]))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14313780643383820356ULL)) ? (-808372348448816840LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))))))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 - 3]))))) && (((/* implicit */_Bool) max((arr_9 [i_2 - 2]), (arr_9 [i_2 + 2]))))));
                    }
                }
            } 
        } 
    } 
}

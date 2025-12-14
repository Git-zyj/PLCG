/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11321
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) var_11);
                                arr_11 [(short)5] [i_2] [(unsigned short)8] [1ULL] [(signed char)0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))) : (2298473910U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) min((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_8 [i_4] [i_4 + 3] [i_3] [i_2 + 3])))))));
                                arr_12 [i_3] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) (-(var_3)))) < (min((((/* implicit */long long int) (signed char)-79)), (arr_4 [i_0] [(unsigned short)9] [i_0] [i_2])))))) == (var_3)));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) min((arr_0 [(unsigned short)2]), (((/* implicit */long long int) (signed char)-79))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)-79)) ? (arr_6 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_6 [7LL] [(unsigned char)3] [i_0] [i_0] [i_1] [i_1]))), (((/* implicit */unsigned int) arr_7 [i_0] [i_1]))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (max((arr_6 [(short)1] [i_1] [i_0] [3ULL] [i_1] [7U]), (((/* implicit */unsigned int) (signed char)79))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) min((arr_7 [i_0] [i_1]), (((/* implicit */int) (signed char)-126)))))))) : (((((/* implicit */int) ((unsigned short) 0ULL))) >> ((((-(arr_7 [i_1] [i_0]))) - (949762590)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) != (max((((/* implicit */long long int) var_11)), (var_10)))));
}

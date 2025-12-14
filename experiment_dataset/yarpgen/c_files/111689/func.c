/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111689
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])) : (((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 3] [i_0])) : ((+(13493277069375460271ULL)))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_15)), (var_6))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) >= (13493277069375460274ULL))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2710640833405563646ULL)))))) | (((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_0])) ^ (arr_6 [i_1] [i_2])))))));
                    arr_10 [i_2] [i_2] [i_1] [i_2] = (+(arr_3 [i_1 + 1] [i_2] [i_2]));
                    var_20 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned int) arr_7 [i_0])) : (2834219817U)))))));
                }
                for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    arr_13 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1] [i_1 - 1])) ? (((((arr_12 [i_0] [i_1]) - (((/* implicit */long long int) arr_11 [i_0])))) - (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_0])) >= (arr_6 [i_0] [i_1]))))) & (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (+(((unsigned long long int) 6156306458184760541ULL))));
                                var_22 = ((/* implicit */_Bool) (unsigned char)255);
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_3] [i_1])) ^ (arr_18 [i_1 - 3] [i_1] [i_1] [i_1 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 3] [i_1 - 2] [i_1 - 3])))))) : (arr_2 [i_0] [i_3])));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_11)))) ? (((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)61012)))))))));
    var_24 = ((/* implicit */_Bool) var_7);
    var_25 = ((/* implicit */unsigned int) (short)19);
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((arr_20 [i_6]), (((/* implicit */long long int) arr_21 [i_6])))), (((/* implicit */long long int) arr_21 [i_6]))))) ? ((+(arr_20 [i_6]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_6])))))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) (short)-20256);
            arr_25 [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) -1LL))));
            arr_26 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (2834219817U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0))));
            arr_27 [i_6] = arr_20 [i_6];
            arr_28 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)7546)) ? (4953467004334091341ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19047)))));
        }
    }
}

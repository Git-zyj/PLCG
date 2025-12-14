/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125102
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
    var_12 += ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - ((~(((/* implicit */int) (short)-22393))))))) ? (((/* implicit */int) max(((signed char)7), (((/* implicit */signed char) (_Bool)1))))) : (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))), (var_11))));
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (signed char)-8))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (arr_8 [i_3] [i_2] [i_3] [i_0 + 2]) : (((/* implicit */int) var_0))));
                                var_15 = ((/* implicit */unsigned int) ((unsigned short) ((arr_3 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15523))))));
                                var_16 += ((/* implicit */signed char) ((((var_10) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) | (((((/* implicit */_Bool) -1932050333)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) (unsigned short)62298))))));
                                var_17 = ((/* implicit */unsigned char) (((+(arr_3 [i_4]))) > (((/* implicit */unsigned int) var_11))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) arr_4 [i_2] [i_0] [i_0]);
                    arr_12 [i_0] [i_0] [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(956202747)))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1])) ? (var_11) : (((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) var_10))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6 + 1] [i_5 + 1] [0ULL] [i_5 + 1] [i_0 + 1]))) : (var_7)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18271
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_14 = ((((/* implicit */_Bool) (unsigned char)102)) || (arr_8 [i_1 + 1] [i_1 + 1]));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) << (((((/* implicit */int) ((unsigned char) var_3))) - (173))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_16 |= ((/* implicit */int) (signed char)-88);
                                arr_21 [i_1 + 3] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (short)26421))) - (arr_11 [i_2 - 2] [i_2 - 2] [i_6] [i_6] [i_2 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned char) arr_17 [i_0] [(short)14]);
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_0] [i_0 - 2] [i_0 - 3] [i_0] [(_Bool)1] [i_0] [i_0])) % (((/* implicit */int) arr_20 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1] [i_0]))));
        arr_23 [i_0] = ((/* implicit */signed char) (+(1088629382)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((arr_25 [i_7] [i_7]) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)-23106))))))));
        var_19 ^= ((/* implicit */long long int) arr_25 [13] [(signed char)7]);
    }
}

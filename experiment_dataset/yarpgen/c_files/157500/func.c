/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157500
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
    var_20 = ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) arr_2 [i_0]);
                arr_6 [i_0] [i_1] = arr_5 [i_1];
            }
        } 
    } 
    var_22 = min((((/* implicit */unsigned int) (signed char)-126)), (var_16));
    var_23 = ((/* implicit */_Bool) min((((((/* implicit */long long int) -2122988452)) / (1342154587161014266LL))), (((((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_19))))) % (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                var_24 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */signed char) arr_2 [(signed char)19])), ((signed char)-121))));
                /* LoopNest 3 */
                for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_25 ^= ((/* implicit */long long int) (+(min((((/* implicit */int) var_4)), ((-(((/* implicit */int) (unsigned char)14))))))));
                                arr_21 [(unsigned char)12] [i_3] [i_4] [i_3] [6] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) min((((unsigned char) var_13)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned char)14)))))))) & ((~(((/* implicit */int) var_4))))));
                                var_26 |= ((/* implicit */unsigned char) ((int) arr_13 [i_2] [i_2] [i_4] [8U]));
                                var_27 = ((max((((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_4] [i_5] [i_6] [4LL]))))), (((/* implicit */unsigned int) ((signed char) arr_9 [12U]))))) < (((/* implicit */unsigned int) ((/* implicit */int) max((var_19), (arr_3 [i_6] [i_2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

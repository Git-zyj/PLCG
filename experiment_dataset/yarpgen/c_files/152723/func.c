/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152723
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) ^ (var_8))) / (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_1 + 1] [i_1 + 1])), (arr_0 [i_1 + 1])))))))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_11 [i_4] [i_3 - 1] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_7 [i_1 + 1] [i_1 - 1] [i_3 + 1] [i_3 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned char) ((int) arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])))) : (((/* implicit */int) (signed char)-93))));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_1 + 2] [i_0] [i_0] [i_2]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)160))))) : ((-(((/* implicit */int) (unsigned char)31))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            {
                var_20 += ((/* implicit */unsigned short) arr_14 [i_5]);
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)51586), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9)))))))) <= (var_8))))));
            }
        } 
    } 
}

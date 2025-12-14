/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188479
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
    var_16 |= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (6759130469717728301ULL))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(11687613603991823314ULL)))) || (((/* implicit */_Bool) (-((-(((/* implicit */int) var_2)))))))));
    var_18 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (-((~(var_9)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_0] [i_2] [(signed char)12] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [(signed char)9] [i_1]), (((/* implicit */unsigned short) arr_2 [11U]))))))))));
                                arr_15 [7ULL] [i_1 - 4] [(signed char)5] [i_1] [(signed char)5] [i_0] = ((/* implicit */unsigned int) var_0);
                                var_19 = ((/* implicit */unsigned short) ((signed char) ((((var_14) / (((/* implicit */long long int) 1238335260)))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_4]))))))));
                                arr_16 [i_0] = ((/* implicit */signed char) (~((-(max((-1238335260), (((/* implicit */int) arr_3 [i_0] [i_4 - 1]))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), ((short)7680))))) : ((~(-9223372036854775801LL)))));
            }
        } 
    } 
}

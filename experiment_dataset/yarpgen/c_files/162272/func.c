/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162272
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((-1LL), (585647191540421778LL)));
                            var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (max((var_4), (((/* implicit */unsigned int) arr_4 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_4 [i_0] [i_0]))))))));
                            arr_8 [i_0 - 1] [i_0] [i_0] [i_0] [(signed char)15] [i_0] = ((/* implicit */int) arr_7 [(signed char)13] [i_2] [i_0 - 1] [i_3 - 2] [i_0 - 1]);
                        }
                    } 
                } 
                arr_9 [i_0] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                arr_18 [i_5] [i_0] [(unsigned char)9] [i_5] [21ULL] [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1]))) | (var_2))), (((/* implicit */unsigned int) (unsigned short)1023))));
                                arr_19 [i_6] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (((((((/* implicit */long long int) ((/* implicit */int) var_15))) & (var_7))) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)4001)), (var_14)))))))));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_8))))));
                                var_19 = arr_0 [i_0] [i_0];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((short) var_1))) != (((/* implicit */int) var_8))))) > (((/* implicit */int) (_Bool)1))));
}

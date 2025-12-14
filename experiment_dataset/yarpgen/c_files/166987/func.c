/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166987
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((signed char) 1150669704793161728LL));
                                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_2] [i_3]), (((/* implicit */short) arr_6 [i_1]))))) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3] [i_4])))))));
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */long long int) var_13);
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            arr_19 [i_0] = ((/* implicit */unsigned short) var_1);
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_1 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20844))) : (1087869022U))))));
}

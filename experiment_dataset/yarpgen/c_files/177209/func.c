/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177209
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) arr_3 [i_1]);
                var_13 = ((/* implicit */unsigned short) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    arr_11 [i_3] [(signed char)19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_2] [i_3]))))), (3739183971U)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_2] [i_3]))));
                    var_14 = ((/* implicit */unsigned int) var_6);
                    arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) arr_5 [(_Bool)1] [i_4]);
                    arr_13 [i_4] [i_3] [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) ((int) var_11))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 555783324U)) ? (555783325U) : (0U)))))))));
                                arr_19 [24] [24] [i_4] [i_5 - 1] [i_6] [10] [24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2 - 1] [8LL] [i_4] [8LL] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6]))) : (var_3)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104048
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
    var_12 = ((/* implicit */_Bool) ((var_11) * (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_4))), ((+(var_3))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_13 = (-(((/* implicit */int) (unsigned char)197)));
                            var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) (~(((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned char)89))))));
                var_16 &= ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_2 [i_0 - 4] [i_0 + 1]), (arr_2 [i_0 - 4] [i_1]))))));
                var_17 &= ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                /* LoopNest 3 */
                for (short i_4 = 3; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [8LL] [i_0])) >> (((((/* implicit */int) arr_1 [i_5])) + (9921)))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_10 [i_4 + 1] [i_4 + 1] [i_4]), (((/* implicit */unsigned char) arr_5 [i_0 - 3]))))) ^ (((/* implicit */int) arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 2]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

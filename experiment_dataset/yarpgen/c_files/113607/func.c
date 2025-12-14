/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113607
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
    var_19 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))));
                                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((signed char) (((_Bool)1) ? (15645609764119637345ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))))))), (arr_2 [(short)10] [i_0] [i_0 + 1])));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (short)-25944)));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1078447901556847859LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)72))));
            }
        } 
    } 
}

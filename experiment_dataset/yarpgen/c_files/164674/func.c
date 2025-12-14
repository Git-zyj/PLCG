/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164674
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1519148105)) ? (2298842330U) : (1996124949U)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) var_4);
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_4 [i_0])) - ((-(arr_12 [i_0] [i_0] [i_4]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((127U) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_2] [i_4])) ? (((/* implicit */int) (unsigned short)11131)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1])))))))))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) >= (7910085933604485534ULL))))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), ((-(((((/* implicit */_Bool) (~(-1519148099)))) ? (min((arr_12 [i_0] [i_0] [i_4]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24190))) | (3360712210U))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

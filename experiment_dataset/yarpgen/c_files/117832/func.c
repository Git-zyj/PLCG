/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117832
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (var_11)));
    var_13 = ((/* implicit */unsigned char) 771150051314362013LL);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_14 ^= max((((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)239)))), (min((var_0), (((/* implicit */long long int) arr_0 [i_0 + 2])))));
                                var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) -1379311116)), (min((arr_11 [i_2 - 2] [i_2] [i_2] [i_1]), (((/* implicit */long long int) arr_3 [i_2 - 2] [i_0 + 2] [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_6] [i_6] [i_5] [i_5] [i_1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_11 [i_0] [i_0] [i_0 + 1] [i_5]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))) : (((arr_17 [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_2]) : (arr_11 [i_0] [i_0] [i_0 + 1] [i_5 - 1])))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((-1694377006) == (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_5]))))), (arr_10 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0])))) ? (((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 - 1] [i_2] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) arr_2 [i_5 - 1] [i_6])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

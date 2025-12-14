/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169233
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_11 [i_3] [i_3] |= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_7)), ((~(4559762991922274782ULL))))) + (((/* implicit */unsigned long long int) max((((int) arr_7 [18] [18])), (((/* implicit */int) ((4545437178653149627LL) >= (((/* implicit */long long int) arr_3 [6LL] [i_1] [6LL]))))))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) (-(min((((/* implicit */int) (_Bool)1)), (var_10)))))) / (max((arr_6 [(unsigned char)5] [i_0] [i_0] [i_0 - 1]), (arr_6 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1]))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [6LL] [1U] = ((/* implicit */unsigned long long int) (-(((arr_9 [i_0 - 1] [i_0 - 1] [(unsigned short)16] [i_0] [i_0]) / (((((/* implicit */_Bool) arr_8 [19U] [i_0] [i_1] [(signed char)20] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_4 [(signed char)5] [11] [i_1]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) (-(var_7)));
}

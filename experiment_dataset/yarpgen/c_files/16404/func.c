/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16404
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
    var_20 = ((/* implicit */int) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_15))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((arr_4 [6ULL] [i_1]), (((/* implicit */unsigned int) arr_7 [i_2] [i_1] [i_1] [8LL])))) - (arr_4 [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_2])) % (1741249302U))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_1 [i_2 - 2] [i_1 + 2])) * (((/* implicit */int) arr_1 [i_2 - 1] [i_1 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) ((unsigned short) 135263417U)))))));
                                var_22 = ((/* implicit */unsigned char) max((min((arr_15 [i_2 - 2] [i_1 + 3] [i_1 + 3]), (1741249302U))), (((/* implicit */unsigned int) ((signed char) arr_15 [i_2 - 2] [i_1 + 3] [i_1 + 3])))));
                            }
                        } 
                    } 
                    arr_16 [i_1] = ((arr_6 [i_1 - 1] [i_1 + 3] [i_2 - 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_1 - 1] [i_1 - 1] [i_2 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 + 2] [i_1] [i_1 + 3] [i_2 + 1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_4))))) : (((/* implicit */int) var_12)))));
}

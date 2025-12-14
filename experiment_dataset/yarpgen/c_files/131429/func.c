/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131429
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
    var_15 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) - ((+(((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) == (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_1])) ? ((+(((/* implicit */int) (unsigned char)66)))) : (arr_4 [i_0] [(unsigned short)8]))) : (((/* implicit */int) var_6))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */long long int) (!((_Bool)1)))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] = arr_8 [i_0] [i_2] [i_2 + 2] [i_3 - 2];
                            arr_10 [i_2] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_8 [i_3 + 1] [i_2] [i_2] [i_0 - 2]), (arr_8 [i_0 + 3] [i_2] [i_2 + 2] [i_3])))) | ((-(arr_4 [i_3] [i_1])))));
                            var_18 = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned char) (((-(min((((/* implicit */unsigned long long int) var_8)), (2251524935778304ULL))))) + (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)52)) + (((/* implicit */int) arr_8 [i_0] [i_1] [(_Bool)1] [i_1])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) -4658200041065511796LL);
    var_20 = ((/* implicit */long long int) ((((var_8) + (2147483647))) >> (((((/* implicit */int) var_3)) + (76)))));
    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4658200041065511791LL)) ? (-4658200041065511796LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) || (((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161084
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 6; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) max((5994939730794219110ULL), (11144706489480157282ULL))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */long long int) max((max(((_Bool)1), ((_Bool)1))), ((_Bool)1)));
                    var_20 = ((/* implicit */unsigned long long int) var_16);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((((/* implicit */int) var_2)), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((+((-2147483647 - 1))))))));
                                var_22 = ((/* implicit */int) min((1385420832U), (var_5)));
                                arr_16 [i_0] = ((/* implicit */_Bool) (~(((int) arr_11 [i_0] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [(signed char)4] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_13 [i_0 - 3] [9] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) ^ (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)111)), (823869036))))))) ? (((int) 2909546463U)) : (((/* implicit */int) (_Bool)1))));
        var_23 *= ((/* implicit */_Bool) min((max((7302037584229394319ULL), (((/* implicit */unsigned long long int) arr_2 [(unsigned char)8])))), (((/* implicit */unsigned long long int) ((arr_2 [8U]) / (((/* implicit */long long int) 2588775064U)))))));
    }
    var_24 = ((/* implicit */int) ((var_4) >= (var_4)));
}

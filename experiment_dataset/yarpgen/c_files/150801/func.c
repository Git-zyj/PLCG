/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150801
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
    var_10 &= ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0 + 2] [i_0 + 2] [i_2] = ((((/* implicit */_Bool) (short)-28794)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49152))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)147))))));
                                arr_13 [i_0] [i_0 + 1] [i_0] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [3U] [i_4 - 1] [i_0 + 1] [i_1 - 1] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_3] [i_1] [i_4 + 3] [i_0 + 1] [i_1 - 1] [i_3]))))) ? (((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [i_1] [i_3] [i_1] [i_1 - 1] [(_Bool)1] [i_1])) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (unsigned char)96)), (917980933969052853ULL))))));
                                arr_14 [i_3] = ((/* implicit */int) arr_3 [i_1] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3)))))))))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) 1750782212)) : (260638352U))))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned char)142))));
}

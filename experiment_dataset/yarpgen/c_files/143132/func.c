/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143132
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
    var_15 = ((/* implicit */unsigned long long int) var_3);
    var_16 = ((/* implicit */unsigned char) var_13);
    var_17 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_1]);
                var_19 = ((/* implicit */unsigned char) (-((+(arr_1 [i_0] [(_Bool)1])))));
                var_20 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)192))))) ? (-7132065605184951638LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 22398232U)) ? (arr_0 [i_0]) : (((/* implicit */int) var_13))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_12 [i_0] [i_1] [i_0]))))));
                                arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0] [i_2 + 3] [i_0]))));
                                arr_15 [(short)12] [0U] [(unsigned char)1] [(short)12] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)246))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

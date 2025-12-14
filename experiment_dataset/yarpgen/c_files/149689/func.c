/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149689
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
    var_19 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [10U] [i_1 - 3] [i_1 - 4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) > (((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) (_Bool)1))))) || (((/* implicit */_Bool) var_6)))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1 + 1] [i_2] [(short)9] [i_1 + 1] [13LL] [3U] = ((/* implicit */signed char) (_Bool)1);
                                arr_16 [i_0] [i_1 - 3] [(_Bool)1] [i_3] [i_4] [i_4] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-12022)))))) : ((~(arr_0 [i_0])))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_11 [i_4] [i_0]), (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [(unsigned char)19]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_1 + 4]))) : (arr_2 [21] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

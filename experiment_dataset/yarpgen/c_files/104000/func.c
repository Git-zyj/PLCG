/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104000
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
    var_14 = ((/* implicit */signed char) var_0);
    var_15 = ((/* implicit */signed char) ((_Bool) ((unsigned short) var_11)));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)817))));
        var_17 = ((/* implicit */unsigned long long int) (unsigned char)23);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (_Bool)1))));
        var_18 ^= ((/* implicit */unsigned long long int) arr_0 [(signed char)12]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned char)13)))), (arr_4 [i_2] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? ((~(var_1))) : (((/* implicit */int) ((short) (unsigned char)235))))));
                                arr_12 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) min((arr_6 [i_0 - 2]), (((/* implicit */long long int) arr_4 [i_1] [(short)0] [(signed char)6]))))))));
                                arr_13 [i_0] [i_3] [i_3] [i_2] [(_Bool)1] [i_0] = ((/* implicit */signed char) var_0);
                                var_20 = ((/* implicit */signed char) (+((~(((/* implicit */int) max(((unsigned char)20), ((unsigned char)20))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

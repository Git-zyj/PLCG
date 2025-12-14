/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113975
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */unsigned char) (+(arr_3 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_3] [i_3 - 3] [i_2] [i_2] [i_1] [i_1] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40351)) ? (((/* implicit */int) arr_9 [0] [(_Bool)1] [i_2] [i_4 - 1] [i_3 - 3])) : (var_10))))));
                                var_15 += ((/* implicit */long long int) (unsigned short)63571);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_2)) + (min((16935399171290749906ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (signed char i_6 = 1; i_6 < 17; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) 3920729451U);
                /* LoopNest 2 */
                for (unsigned int i_7 = 4; i_7 < 19; i_7 += 4) 
                {
                    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        {
                            arr_23 [11ULL] [i_7] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63571)) && ((_Bool)0)))), (var_1)))) ? (min((max((((/* implicit */unsigned long long int) var_2)), (var_1))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_7 - 2] [i_7 - 3] [i_7 - 1])) ? (arr_20 [i_7 - 1] [i_7 - 2] [i_7 - 1]) : (487838962))))));
                            arr_24 [i_6] [i_6 + 3] [i_7] = ((/* implicit */int) ((((/* implicit */int) arr_14 [i_8] [6] [i_6 + 3])) < ((-(((/* implicit */int) (_Bool)1))))));
                            var_18 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_22 [i_6 + 2] [(unsigned char)6] [i_5] [(unsigned char)6])) ? (3920729451U) : (((/* implicit */unsigned int) var_10))))));
                        }
                    } 
                } 
                arr_25 [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) min(((short)23822), (var_13)))), ((unsigned short)42026))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) var_3);
}

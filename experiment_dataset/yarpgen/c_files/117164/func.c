/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117164
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
    var_15 = ((/* implicit */signed char) ((var_11) ? (((/* implicit */int) min(((unsigned short)0), ((unsigned short)5)))) : (((/* implicit */int) max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) ((signed char) var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                var_16 = ((/* implicit */int) max((max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) ((unsigned short) -1033761419))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)18360)) : (-1558505651))))));
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_0 [(signed char)12] [i_3 + 2])) || (((/* implicit */_Bool) arr_0 [12] [i_3 - 1])))));
                                arr_13 [i_0] [(unsigned char)6] [i_0] [(short)8] [(_Bool)1] = ((/* implicit */int) (short)10304);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

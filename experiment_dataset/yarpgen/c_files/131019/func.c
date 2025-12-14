/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131019
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
    var_14 -= ((/* implicit */unsigned char) ((var_5) <= ((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
                    arr_6 [i_0] [i_0] [i_0] = ((int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (var_7))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((/* implicit */int) (short)-9611))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [(_Bool)1] [i_0] [i_0] [i_2 + 3] [i_0] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_1] [i_2 - 3] [i_3] [5])))))));
                                arr_14 [i_0 - 1] [i_3] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */int) (short)9612);
                                arr_15 [i_0 + 1] [0ULL] [0ULL] [i_0] [i_4 - 1] = ((/* implicit */signed char) var_4);
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(0ULL)))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned char)214))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_5] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))))), (18446744073709551615ULL)));
                                arr_24 [i_0] [i_1] [i_1] [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2 + 3] [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_18 [i_0] [(unsigned char)10] [(_Bool)0] [i_1])));
                                var_16 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

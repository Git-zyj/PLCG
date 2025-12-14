/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118271
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
    var_18 ^= ((/* implicit */long long int) var_3);
    var_19 = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)38552))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (4781765136019399393LL))) >= (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_1]))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((((var_12) + (9223372036854775807LL))) >> (((arr_1 [i_2]) - (13263665462669319018ULL))))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) (unsigned short)38549);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

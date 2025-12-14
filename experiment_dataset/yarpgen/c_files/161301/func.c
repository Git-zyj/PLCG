/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161301
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
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
    var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min(((unsigned char)217), ((unsigned char)120)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9641575316606557153ULL))), (9641575316606557172ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */signed char) ((unsigned short) (unsigned short)32891));
                                var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)16620))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) (short)15495));
            }
        } 
    } 
}

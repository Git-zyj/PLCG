/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182212
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
    var_18 &= ((/* implicit */short) ((((/* implicit */int) var_15)) >> (((max((((/* implicit */int) (short)12611)), ((~(((/* implicit */int) var_8)))))) - (12606)))));
    var_19 += ((/* implicit */long long int) ((((((((((/* implicit */long long int) ((/* implicit */int) var_15))) ^ (-9223372036854775790LL))) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)12611))) > (var_17)))))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((_Bool) (unsigned short)3636)) ? (((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [(unsigned short)6])) / (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned char)140))))) : (((unsigned int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    var_21 -= ((/* implicit */_Bool) ((unsigned long long int) 7482848407172081158LL));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [(signed char)9] [i_1] = ((/* implicit */unsigned int) ((signed char) var_4));
                                arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) 0ULL);
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */long long int) (+((~(((/* implicit */int) min(((unsigned short)34896), ((unsigned short)30646))))))));
                }
            } 
        } 
    } 
}

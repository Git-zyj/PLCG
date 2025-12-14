/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180862
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
    var_19 = ((/* implicit */int) min((min((3775509412U), (((/* implicit */unsigned int) var_8)))), (3775509426U)));
    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((-27), (((/* implicit */int) var_13))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32170))))))) : (((((((/* implicit */_Bool) (unsigned short)58929)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))) % ((((_Bool)1) ? (((/* implicit */int) (unsigned short)10742)) : (((/* implicit */int) var_13))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (+(-1)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_22 -= ((/* implicit */int) var_7);
                            var_23 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+((+(((/* implicit */int) var_1))))))), (2253365156U)));
                            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_3] [i_1 - 2] [6] [i_1 - 2]))));
                            var_25 = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
}

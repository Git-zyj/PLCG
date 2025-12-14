/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177725
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
    var_11 |= ((/* implicit */short) max((var_6), (((/* implicit */unsigned short) var_1))));
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_10))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((18150609389250681317ULL) >> (((((/* implicit */int) var_8)) - (8828))))))) << (((max(((~(-8161088952928247433LL))), (((/* implicit */long long int) (_Bool)0)))) - (8161088952928247423LL))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] &= ((/* implicit */unsigned short) (short)17739);
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_4))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] |= ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_6))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_7);
}

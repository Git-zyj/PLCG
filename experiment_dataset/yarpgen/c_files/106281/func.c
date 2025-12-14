/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106281
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [7] = ((/* implicit */long long int) arr_2 [i_0]);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((max((var_5), (((/* implicit */long long int) (short)20511)))) > (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65535)), (1538196030))))))) / (-1870632839)));
                var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) (short)4404)), (103079215104LL)));
                var_19 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                var_20 ^= ((/* implicit */unsigned int) 9223372036854775807LL);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((unsigned char) min(((~(((/* implicit */int) var_16)))), (-1538196031))));
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (min((7431991905302939457ULL), (((/* implicit */unsigned long long int) var_14)))))))))));
}

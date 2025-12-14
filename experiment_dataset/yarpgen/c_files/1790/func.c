/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1790
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
    for (int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_4 [i_0 - 1] [i_0] [i_1]))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) (~(((long long int) (short)-21318))));
                var_20 = ((/* implicit */_Bool) ((unsigned short) (~(((unsigned long long int) (_Bool)1)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((signed char) (unsigned char)21)))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                arr_12 [i_2] = ((/* implicit */unsigned short) ((short) (+((~(3214761686793633345LL))))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)255)))))))));
                var_23 = ((/* implicit */signed char) (+(((int) (-(-2152121123724717636LL))))));
            }
        } 
    } 
}

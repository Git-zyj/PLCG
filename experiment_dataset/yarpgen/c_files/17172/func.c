/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17172
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
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (unsigned char)72))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) var_1)))) ? (-4824998625586480452LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0 + 1] [i_0 + 1] [(unsigned short)5])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            {
                arr_11 [i_3] = ((/* implicit */short) (~((+(((/* implicit */int) arr_7 [i_2 + 2]))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (max((arr_9 [i_2 + 3]), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_10))))));
                arr_12 [i_2] = ((long long int) ((short) (unsigned char)240));
                var_18 = (short)-32767;
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_8);
    var_20 ^= ((/* implicit */_Bool) ((signed char) var_0));
}

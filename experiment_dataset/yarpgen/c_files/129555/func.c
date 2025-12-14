/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129555
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_1] [i_0]);
                arr_5 [i_0] [0] = ((/* implicit */unsigned short) (~(arr_3 [i_0] [i_1] [i_1])));
                arr_6 [(unsigned char)8] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-2288))));
                arr_7 [(unsigned short)10] [10ULL] [i_0] = ((/* implicit */unsigned short) (short)-2288);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-2285))))))) : ((~(((/* implicit */int) (unsigned short)50564))))));
    var_19 |= ((/* implicit */signed char) (unsigned short)50555);
}

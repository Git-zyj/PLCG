/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117592
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21806)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))))) : (17627166113024792859ULL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) (unsigned char)170);
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (~((+(((15496346323578629731ULL) >> (((/* implicit */int) arr_4 [i_1]))))))));
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned long long int) (-(-1158786874)));
}

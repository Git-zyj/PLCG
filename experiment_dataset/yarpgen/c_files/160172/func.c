/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160172
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
    var_13 = ((/* implicit */unsigned long long int) min((((min((var_1), (((/* implicit */int) (_Bool)1)))) ^ (min((614832924), (((/* implicit */int) (short)(-32767 - 1))))))), (((/* implicit */int) (short)-32763))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            {
                var_14 &= ((/* implicit */unsigned char) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))) == (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4294967273U)), (max((1966892201285287694LL), (((/* implicit */long long int) (unsigned char)72)))))))));
                var_15 = ((/* implicit */unsigned char) 57333303U);
                arr_5 [i_0] = ((/* implicit */short) max((-36816359), (((/* implicit */int) min(((unsigned char)15), ((unsigned char)223))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned long long int) var_5);
    var_17 = ((/* implicit */_Bool) (short)(-32767 - 1));
}

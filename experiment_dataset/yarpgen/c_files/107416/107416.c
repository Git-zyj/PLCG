/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_10 -= (min(((0 ? ((0 ? 17 : -117)) : (1 < -60))), ((9223372036854775807 ? 121 : 1))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_11 += (((((310136392333711658 ? 2045957015621307915 : 65524))) ? (((3999960240423793652 ? 19087 : 32742))) : 135));
                    arr_9 [i_1] [2] &= (((((255 ? 9223372036854775799 : 1)) % ((9 ? -17 : 9223372036854775807)))));
                    var_12 += ((((((((1650569385 ? 2045957015621307915 : 0)) != (1689518111 && 253))))) != (((248 * 0) ? 960 : ((1 ? 127 : 16400787058088243709))))));
                }
                arr_10 [i_1] = ((((min((-127 - 1), 1))) ? 24 : (max(((-6725674468800663819 ? 9223372036854775807 : 127)), 2))));
            }
        }
    }
    var_13 -= var_1;
    #pragma endscop
}

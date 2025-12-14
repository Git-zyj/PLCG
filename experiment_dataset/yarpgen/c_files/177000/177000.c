/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1963544601;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = 1963544623;
                                var_18 = (max(var_18, (((359907995 ? ((((1963544603 ? 2331422693 : -72)))) : (((1 && ((min(-9102, 65534)))))))))));
                            }
                        }
                    }
                    var_19 = (max(var_19, ((((max(1, 32797))) ? 3194055154 : 2331422693))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 = ((((((2331422686 << (1963544602 - 1963544573))) ^ -8242)) >> ((2331422666 ? ((1 >> (2331422693 - 2331422687))) : 1834496967174393983))));
                                var_21 = (((((1407722736 ? 3 : 2887244561))) ? ((2875047659 ? 2331422678 : 1)) : 43));
                                var_22 = (min(var_22, -23896));
                                arr_20 [i_0 - 1] [i_0] [i_2] [i_0] [i_0] = 2331422662;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= 1;
    #pragma endscop
}

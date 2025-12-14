/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= 3352728893090330935;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((((min(5402388970301980296, var_8)))) && (((var_1 ? 7803355627342107259 : (!var_9)))))))));
                    var_13 = max(((((max(var_9, 49456))) ? (1573937972226321148 / 9223372036854775807) : 1)), -var_5);
                    var_14 = ((!(((~(arr_5 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_15 = (((~((5857563473494556070 ? var_8 : -5857563473494556071)))) >> (((((var_4 % 3352728893090330934) ^ ((867455510336991570 ? var_8 : 58885)))) - 7602600216403933984)));
    var_16 = (max(var_16, var_1));
    var_17 = var_3;
    #pragma endscop
}

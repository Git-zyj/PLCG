/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (max(var_4, (0 * 44946)));
    var_12 *= 0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 *= ((!(((715898426516859823 ? (-2147483647 - 1) : 17730845647192691783)))));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_14 *= 715898426516859823;
            var_15 *= var_3;
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        var_16 *= (((((~((20589 ? 3787676677 : 17048718041308929287))))) ? (((max(44946, 32162)))) : (((((min(-31083, var_0)) + 9223372036854775807)) >> (5414423105960057586 - 5414423105960057565)))));
                        var_17 = (min(var_17, var_0));
                        var_18 = (max(var_18, ((min((min(var_1, (30065 * 146))), (((var_1 ? 4097269806 : (-9 + 1393900821)))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    {
                        var_19 = (min(var_19, (((15579502966640135236 ? (((!var_7) ? 2788426459 : ((0 ? 32704 : var_9)))) : (((((10741842622216581873 ^ -8761857564121274753) >= (((-699392471 ? 1 : 102))))))))))));
                        var_20 *= ((-13998297561928560148 ? (((((255 << (((-66 + 97) - 22)))) == -699392471))) : (((18165172868379011634 && (var_6 | 239))))));
                    }
                }
            }
        }
        var_21 *= ((!(((-5802120843582586699 ? (var_10 | -269317529) : 3255042247)))));
    }
    #pragma endscop
}

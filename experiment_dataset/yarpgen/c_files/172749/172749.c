/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (max(14032735304748510202, (((((var_8 ? var_1 : 6))) ? (((max(65530, 2)))) : ((536608768 << (var_4 - 16294266154268321306)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (((~0) ? (18446744073172942848 && 536608772) : ((-(~19)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 -= ((((((840992405 ? (arr_0 [i_2]) : 18446744073172942848)))) + -65530));
                                arr_15 [i_1 - 2] [i_0] [i_2 + 1] [i_3 - 2] [i_4] = ((-65529 * ((((~var_6) == ((65508 ? 536608768 : var_6)))))));
                                var_13 = (--255);
                                arr_16 [i_1] [i_1] [i_0] = (max(-var_4, -13871985852084735752));
                                arr_17 [i_0] [i_0] [i_1 - 3] [i_0] [i_3 - 2] [i_3] [i_4 + 1] = 7083934414275833364;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, ((((((var_0 ? (!var_6) : ((253 ? 3440717090837596876 : var_5))))) ? (((var_5 ? var_6 : (~10)))) : ((-(min(-3440717090837596850, 65525)))))))));
    var_15 = (((~65534) != (~103)));
    #pragma endscop
}

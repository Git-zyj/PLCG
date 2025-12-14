/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 = (max(((((min(100, 100))) ? ((-6198339502073396837 ? 167 : 9223372036854775807)) : (min(156, 0)))), -2896749346269178656));
                                arr_12 [i_0] [i_1] [i_0] = (min(100, 156));
                            }
                        }
                    }
                    var_15 = (((max((max(432345564227567616, -320443265)), ((min(-71, -21594))))) >> ((((~((87 ? -27543 : 0)))) - 27503))));
                    var_16 ^= (min(((((min(503316480, 0))) && -3791650826)), ((1 < (3791650826 <= -124)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_17 = -1;
                                arr_19 [1] [i_1] [i_0] [24] [i_0 - 2] [i_6] = (min(((((max(-7561607829839580348, -6670947949125990132))) ? (-31017 - 35083) : ((235 ? 1 : 49052)))), ((min(51909, 1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_18 = max((min((-9223372036854775807 - 1), (~9223372036854775807))), 137438953471);
                                var_19 = (min((max((max(7998782454349980058, 20229)), (-24 <= 219))), (((((max(31017, 100)))) + (min(-17025, -8128574923253140892))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(((((3791650816 ^ 49052) - var_11))), var_1));
    #pragma endscop
}

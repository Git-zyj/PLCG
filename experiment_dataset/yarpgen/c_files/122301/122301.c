/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-((var_7 ? var_6 : 18116900106331554940))))) ? var_3 : (((((var_6 ? var_2 : var_2))) ? ((var_6 ? var_0 : 1)) : (((min(1, 1))))))));
    var_13 *= (((((-75 ? 74 : -86))) ? (((((!12521362039490843898) != ((max(55, -56))))))) : (min(((var_10 ? 213 : var_11)), var_10))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (max((127 / -5024598471940779766), ((((((arr_1 [3] [3]) ? (arr_1 [i_0] [i_0]) : var_8))) ? var_2 : (((arr_0 [i_0]) ? 179 : 18446744073709551602))))));
        arr_3 [i_0] = ((((-1 ? 5024598471940779777 : 370079277)) != -5024598471940779773));
    }
    for (int i_1 = 2; i_1 < 6;i_1 += 1)
    {
        var_15 = ((((((((var_0 ? (arr_7 [i_1]) : (arr_0 [i_1])))) ? (arr_6 [i_1 - 1]) : (max(var_4, -6888778894607494768))))) ? (+-21) : (var_5 + -1)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 6;i_5 += 1)
                        {
                            {
                                arr_19 [i_4] [i_4] [i_4] [i_4] [0] [i_4] [i_4] &= ((((+(((arr_0 [i_2]) ? 69122499738444445 : var_7))))) ? ((max(3689263416, (arr_9 [i_5 + 2] [i_5] [i_1 + 4])))) : ((((var_6 ? var_7 : var_8)) - ((1 ? var_0 : (arr_7 [i_3]))))));
                                var_16 = ((-(((arr_4 [i_1 + 3]) ? (min(2147483638, 1095664976)) : (max((arr_2 [i_1] [i_2]), var_11))))));
                                arr_20 [i_5] [i_5] [i_1 - 2] = max((-2147483647 - 1), 6551716258373085929);
                            }
                        }
                    }
                    var_17 = ((((max((!1), var_6))) < ((38 ? 6888778894607494768 : -25))));
                    var_18 *= ((1 ? ((((((min(-6888778894607494792, (arr_10 [5] [i_3])))) || (((-1 ? var_11 : var_11))))))) : ((var_6 ? var_1 : var_2))));
                }
            }
        }
    }
    #pragma endscop
}

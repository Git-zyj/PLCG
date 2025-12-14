/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max((max(158, 1346836849590764414)), (179 <= 28))) > (((max((99 < var_5), 228))))));
    var_13 = (((248 > var_11) ^ (((!((max(13065229761041590463, 3453281119))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (arr_3 [i_0]);
                var_14 = (i_0 % 2 == zero) ? ((((((142 >> (((arr_0 [i_0]) + 22029))))) ? ((((max(1619205398833733682, (arr_0 [i_0]))) == (((max((arr_0 [i_0]), (arr_4 [i_0 + 1] [i_0])))))))) : (max((((160 || (arr_2 [i_0])))), (((arr_0 [i_0]) % 6199))))))) : ((((((142 >> (((((arr_0 [i_0]) + 22029)) - 32758))))) ? ((((max(1619205398833733682, (arr_0 [i_0]))) == (((max((arr_0 [i_0]), (arr_4 [i_0 + 1] [i_0])))))))) : (max((((160 || (arr_2 [i_0])))), (((arr_0 [i_0]) % 6199)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_2] [i_2] &= ((((~((95 ? 220 : (arr_6 [i_0] [i_2]))))) >> (153 - 136)));
                                var_15 = ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((((arr_2 [i_0]) < (arr_2 [i_0]))))) : (min(841686176, (arr_2 [i_0])))));
                            }
                        }
                    }
                }
                var_16 = (max((-841686176 + 248), (((((arr_3 [i_0]) ? -7018531208316080666 : 42110)) ^ ((((arr_12 [i_1]) * (arr_3 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}

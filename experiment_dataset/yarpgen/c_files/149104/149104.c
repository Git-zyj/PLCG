/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((-14069 % -1389688943) == (max(var_1, var_6)))))) - (max((1389688934 / -1884773105027894433), ((max(45, -115)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [6] = (max(((min((((-12853 >= (arr_0 [i_0] [i_4])))), (min((-9223372036854775807 - 1), -12830))))), (min(((max((arr_5 [i_0] [i_2]), 1389688942))), (max(var_4, 18446744073709551615))))));
                                arr_14 [i_2] = (min((min((max((arr_10 [i_3]), -12861)), (((var_9 <= (arr_2 [i_1])))))), (((103 | (-666346173 ^ 201953994))))));
                                var_13 = ((((min((19707 <= -201953976), (((arr_7 [i_4] [i_4] [i_2] [i_3]) <= 157))))) >= ((((max((arr_1 [i_4]), (arr_11 [i_0] [i_1] [i_2 - 2] [i_3] [5])))) >> (((((arr_3 [i_2] [i_2]) | 1389688930)) + 1194))))));
                            }
                        }
                    }
                    var_14 = (min((max((min(-6359, var_4)), ((((arr_8 [i_0]) && (arr_2 [i_2])))))), (((var_4 && var_4) / (min(var_7, (arr_1 [7])))))));
                    arr_15 [i_2] [i_1] [i_2] = (max(((min((((var_0 && (arr_1 [i_0])))), (min(126, 12832))))), (((((arr_11 [6] [i_1] [i_1] [i_1] [i_1]) ^ (arr_5 [i_0] [i_2]))) ^ ((max(-31, var_6)))))));
                }
            }
        }
    }
    var_15 = (((((var_1 | var_2) % (63539 >= var_11))) < ((((max(-11493, 2423987120)) - (1992 - 0))))));
    var_16 = (min(((max((8 ^ 19), ((max(1, 11492)))))), (min((min(var_1, var_10)), ((min(-9801, var_11)))))));
    #pragma endscop
}

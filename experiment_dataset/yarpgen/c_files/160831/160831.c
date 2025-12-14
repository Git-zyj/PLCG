/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-2864818489151728095 ? -2864818489151728095 : (min(11217758915059860198, (-2864818489151728095 >= -2864818489151728086)))));
    var_17 = ((((max(((max(51201, 14335))), (15393 | 32187)))) ? (((max(51206, 9773026477726045243)) >> (((min(var_4, var_9)) - 11822207553138141591)))) : (-2864818489151728095 < 5665061997366461067)));
    var_18 = (max((max(var_2, (max(var_11, -21334)))), (min(((-1 ? 31183 : 1362793080780134791)), var_10))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(((max((arr_5 [5] [5]), (((-1362793080780134791 ? var_5 : (arr_2 [i_0]))))))), 2058569648983899610));
                arr_7 [i_0] = 51206;
            }
        }
    }
    var_19 = ((((max((2645302063 != var_5), ((var_13 >> (9773026477726045243 - 9773026477726045224)))))) | 1362793080780134815));
    #pragma endscop
}

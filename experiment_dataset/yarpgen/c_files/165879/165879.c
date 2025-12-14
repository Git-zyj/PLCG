/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((((var_3 >> (((arr_0 [i_0] [i_1]) + 75)))) & (arr_5 [i_1] [i_0] [i_1])))) ? (((((((arr_4 [i_1] [3]) ^ var_6))) ? (min(6364366383196217039, (arr_1 [i_1]))) : ((min(13181, (arr_2 [i_0]))))))) : 6364366383196217039));
                arr_7 [i_0] [i_0] [i_0] = (!var_9);
            }
        }
    }
    var_14 ^= (((16128 + 6164464809475299716) ? (((var_8 ? var_12 : var_5))) : var_8));
    var_15 = (((((!var_9) >> (!var_2)))) ? (~4294951167) : (var_2 && -102));
    var_16 = var_9;
    #pragma endscop
}

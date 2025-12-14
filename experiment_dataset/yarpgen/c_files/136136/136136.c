/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = var_0;
        var_15 |= ((((58566 ? 67092480 : 116))) <= 1108616422224967425);
        var_16 = 554662749;
        arr_2 [i_0] = (((((3217058427 < var_6) ? (arr_0 [i_0] [i_0]) : 1))) ? (((((87 ? 6965 : (arr_0 [19] [19])))) ? 0 : ((9705204877036251532 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))) : (((9705204877036251519 ? var_7 : 1))));
    }
    var_17 ^= ((0 ? ((((min(9705204877036251512, var_9)) <= (!49152)))) : (min(-1, ((var_9 ? 140 : var_5))))));
    var_18 = ((-((((min(82, var_5))) ? var_8 : (~1)))));
    #pragma endscop
}

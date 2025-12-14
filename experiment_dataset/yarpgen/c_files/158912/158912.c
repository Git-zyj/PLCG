/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((((1 ? 1917498685 : 7087))) ? (((18446744073709551608 ? 4516677242621194975 : -4516677242621194975))) : 2314184083891063999));
        arr_3 [i_0] = -4516677242621194976;
        arr_4 [i_0] [i_0] = ((58456 ? -1516118958 : 1152921504606846975));
        arr_5 [i_0] [i_0] = 2806076819;
    }
    var_11 = ((((((65535 ? -1516118962 : 1184887454515054397)))) ? ((13392496126289100759 ? 4516677242621194970 : -69)) : var_4));
    var_12 = var_2;
    var_13 = -1516118949;
    #pragma endscop
}

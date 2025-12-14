/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_15 | var_17) > ((var_10 ? var_15 : var_8))))) != (((((var_2 << (((-3622215321860967423 + 3622215321860967429) - 6))))) ? (var_10 >= var_13) : (var_2 / 65535)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (2803 > 16339);
        arr_3 [i_0] [i_0] = ((((((32767 <= 6923) ? ((var_19 ? var_18 : 39028)) : ((var_19 & (arr_0 [i_0])))))) && ((((((arr_0 [2]) >= (arr_1 [i_0])))) != ((var_3 | (arr_1 [3])))))));
        arr_4 [i_0] = (((((((var_17 ? var_14 : (arr_1 [i_0])))) ? (((175854826 != (arr_0 [4])))) : ((var_9 ? 410617621 : 1)))) & ((((((57344 ? var_8 : 64512))) && (var_5 & var_19))))));
    }
    var_21 = (((((-9160875608208855741 != 61979) % ((-7036 ? 16982 : 48559)))) == ((1052673947 ? 27399 : 1024))));
    #pragma endscop
}

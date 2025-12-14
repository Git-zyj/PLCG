/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((-1 ? (((4294967283 ? 54 : 201))) : 4294967286))) ? 1 : (max(3447289729, 1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (max((((((min(-8161252878550772392, -9223372036854775787))) ? -23791 : (min(4, 2224769695))))), (min((min(4294967293, 2934108349788859126)), ((((-2147483647 - 1) ? 1 : -427363499)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = 23798;
                    var_14 = (max(var_14, (((18446744073709551612 ? (~4294967286) : ((~((201 ? 57572 : -23778)))))))));
                    arr_9 [i_1] [i_0] = (max(-8161252878550772405, 192));
                }
            }
        }
    }
    #pragma endscop
}

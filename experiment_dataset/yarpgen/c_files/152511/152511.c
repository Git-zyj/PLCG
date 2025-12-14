/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_0] = (min(((((min(3853, 0))) ? (39654 / 61682) : (61683 < -31249))), ((max(8190, 61682)))));
                            arr_11 [i_0] [i_1] [i_0] [i_2] [1] = (max((((65532 || (~31249)))), (max(61683, (-941195936 || 1)))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((((min(-7487050868023877639, 108)) + 118)));
                            arr_13 [i_0] = (max((((max(-108, 1618923766)) % (((min(1, 1)))))), ((max((118 / 511653970), -60)))));
                        }
                    }
                }
                arr_14 [3] [i_0] [i_1] = (max(4, (((1019587871 ^ ((((((-127 - 1) + 2147483647)) << 0))))))));
            }
        }
    }
    var_11 = 0;
    var_12 = (max((((0 == ((max(5593792811674243794, 1)))))), (((-5183928916976394210 / 584194405) / -30))));
    var_13 = ((65535 / (3853 & -458888826)));
    var_14 = (max(var_14, ((((((max(777662377, 1)) & (123 == 32767))) <= ((((-32767 - 1) - -781087118))))))));
    #pragma endscop
}

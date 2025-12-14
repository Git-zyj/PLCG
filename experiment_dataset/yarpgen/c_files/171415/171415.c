/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((max((min(3762152634, 3762152612)), ((max(1280620921, 0)))))), (min((min(532814661, 17952997396943753159)), ((min(532814681, 32759)))))));
    var_15 = (max(1794661507, 737659814));
    var_16 |= (max((min(((max(-2147483637, -103))), 532814661)), ((min((min(23037, 2147483636)), (23015 + -581060549))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (max((-32767 - 1), (max(((min(97, 97))), 15601))));

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1 + 1] = ((((min((218 != 532814661), -70))) / (((max(71, -374347864)) + (max(43, -1715606972))))));
                    arr_11 [i_0] [14] [i_0] = max(9314757732774532922, 192);
                }
                var_17 = ((-2147483637 % (max((9314757732774532922 && 30), (min(3762152635, 4294967294))))));
            }
        }
    }
    var_18 |= (max(((min((min(532814634, 185)), 1026592323))), (((min(-30, 4026531840)) & -647518859))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1 <= 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (min(((((((-14287 ? 14295 : 14286))) ? ((-2243 ? 1417 : 65532)) : 141))), ((((min(823333160, 12454833928225195609))) ? (((1039634230 ? 14285 : 717633442))) : ((244977730 ? 168 : 9128027884028496197))))));
                    var_20 *= -14285;
                    arr_6 [i_0] [i_0] [i_1] = -14295;
                    arr_7 [6] [i_1] [i_1] [i_0] = 7099254494652895637;
                    arr_8 [i_1] [i_1] [i_1] = (((max((-14286 && 1), 0))) || 12454833928225195585);
                }
            }
        }
    }
    #pragma endscop
}

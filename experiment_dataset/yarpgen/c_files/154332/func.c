/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154332
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = var_13;
    var_16 = ((/* implicit */int) var_0);
    var_17 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (short)19504);
        arr_4 [i_0] [i_0] = -457852235;
        arr_5 [i_0] = ((/* implicit */unsigned char) (signed char)117);
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (signed char)107))));
                        var_19 = ((/* implicit */signed char) (unsigned char)255);
                        var_20 = -440635369;
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */signed char) (short)-32763);
        var_21 = ((/* implicit */int) (unsigned char)142);
        var_22 = ((/* implicit */_Bool) (signed char)126);
    }
    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_23 = ((/* implicit */_Bool) -788473193);
        arr_21 [i_5] = ((/* implicit */_Bool) (unsigned char)248);
    }
}

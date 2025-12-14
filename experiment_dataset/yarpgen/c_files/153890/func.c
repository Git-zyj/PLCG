/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153890
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) << (((max((((/* implicit */long long int) (unsigned short)41575)), (-5263720948550817850LL))) - (41572LL))))) + (((/* implicit */int) var_6)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) (unsigned short)24752);
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (1019336713)));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) (unsigned short)63488);
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_4))));
    }
    for (signed char i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) ((3690138235U) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1092142044U))))));
        var_17 = ((/* implicit */unsigned short) (unsigned char)64);
        var_18 ^= ((/* implicit */unsigned int) ((int) ((unsigned short) var_5)));
        var_19 *= ((/* implicit */unsigned char) arr_5 [i_2]);
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1932)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (max((3853678186U), (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                        var_21 = ((/* implicit */unsigned short) 3202825251U);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) (unsigned short)65067);
    }
}

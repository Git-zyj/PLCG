/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18557
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
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
        var_16 = ((/* implicit */_Bool) ((-2115941105) / (((/* implicit */int) (unsigned short)60221))));
    }
    for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63)) ? (0ULL) : (((/* implicit */unsigned long long int) 1849555409U)))))));
        var_18 = ((/* implicit */unsigned short) (unsigned char)86);
        var_19 = var_1;
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-24597))))) ? ((+(((/* implicit */int) arr_3 [i_1 - 1])))) : (((((/* implicit */_Bool) 233715772)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [(unsigned short)1] [i_1 + 1]))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_20 = ((/* implicit */short) (unsigned char)255);
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1251194097U)) && (((/* implicit */_Bool) (unsigned short)57463)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24597))) : (((((/* implicit */_Bool) ((unsigned short) 0ULL))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : (3043773202U)))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 4; i_4 < 11; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    {
                        arr_18 [i_4] [i_4] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((5012999780936556866LL), (((/* implicit */long long int) min((3043773198U), (((/* implicit */unsigned int) var_2)))))))) ? ((-((-(((/* implicit */int) arr_4 [i_2] [i_2])))))) : (((/* implicit */int) var_6))));
                        var_22 = ((((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL))))) + (((unsigned long long int) arr_9 [i_4 - 3])));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((((/* implicit */_Bool) (short)-5600)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (4ULL))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((2115941104), (2115941117)))))))) : ((+(max((((/* implicit */unsigned long long int) var_0)), (15489779712599357261ULL)))))));
}

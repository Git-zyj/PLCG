/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162998
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (_Bool)1))));
        var_19 *= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65527))));
        arr_2 [i_0] [7LL] = ((/* implicit */signed char) (~((~(((arr_0 [i_0] [9]) ? (var_12) : (((/* implicit */int) (unsigned char)100))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_0 [i_1] [i_2 - 1]))));
                    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-7603)) + (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_11 [(unsigned short)3] [i_2] [(short)16])))) : (((((/* implicit */_Bool) (unsigned char)203)) ? (var_7) : (((/* implicit */unsigned long long int) 2147483645))))));
                    var_22 &= ((/* implicit */long long int) var_17);
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_17))) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) ((var_11) && (((/* implicit */_Bool) (unsigned short)65527))))))))));
                    var_24 = ((/* implicit */unsigned short) (-(11637428471941306435ULL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) var_7);
        var_26 = ((/* implicit */signed char) var_11);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_27 = ((/* implicit */unsigned short) var_12);
        var_28 = (unsigned char)0;
        var_29 |= ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_5])), (arr_15 [i_5])))) % (((/* implicit */int) arr_15 [i_5]))));
    }
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2251799813685247LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (short)7602))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) -7063328594095166108LL))));
}

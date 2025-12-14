/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12712
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (11275431120951225850ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13975)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) (unsigned short)54554);
        var_20 *= ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 3]))))));
        var_21 *= ((/* implicit */short) (-(((/* implicit */int) max(((short)24822), (var_3))))));
        arr_3 [(_Bool)1] = ((/* implicit */signed char) 16432593091304971049ULL);
        var_22 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_2 [i_0 + 3] [i_0])) / (((/* implicit */int) (signed char)-22)))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (-(-1892538070555125501LL)));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) var_13)))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_24 *= ((/* implicit */_Bool) -956080434392769836LL);
        var_25 = (_Bool)1;
        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2896989504U)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2]))))) ? ((-(((/* implicit */int) (unsigned short)29689)))) : ((+(((/* implicit */int) var_14)))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */long long int) arr_0 [i_3]))));
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_5] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)30593))))) ? (((arr_10 [i_3 + 1] [i_4 - 1]) ? (arr_1 [i_3 + 1]) : (arr_1 [i_3 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-7))))));
                    var_28 *= ((/* implicit */int) ((_Bool) var_11));
                    var_29 = ((/* implicit */unsigned long long int) 4187353958U);
                    var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)16383))));
                    var_31 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 510102976)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (538711315U))) : (((((/* implicit */_Bool) (short)26103)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) : (3210479897U)))))));
                }
            } 
        } 
        arr_18 [i_3] = ((/* implicit */signed char) min((var_6), (((/* implicit */long long int) var_4))));
        arr_19 [i_3] [i_3 + 1] = ((/* implicit */_Bool) arr_11 [i_3 + 1]);
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
    {
        var_32 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_14)), (arr_12 [11] [(signed char)16] [i_6])));
        var_33 = ((/* implicit */unsigned short) -2096463484);
        arr_23 [i_6] [20U] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_6 + 1]))))), (min((((((/* implicit */_Bool) 9176241244730834079LL)) ? (95836683U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) var_3))))));
    }
}

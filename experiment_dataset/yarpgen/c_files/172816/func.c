/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172816
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
    var_10 = ((/* implicit */unsigned long long int) var_5);
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_8)) ? (11609746708012749318ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56139)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6836997365696802297ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56151))) : (var_6)))) ? (((130048U) | (3654496132U))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16199633012092116163ULL)) ? (3654496135U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))))));
        var_12 = ((/* implicit */signed char) (-((+(2142180449U)))));
        var_13 -= ((/* implicit */short) (+(((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (signed char)-62))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) <= (var_7))))) : (min((var_4), (((/* implicit */unsigned int) arr_1 [i_0 + 2]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_14 += ((/* implicit */short) (+((-(((/* implicit */int) var_3))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                {
                    {
                        arr_12 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) min((arr_10 [i_4] [i_1] [i_2] [i_1]), (max((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [6U] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_2))))));
                        var_15 = ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_3]))) & (2288170196U))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
                        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((short) 2247111061617435452ULL))) * ((~(((/* implicit */int) (unsigned short)11422)))))), (((/* implicit */int) ((((/* implicit */int) (short)11928)) == (((/* implicit */int) arr_7 [i_3] [i_4 + 1] [i_4 + 1] [i_4 - 3])))))));
                    }
                } 
            } 
        } 
    }
}

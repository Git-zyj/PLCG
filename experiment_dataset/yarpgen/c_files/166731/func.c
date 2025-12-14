/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166731
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) ((((((var_4) || (((/* implicit */_Bool) (short)6144)))) && (((((/* implicit */_Bool) 6447826080450175947LL)) && (arr_5 [i_0 + 1] [i_1]))))) ? ((((!(((/* implicit */_Bool) (unsigned short)58813)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17392792550346325423ULL))))) : (((/* implicit */int) max(((signed char)47), ((signed char)-126)))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) -1789524508176649300LL)))))))));
                    var_18 ^= ((/* implicit */short) ((arr_1 [i_1]) == (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (min((var_15), (((/* implicit */unsigned int) (unsigned short)21288)))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) 8961119084992739231ULL))));
        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)64)) - (50)))))) ? (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_0 + 2] [i_0])) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_0 - 1])))) * (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-1364)) : (((/* implicit */int) (short)-1))))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_8))))), (arr_9 [i_3])));
            var_22 = ((/* implicit */_Bool) min((min((arr_9 [i_3]), (arr_9 [i_3]))), (((/* implicit */unsigned char) min((var_14), ((signed char)56))))));
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_23 = ((/* implicit */_Bool) arr_9 [i_3]);
            var_24 = ((/* implicit */int) (signed char)8);
        }
        var_25 = ((/* implicit */_Bool) (~((~(2826478125500832542ULL)))));
    }
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((var_1) ? (((unsigned long long int) min((2027825668), (((/* implicit */int) (short)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134217728)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_15)))))))));
    var_27 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_3)) ? (17392792550346325423ULL) : (((/* implicit */unsigned long long int) -1322306533)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))), (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))), (((/* implicit */int) (_Bool)1)))))));
    var_28 = ((/* implicit */unsigned long long int) var_4);
}

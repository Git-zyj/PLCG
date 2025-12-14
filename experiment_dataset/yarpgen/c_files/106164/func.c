/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106164
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((2147483647), (2147483647)))) ? (arr_0 [i_0] [i_1]) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (arr_1 [i_0])))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_0 [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                arr_4 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5)));
                var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_3 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (arr_0 [i_0] [i_0])))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17679)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))), (max((arr_2 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) var_10))))))));
                arr_5 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((var_1) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])))))))), (((((arr_0 [i_0] [i_1 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)14610))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) -712387102902351936LL)) ? (-2147483647) : (((/* implicit */int) (short)-14625)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 4220623089U)) ? (3174796928524406015LL) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (unsigned short)45841))));
            }
        } 
    } 
    var_14 = (_Bool)0;
    var_15 = ((/* implicit */unsigned short) var_6);
    var_16 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (unsigned short)65529)), (8000800357115792275ULL))) >> (((var_10) + (507902130120302743LL)))));
    var_17 = ((/* implicit */unsigned short) var_0);
}

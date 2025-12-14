/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165106
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
    var_13 = ((/* implicit */int) max((((/* implicit */unsigned int) (!((!(var_2)))))), (max((max((((/* implicit */unsigned int) var_2)), (var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2312647539U)) ? (((/* implicit */int) (unsigned short)57089)) : (((/* implicit */int) (signed char)-66)))))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_4)), ((short)16761)))) ? (((((/* implicit */_Bool) var_12)) ? (var_3) : (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) var_12)))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_10))))) : (max((((/* implicit */long long int) max((((/* implicit */int) (signed char)0)), (var_1)))), (min((var_7), (((/* implicit */long long int) 1619792186))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_8 [2ULL] [i_1] [i_2] |= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_2 [i_0 + 1])))) ? (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (short)-22283)) : (((/* implicit */int) var_4)))) : ((~(arr_5 [i_0])))))), ((+(max((arr_4 [i_0]), (((/* implicit */long long int) var_4))))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 176997488U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 31)), (2312647562U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2145646933))))) : ((-(-10)))))) : (max(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) 183644551U))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) (unsigned char)218))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (2097151) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_0)) ? (1982319738U) : (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)50284)))) ? ((+(var_9))) : (((((/* implicit */_Bool) 7394262301954757597ULL)) ? (((/* implicit */int) (_Bool)1)) : (-1610342086))))))));
}

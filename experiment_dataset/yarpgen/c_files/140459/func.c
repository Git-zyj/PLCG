/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140459
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7731158574378875788LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3037)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 7731158574378875788LL)) : (var_3)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60892)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)47935))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((3380258026U), (((/* implicit */unsigned int) var_2)))))))));
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))) < (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) -7731158574378875790LL)) ? (7731158574378875788LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)156)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9457))) : (arr_1 [i_0])))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 426676688)) ? (arr_1 [i_1 + 2]) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0] [i_0])), (arr_8 [i_0] [i_0] [i_1] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))));
                    arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2530)) ? (-154545306) : (((/* implicit */int) (short)-3044))))) ? (((/* implicit */unsigned int) arr_8 [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 2])) : (arr_1 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */long long int) 3403777740U)) : (arr_0 [i_0])))) ? (((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2 - 1])) : (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (short)-3044)) : (154545307)))))));
                }
            } 
        } 
    } 
}

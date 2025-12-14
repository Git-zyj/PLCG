/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117005
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) arr_1 [i_0] [i_1])), ((+(((/* implicit */int) arr_0 [i_2 + 1]))))));
                    var_14 ^= ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]))))))))) <= (min((var_3), (((/* implicit */unsigned long long int) ((unsigned int) (signed char)84))))));
                    var_15 *= ((/* implicit */signed char) ((var_4) & (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 4204035932U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))) : (var_13))) : (max((978019484U), (((/* implicit */unsigned int) (signed char)7))))))));
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */unsigned short) (-(var_2)));
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7650194214891053035ULL)) ? (var_8) : (((/* implicit */long long int) 4294967295U))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-92))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_4))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    arr_15 [i_3] [i_4] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_9))) ? ((((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */int) arr_2 [i_5 - 1] [i_4 - 1] [i_5 + 1])) & (((/* implicit */int) (signed char)-34)))) : (((/* implicit */int) (signed char)124)))) : (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) arr_12 [i_3])), (var_4)))))));
                    arr_16 [i_3] [i_4] [i_3] = (+(((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5] [i_4] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_13 [i_3] [i_4] [i_4] [i_5 - 1])))) : (6095679682690393240ULL))));
                }
                arr_17 [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_3] [i_3])) ? (((/* implicit */int) ((_Bool) var_13))) : (((/* implicit */int) arr_3 [i_4 - 1] [i_4])))) % ((~(((/* implicit */int) (signed char)-22))))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (16557442549002898997ULL))) & (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) (signed char)56)) : (-300433728))))))));
}

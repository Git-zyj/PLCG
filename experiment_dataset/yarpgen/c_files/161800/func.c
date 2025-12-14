/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161800
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((11184545575542496860ULL) >> (((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [2ULL] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32034))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (-6791195119964146044LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [7ULL] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)33501)))))))) ? (max((((/* implicit */unsigned int) var_9)), (4294967281U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (min((arr_1 [i_0 - 1] [i_0 - 1]), (3953997935893034146LL))) : (arr_1 [i_0 + 1] [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-20486)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535)))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) - (arr_1 [(signed char)4] [1ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)20489)))));
    }
    for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            arr_10 [(unsigned short)4] [(unsigned short)4] |= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 2])) > (((/* implicit */int) arr_5 [i_1 + 2]))))) > (max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (short)-20488))))), (((592470761) / (((/* implicit */int) var_2))))))));
            arr_11 [i_1] [0LL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+((~(arr_6 [i_1] [i_2 + 1])))))) ? ((+(arr_7 [i_2] [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_1] [i_2 - 1])), (-6791195119964146044LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(signed char)1] [i_1])) ? (((/* implicit */int) (short)20489)) : (((/* implicit */int) arr_5 [i_2]))))) : (arr_1 [i_1] [i_2]))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_14 [i_3] [i_3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((592470784) - (((/* implicit */int) (short)-20486))))))) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) var_5))));
                arr_15 [i_1] [i_2] [i_3] = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)149)) <= (((/* implicit */int) (unsigned short)33481)))))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_3]))))), (min((((/* implicit */long long int) 592470784)), (arr_1 [i_3] [i_1])))))));
                arr_16 [i_2] [i_2] [5U] = ((/* implicit */short) ((((/* implicit */_Bool) (short)20495)) ? (max((arr_12 [i_2] [i_2] [i_2 - 1] [i_2]), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)20457), (((/* implicit */short) (unsigned char)86))))))));
            }
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            arr_19 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((short) ((unsigned char) (signed char)78)));
            arr_20 [i_4] [i_4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (arr_7 [i_1] [(unsigned char)8]) : (((/* implicit */unsigned long long int) ((long long int) (unsigned char)147)))));
            arr_21 [i_4] = ((/* implicit */long long int) 0U);
        }
        arr_22 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)33461), ((unsigned short)63507)))) ? ((+(max((((/* implicit */int) (short)-20495)), (-592470762))))) : (((/* implicit */int) max((arr_5 [i_1 + 2]), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)149)) == (((/* implicit */int) var_1))))))))));
        arr_23 [i_1] [i_1] = var_13;
    }
    var_15 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) ? ((((_Bool)0) ? (max((((/* implicit */int) (short)64)), (-592470783))) : (((/* implicit */int) (unsigned short)32034)))) : (((/* implicit */int) (unsigned char)149))));
    var_16 = ((/* implicit */unsigned int) var_4);
    var_17 = ((/* implicit */unsigned long long int) (unsigned char)77);
}

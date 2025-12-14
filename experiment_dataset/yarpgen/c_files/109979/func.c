/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109979
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_11 = ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
            arr_8 [i_1] [(signed char)17] [i_0] = ((/* implicit */int) ((unsigned char) var_6));
            arr_9 [i_1] [i_0] = ((/* implicit */long long int) ((var_6) & (var_2)));
            arr_10 [i_0] = ((/* implicit */unsigned short) var_9);
            var_12 += (+((-(((/* implicit */int) ((16727036090428174340ULL) == (((/* implicit */unsigned long long int) var_1))))))));
        }
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) 16727036090428174340ULL))));
            arr_14 [(signed char)13] [i_0] [i_0] = ((/* implicit */unsigned short) max(((-(var_9))), ((+(1719707983281377267ULL)))));
        }
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            arr_18 [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4398046511100ULL)) ? (((/* implicit */unsigned int) 2147483644)) : (var_2)))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193)))));
            arr_19 [i_0] [(_Bool)1] [(_Bool)1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 16727036090428174348ULL)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((16727036090428174353ULL) == (1719707983281377263ULL)))) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -7864272183243977150LL)) <= (16727036090428174353ULL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
        }
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (var_9)))), (-1014763258)))), (max((((/* implicit */unsigned long long int) var_2)), ((-(1719707983281377267ULL)))))));
        var_15 += ((((/* implicit */_Bool) (-(4046711009U)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (16727036090428174353ULL) : (var_4))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235)))))) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) (short)-30)))));
    }
    var_16 = ((/* implicit */int) (!(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (846111969U))) <= (var_3)))));
}

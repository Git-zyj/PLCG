/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110686
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4378623266127907276LL)) ? (((/* implicit */int) ((((/* implicit */int) (short)255)) != (((/* implicit */int) (unsigned short)27717))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)252)))))));
                var_16 = ((/* implicit */unsigned short) ((var_4) ? (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)227)), (((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4378623266127907275LL)) ? (5671949518567825171LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_3 [i_0]))))) : (min((((/* implicit */long long int) arr_5 [i_0])), (arr_4 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) var_11))), (var_12))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
    }
    for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 2) /* same iter space */
    {
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_10))) | (arr_10 [i_3] [i_3]))), (((arr_10 [i_3] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3])))))))) ? (((((/* implicit */_Bool) arr_9 [i_3 - 2])) ? (((/* implicit */unsigned long long int) (~(arr_9 [i_3 - 3])))) : (max((((/* implicit */unsigned long long int) var_15)), (var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_3])) > (((/* implicit */int) var_1))))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))) : (var_7))) - (18446744073709551498ULL))))))));
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_11 [i_3 + 1])) : (((/* implicit */int) var_15))))) ? (max((0U), (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-249)))));
    }
    var_22 = ((/* implicit */unsigned long long int) min((9177381938639009206LL), (((/* implicit */long long int) (signed char)16))));
}

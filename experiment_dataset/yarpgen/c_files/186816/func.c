/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186816
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
    var_11 = ((/* implicit */unsigned long long int) var_9);
    var_12 = ((/* implicit */signed char) (!(var_1)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_13 -= ((/* implicit */signed char) (+(((/* implicit */int) max(((short)-32757), (((/* implicit */short) arr_1 [i_1] [i_0 + 1])))))));
            arr_5 [i_0 + 1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)25)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)13))))))));
        }
        var_14 -= ((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned char)9)))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) <= (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((((/* implicit */_Bool) -302310070)) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) var_7))))))));
        arr_6 [i_0 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65517))))) ? (((unsigned long long int) arr_0 [(unsigned short)8] [i_0])) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (157294344U)))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65533)))))));
    }
    var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(var_4)))) ? (max((-6194840082756750171LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (var_3)))))), (((/* implicit */long long int) var_7))));
}

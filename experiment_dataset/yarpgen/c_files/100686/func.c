/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100686
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
    var_12 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */int) var_11)) << (((var_7) + (6245175998958317299LL))))) : (((/* implicit */int) (unsigned char)56)))));
    var_13 = ((/* implicit */unsigned long long int) ((var_3) - (var_7)));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) ((var_1) & (var_6))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) >= (max((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_2 [i_0])))), ((~(((/* implicit */int) var_2))))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((var_3) % (((/* implicit */long long int) ((/* implicit */int) ((var_7) >= (-8641119250504769869LL)))))))));
        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)60103)) : (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_18 += ((/* implicit */unsigned int) (+(((long long int) arr_5 [i_1 - 1] [i_1]))));
            arr_6 [i_0] [i_1 - 2] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((signed char) (signed char)-110))), (min((var_6), (((/* implicit */unsigned int) arr_4 [i_0] [i_1 + 1]))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_2])) - (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_8 [i_0] [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)32744), ((short)7995))))) : (max((1034224820U), (3260742476U)))));
            var_20 = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((signed char) arr_8 [i_0] [i_2]))))) / (((/* implicit */int) ((short) (unsigned short)2046)))));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (523164003U))))));
            var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_3]))));
        }
    }
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
}

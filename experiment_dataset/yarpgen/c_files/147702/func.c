/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147702
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
    var_20 = ((/* implicit */unsigned long long int) (short)1301);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) var_15);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_22 -= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), (min((arr_7 [(short)8] [i_1] [i_2] [i_0]), (arr_7 [i_0] [i_0] [i_1] [i_0])))));
                    var_23 = ((/* implicit */short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) | (((/* implicit */int) arr_3 [(unsigned char)5] [i_1]))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (unsigned short)63648))));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] = (+(2057285729));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_3] [i_3] [i_3] [i_3]))) ? (((((/* implicit */int) (short)6314)) | (((/* implicit */int) (short)-6315)))) : (((/* implicit */int) ((short) 1175149948568393633ULL)))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-46)) != (((/* implicit */int) (_Bool)0))))) >> (((min((arr_9 [i_4 - 1] [i_4 - 1]), (arr_9 [i_4 - 1] [i_4 - 1]))) - (608304246285000160LL))))))));
        arr_17 [i_4] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (short)-6315))))));
        arr_18 [i_4] = ((/* implicit */long long int) arr_3 [i_4 - 1] [i_4]);
        arr_19 [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(756053002)))) ? (min((((/* implicit */unsigned long long int) var_13)), (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 105993129)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((((-7976436671266183535LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)53))))) + (9223372036854775807LL))) << (((((((((/* implicit */int) (signed char)-32)) * (((/* implicit */int) var_17)))) + (2328))) - (23))))))));
    }
}

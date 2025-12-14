/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11966
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
    var_14 = ((/* implicit */int) var_6);
    var_15 = ((/* implicit */unsigned short) (-(1177809995433771495ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((signed char) ((var_2) ? (8242098912677436014ULL) : (((/* implicit */unsigned long long int) -523454493395870877LL)))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_0))));
    }
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        var_18 |= ((/* implicit */unsigned char) arr_2 [15LL]);
        arr_4 [(unsigned short)15] |= ((((((/* implicit */_Bool) var_1)) ? (8997143794037550052ULL) : (min((15191761661964908101ULL), (685187509620979454ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (signed char)115))))))));
        arr_5 [i_1 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (short i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_1 [i_3]);
                    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)63))));
                    var_20 = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
    } 
}

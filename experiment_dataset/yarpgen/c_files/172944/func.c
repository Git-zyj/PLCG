/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172944
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3117563376U)) ? (281440616972288LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16)))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17726530644648715724ULL)) ? (var_3) : (var_3)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6552))) / (var_2))))) : (var_0)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) var_2);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0]);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16140901064495857664ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_5 [i_0] [i_1] [11LL] [i_0 + 1])));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -229455175)) * (4294967295U))))));
        var_18 = ((/* implicit */short) var_6);
        var_19 = ((/* implicit */signed char) var_1);
    }
    var_20 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)231)), (var_11)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9645238880458918757ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)197), (var_10)))))))));
}

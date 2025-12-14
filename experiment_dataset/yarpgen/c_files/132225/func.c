/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132225
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_15)))))) ? (((8685798198266387670ULL) / (((/* implicit */unsigned long long int) 15LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0])))));
                    arr_10 [i_0] = ((/* implicit */unsigned short) -16LL);
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_1] [i_0] [(unsigned char)0])) ? (((arr_5 [i_0] [i_1] [12ULL]) + (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_3 [i_1] [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)22])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2])) : ((+(((/* implicit */int) var_8))))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) max(((+(var_14))), (((/* implicit */long long int) ((((/* implicit */_Bool) 5115039941304145363LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))))) : ((~(((unsigned long long int) var_8))))));
    var_22 |= 13428992972954971854ULL;
    var_23 = ((/* implicit */unsigned short) var_13);
}

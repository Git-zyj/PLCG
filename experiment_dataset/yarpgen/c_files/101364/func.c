/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101364
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
    var_14 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_11))));
                    arr_8 [i_0] [i_1] [i_1] [19LL] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17387)))) % (((/* implicit */int) var_9))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */short) arr_4 [i_0] [i_0] [i_0])), ((short)4100)));
        arr_10 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551610ULL)))) ? (((/* implicit */int) (unsigned short)48149)) : (((/* implicit */int) (_Bool)1))))) - ((+(((((/* implicit */_Bool) arr_4 [(unsigned char)7] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_0] [(_Bool)1]))) : (18446744073709551601ULL)))))));
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_16 += ((/* implicit */short) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)59039)), (18446744073709551612ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3]))) : (((3837919523331490005LL) | (((/* implicit */long long int) 1))))))));
        var_17 = ((/* implicit */long long int) ((short) min((((/* implicit */short) arr_5 [i_3])), ((short)32752))));
        arr_13 [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 16591090978432496774ULL)))))), ((+((-(0ULL)))))));
        var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (-3837919523331490005LL)))) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47)))))));
        var_19 = ((/* implicit */long long int) ((unsigned int) ((long long int) -2756429758517138564LL)));
    }
    var_20 = ((/* implicit */unsigned char) var_6);
}

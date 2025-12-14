/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17197
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), ((!(((/* implicit */_Bool) (signed char)-36)))))))) & ((-(((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))))));
    var_17 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) (signed char)72)), ((unsigned short)48109))), (((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)9589)), ((unsigned short)42603)))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) < (17550536911401100377ULL)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) (((!(min(((_Bool)0), (var_13))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1003415454U)))))))) : (((long long int) ((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) (unsigned short)37869)))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 4638205173109465685ULL)) ? (3272703594062397697ULL) : (((/* implicit */unsigned long long int) 327932673U)))), (((/* implicit */unsigned long long int) (_Bool)0))));
                    arr_10 [i_0] [i_1] [i_0] = arr_0 [i_0];
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)30))))) : (var_5))) <= (((((/* implicit */int) var_9)) * (((/* implicit */int) var_10))))));
    var_19 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) (-(7880823192892675864LL)))) & (var_1))), (((/* implicit */unsigned long long int) -680443359))));
}

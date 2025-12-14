/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144414
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
    var_19 &= var_0;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_15)))) * (max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)18908), (((/* implicit */unsigned short) var_5))))) > (((/* implicit */int) (signed char)-11)))))) >= (var_1)));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((374314607), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_12)) ? (1612112413565789054ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
        var_23 &= ((/* implicit */short) ((((/* implicit */int) arr_4 [i_1] [i_1])) & (((/* implicit */int) var_2))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */unsigned char) var_5)))))));
        var_24 = ((/* implicit */long long int) var_10);
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) 374314599);
        var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) arr_1 [i_2])))))))), (arr_7 [i_2])));
    }
    var_26 = max((((/* implicit */unsigned short) var_8)), ((unsigned short)9));
    var_27 = ((/* implicit */unsigned short) (+(var_17)));
}

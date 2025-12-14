/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112238
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0])), (min((1116122638U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 1116122659U)) ? (max((max((3694145764U), (1116122668U))), (var_8))) : (1116122638U)));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1116122643U)) ? (max(((-(arr_5 [i_1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
        arr_8 [i_1] = ((/* implicit */long long int) var_11);
        var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((max((1116122638U), (((/* implicit */unsigned int) arr_1 [i_1])))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) & (979492776912012067ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (min((var_5), (((/* implicit */long long int) var_7))))))));
    }
    var_19 = ((/* implicit */short) var_8);
    var_20 = ((/* implicit */_Bool) var_14);
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((1116122659U), (((((/* implicit */_Bool) (short)-11)) ? (((((/* implicit */_Bool) 3178844633U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((/* implicit */unsigned int) -2112906010)))))))));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~((+((+(var_8))))))))));
}

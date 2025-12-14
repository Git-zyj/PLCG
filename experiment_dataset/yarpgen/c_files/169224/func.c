/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169224
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 2]);
                var_21 = ((/* implicit */int) (-(((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (var_1)))) ? (((((/* implicit */_Bool) -5440158250270697367LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 2097088)), (var_12)))) ? (((var_10) ? (2097088) : (((/* implicit */int) arr_2 [i_0] [(_Bool)0] [13])))) : (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) (_Bool)1))))) : ((+(-5440158250270697367LL))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_2 [i_0] [i_1 - 2] [i_1])))) <= (((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_1 + 2])))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) >= (arr_7 [(_Bool)1]))))))) ? (max((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_2 - 1]))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_19)))) | (((var_10) ? (-438719813) : (((/* implicit */int) var_3)))))))));
        var_23 = ((/* implicit */unsigned int) var_14);
    }
    var_24 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)109)))))))));
}

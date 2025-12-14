/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116308
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) (-((-(var_12)))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1157353361765248462LL)) ? (((/* implicit */int) ((((6240826128554413879LL) & (-1157353361765248478LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)3046)) : (((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))), (max((var_11), (((/* implicit */unsigned int) (unsigned char)0))))));
        var_23 = ((/* implicit */unsigned char) (short)32742);
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) | (max((((/* implicit */unsigned int) (short)32760)), (1202607348U)))))));
        arr_4 [i_1] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_2 [i_1] [i_1]))))));
    }
    var_25 = ((/* implicit */short) ((((/* implicit */long long int) (+((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_11)))))) & (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_19)), ((unsigned short)418)))) ? (min((((/* implicit */long long int) (_Bool)1)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))));
}

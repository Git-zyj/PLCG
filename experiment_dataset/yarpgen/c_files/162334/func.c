/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162334
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
    var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = (~(var_12));
        var_17 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [(signed char)12])) ? (((/* implicit */int) arr_0 [i_0] [(_Bool)1])) : (((/* implicit */int) (signed char)0)))), ((+(((/* implicit */int) arr_0 [4LL] [(signed char)11]))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / (140600049401856ULL)))) ? (max((((/* implicit */unsigned long long int) -1825307580203457333LL)), (var_9))) : (((/* implicit */unsigned long long int) max((-1825307580203457333LL), (((/* implicit */long long int) (unsigned short)65526)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_18 -= (+(max((arr_1 [4LL]), (((/* implicit */long long int) max(((signed char)26), (((/* implicit */signed char) (_Bool)0))))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) var_8);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) var_13))) & (arr_1 [i_1])))));
    }
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_14)))) >= (((/* implicit */int) ((unsigned short) (signed char)13)))))), (max((max(((unsigned short)22088), (((/* implicit */unsigned short) (signed char)19)))), (((/* implicit */unsigned short) ((unsigned char) var_6))))))))));
    var_20 = ((/* implicit */signed char) (~(var_10)));
    var_21 += ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
}

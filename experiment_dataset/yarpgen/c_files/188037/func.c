/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188037
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [(unsigned short)20] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3206815016822893436LL)) ? (((/* implicit */int) arr_2 [(unsigned short)0])) : (((/* implicit */int) var_12)))))));
        var_13 = ((/* implicit */int) var_9);
        arr_5 [i_0] = ((/* implicit */short) min((max((var_2), (281473902968832ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))))));
        var_14 = ((/* implicit */unsigned char) 3206815016822893417LL);
    }
    for (int i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) var_1)), (var_11)));
        arr_10 [(short)14] = max((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */long long int) var_11)) < (arr_6 [i_1] [i_1])))), (var_12)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_1])) : (((/* implicit */int) var_1)))));
    }
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (_Bool)1);
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_3 [(signed char)18] [i_2]))));
    }
    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
    var_18 = ((/* implicit */unsigned int) (!(((var_0) != (((/* implicit */unsigned long long int) 3206815016822893429LL))))));
    var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(var_7)))) ? (4664168792810685518LL) : (var_7))), (((/* implicit */long long int) var_11))));
}

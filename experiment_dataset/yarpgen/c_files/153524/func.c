/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153524
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_10 = ((/* implicit */int) var_4);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 2]))))));
        var_11 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) 152138741U)), (-659640438948705783LL)))))));
        arr_4 [(signed char)10] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((((/* implicit */int) arr_2 [i_0 + 2])) / (((/* implicit */int) arr_2 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) (signed char)-106))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))), (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))) ? (arr_7 [i_1]) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_1])) : (arr_7 [i_1])))));
        arr_9 [(unsigned char)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (16449547446396050246ULL)))) ? (((/* implicit */int) ((_Bool) var_6))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (16449547446396050247ULL) : (16449547446396050244ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483638)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) : (var_6)))));
        var_12 -= ((/* implicit */long long int) ((((min((18041239161563358925ULL), (((/* implicit */unsigned long long int) 92829773)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) ((_Bool) min((((/* implicit */int) var_2)), (arr_7 [(short)8]))))) : (((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25655))), (((/* implicit */unsigned short) max((var_5), (var_5)))))))));
    }
    var_13 -= ((/* implicit */unsigned int) (-(min((((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (_Bool)1))))), (var_7)))));
}

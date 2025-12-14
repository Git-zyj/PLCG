/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143546
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)130)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) arr_2 [i_0])) : (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))))));
        var_11 = ((/* implicit */unsigned char) ((_Bool) (-((+(((/* implicit */int) (_Bool)1)))))));
        var_12 = (((~(((arr_0 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)130)))))) > ((((_Bool)1) ? (((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) 16131267606065015306ULL)) || ((_Bool)1)))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) (_Bool)1)))))) ? ((-(((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_7))))) ? (16284519583719084709ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (arr_2 [(_Bool)1]) : (max((min((arr_2 [(_Bool)1]), (18237566647113345168ULL))), (((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1)))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1]) / (var_0)))) ? ((+(arr_5 [i_1]))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_5 [i_1])))));
        arr_6 [i_1] = ((/* implicit */unsigned char) var_7);
    }
    var_16 = ((/* implicit */_Bool) min(((+(((/* implicit */int) min((var_4), (var_7)))))), ((~(((/* implicit */int) min((var_5), ((_Bool)0))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180582
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) % (((/* implicit */int) (unsigned char)31)))) != (((/* implicit */int) min((((/* implicit */short) (unsigned char)37)), (var_13))))))), (((unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(((((((/* implicit */int) arr_0 [i_0] [i_0])) % (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)217)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(var_10))) >= (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))))) ^ (((((unsigned long long int) arr_4 [i_1])) << (min((((/* implicit */unsigned long long int) (unsigned char)47)), (15431749458427854713ULL)))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((_Bool) (-(min((15431749458427854713ULL), (((/* implicit */unsigned long long int) (unsigned char)148))))))))));
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 137733367U)) && (((/* implicit */_Bool) 15431749458427854713ULL)))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) & (18044880826805253016ULL)))))));
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(2860525187U)))), (((unsigned long long int) max((-409390549), (-793339388))))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (~(1434442109U)))) ^ ((~(var_3))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) var_0)), (var_16)))))))))));
}

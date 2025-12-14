/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152905
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_18 = -2491604664794193235LL;
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_9))));
        var_20 = arr_1 [i_0];
        var_21 = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) (unsigned short)1238))) + (2147483647))) >> (((((/* implicit */int) (short)9089)) - (9058)))));
    }
    var_22 &= ((/* implicit */_Bool) 5662492024896702095ULL);
    var_23 = ((((/* implicit */_Bool) ((12784252048812849520ULL) - (((/* implicit */unsigned long long int) var_5))))) ? (max((((/* implicit */long long int) ((unsigned short) var_13))), (min((3169542777780727571LL), (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (12784252048812849506ULL)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143307
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
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_7), (var_1))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_21 = max((((arr_0 [i_0]) - ((~(527765581332480LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (-((+(-6449049095668381060LL)))))) ? (((((/* implicit */_Bool) min((arr_1 [i_0]), (6753978678767071299LL)))) ? (((((/* implicit */_Bool) -69688301015415069LL)) ? (arr_0 [i_0]) : (arr_2 [i_0]))) : (arr_0 [i_0]))) : (max((min((arr_2 [11LL]), (7414783325623751581LL))), (min((var_4), (arr_2 [i_0]))))));
    }
}

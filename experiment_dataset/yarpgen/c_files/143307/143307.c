/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((min(var_7, var_1)))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_21 = max((((arr_0 [i_0]) - (~527765581332480))), (((!(arr_2 [i_0])))));
        arr_3 [i_0] = ((--6449049095668381060) ? ((((min((arr_1 [i_0]), 6753978678767071299))) ? ((-69688301015415069 ? (arr_0 [i_0]) : (arr_2 [i_0]))) : (arr_0 [i_0]))) : (max((min((arr_2 [11]), 7414783325623751581)), (min(var_4, (arr_2 [i_0]))))));
    }
    #pragma endscop
}

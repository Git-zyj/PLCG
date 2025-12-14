/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107601
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-32745))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 = max((max((((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) var_12)) ? (1073741823LL) : (3538795427042145314LL))))), (min((max((arr_5 [(short)8] [(unsigned short)10] [i_0]), (arr_5 [(unsigned short)2] [i_1] [i_1 - 1]))), (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))));
                    var_21 = (~((+((-(arr_2 [i_1] [i_1] [i_1]))))));
                    var_22 = ((/* implicit */short) max(((~((-(((/* implicit */int) var_1)))))), (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [(short)2] [i_1] [i_1] [i_1 + 2]))))), (max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)2))))))));
                    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) max(((unsigned short)23720), ((unsigned short)34204))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176308
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((var_9) ? (var_11) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)242)), (4294967295U)))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) 4294967282U))));
        arr_2 [1] = ((/* implicit */_Bool) 4294967295U);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 1) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */short) max(((~(max((2156358658U), (arr_0 [i_2 - 1] [i_2 + 3]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-3765240765789815189LL)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) 3438471476U)), (2668951643140310963LL)))))))));
            arr_10 [i_2] = ((/* implicit */long long int) min((11U), (((/* implicit */unsigned int) arr_7 [i_1] [i_2 + 3] [i_2 + 3]))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) 4245821490U))));
        }
        var_23 = ((/* implicit */short) (-(max((2044139005U), (((/* implicit */unsigned int) arr_4 [i_1]))))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) min((arr_5 [i_1]), (2044139002U)));
    }
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -1100648026)) >= ((+(var_10)))));
}

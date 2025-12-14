/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142619
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 393216U)) ? (min((((/* implicit */unsigned long long int) var_11)), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1 + 2] [i_2]) <= (-323121124))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    var_14 = ((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_8 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_6 [i_3]) : (arr_6 [i_3])))) ? (max((((/* implicit */long long int) -323121124)), (4294967294LL))) : (((/* implicit */long long int) min((arr_6 [i_3]), (arr_6 [i_3]))))));
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned int) max((((((int) 14132340356085980998ULL)) <= (((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_6 [i_3]) : (arr_6 [i_3]))))), (var_1)));
        arr_10 [i_3] = min((((/* implicit */unsigned int) ((int) 14132340356085980978ULL))), (((((/* implicit */_Bool) 134217727)) ? (arr_7 [i_3]) : (arr_7 [i_3]))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165936
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */long long int) (short)22300)), ((((!(((/* implicit */_Bool) var_0)))) ? (arr_1 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_19))))))))));
                arr_4 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 72057576858058752LL))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_2] [10] = ((/* implicit */signed char) ((long long int) 3870304616U));
                    arr_8 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)9))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) > (((/* implicit */int) min(((unsigned short)57469), (((/* implicit */unsigned short) var_17)))))));
}

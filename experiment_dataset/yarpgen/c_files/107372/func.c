/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107372
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
    var_11 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) (unsigned short)49212)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((int) var_6))) : (((long long int) (unsigned short)0)))))));
    var_12 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)49208), (arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) var_0)) > (((/* implicit */int) (unsigned short)49194)))))))) : (-5163139084209410664LL)));
                arr_5 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 4653553467810634709ULL)) && (((/* implicit */_Bool) (signed char)116)))) ? (((/* implicit */int) (unsigned short)49212)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16324))) > (1829000320984517900ULL))))));
            }
        } 
    } 
}

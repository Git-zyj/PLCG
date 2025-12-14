/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159207
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = max((((((/* implicit */_Bool) -1999802072855733302LL)) ? (((((/* implicit */_Bool) 1999802072855733302LL)) ? (33546240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18446744073676005356ULL)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (signed char)-121))))), (min((2483888106U), (((/* implicit */unsigned int) (signed char)114))))))));
                arr_6 [(signed char)13] = ((/* implicit */long long int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) 7ULL))))) << (((((2775090558U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) - (42317U)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) 1721986860);
}

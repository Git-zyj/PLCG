/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179199
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2 - 1] [i_0] = ((/* implicit */long long int) -2027302773);
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11803173665243513839ULL)) ? (((((/* implicit */int) (signed char)65)) ^ (((/* implicit */int) (signed char)-65)))) : (((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) (unsigned short)52101)) ? (((/* implicit */unsigned long long int) -4386501633418587396LL)) : (9229917924088615943ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_10 = max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((((/* implicit */_Bool) 340687555U)) ? (9229917924088615946ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))))), (min((11803173665243513849ULL), (((/* implicit */unsigned long long int) 2146435072U)))))));
    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) -2027302785)))));
}

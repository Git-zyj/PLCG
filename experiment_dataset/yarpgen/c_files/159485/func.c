/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159485
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
    var_18 = ((/* implicit */unsigned short) min((max(((~(-4213048955560302029LL))), (((/* implicit */long long int) max(((unsigned short)65527), ((unsigned short)65527)))))), (((-1LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62)))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9)) && (((/* implicit */_Bool) 2199022206976LL))))) * (((/* implicit */int) (unsigned short)65535))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) min(((unsigned short)65535), ((unsigned short)0)))), (min((var_8), (((/* implicit */long long int) var_16)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(min((min((-554529945360929836LL), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) (unsigned short)10035)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -3301854682892609211LL)) ? (((/* implicit */int) (unsigned short)45121)) : (((/* implicit */int) var_7))))) - (max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (-6532798877669189996LL) : (-3233678685901511178LL))), (((/* implicit */long long int) (unsigned short)65354))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) > (9223372036854775788LL))) ? (((/* implicit */int) arr_8 [i_2] [i_1 + 1])) : (((/* implicit */int) ((unsigned short) (unsigned short)15259)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1]))) + (5237386834205182495LL))))))));
                arr_9 [18LL] &= ((long long int) (-(-2700824274118714924LL)));
            }
        } 
    } 
}

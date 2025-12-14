/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167980
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (-(4281589263U))))));
        var_21 = ((unsigned long long int) ((2361924830U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65433)))));
        var_22 -= ((/* implicit */signed char) ((int) ((arr_0 [(_Bool)1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)116))))) != (var_1)))) * (((/* implicit */int) (signed char)-116))));
    var_24 |= ((/* implicit */unsigned int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (5340035759204306694ULL))), (((/* implicit */unsigned long long int) ((unsigned short) var_3))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_12)), (var_8)))), (((unsigned int) -1070077269)))))));
}

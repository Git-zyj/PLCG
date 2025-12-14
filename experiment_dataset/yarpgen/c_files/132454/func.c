/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132454
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30845)) % (((/* implicit */int) (unsigned short)63059))))) ? (min((((/* implicit */long long int) ((765008141U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16)))))), (((((/* implicit */_Bool) 0ULL)) ? (8589869056LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)34673)) ? (((/* implicit */int) (unsigned short)15860)) : (((/* implicit */int) (signed char)-13)))) < (((/* implicit */int) max(((unsigned short)26189), ((unsigned short)10477))))))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)61501)) ? (((/* implicit */int) (unsigned short)44396)) : (((/* implicit */int) (unsigned short)41124)))), (((((/* implicit */int) (unsigned short)24412)) | (((/* implicit */int) (unsigned short)44298))))))) ? (min((3529959155U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)41140)) / (((/* implicit */int) (signed char)102))))))) : (max((((((/* implicit */_Bool) (unsigned short)65528)) ? (407308133U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15557))))), (((/* implicit */unsigned int) min(((unsigned short)34674), ((unsigned short)59178))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max(((unsigned short)63170), (((/* implicit */unsigned short) (signed char)-7))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18936
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
    var_14 = ((/* implicit */long long int) ((unsigned int) var_10));
    var_15 = ((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)-85)))), (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) 10872522396221571907ULL)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)182)) >> ((((+(arr_0 [(short)5] [i_0]))) - (3629179411U)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) min(((~((+(((/* implicit */int) arr_8 [(_Bool)1] [i_2] [i_2])))))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)19876), (((/* implicit */unsigned short) (unsigned char)133))))))))));
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max(((~(((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)123))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((-3929871553192801726LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-101)), (var_4)))), (var_7))))));
}

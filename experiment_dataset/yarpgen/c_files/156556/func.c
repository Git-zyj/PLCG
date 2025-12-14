/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156556
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
    for (short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) arr_0 [i_1 + 1]);
                    var_20 += ((/* implicit */int) ((unsigned long long int) ((_Bool) (signed char)0)));
                    arr_8 [(unsigned short)19] [i_1 - 2] [(unsigned short)19] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_0 + 1] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_1 - 2]))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) ((unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 2]));
        var_22 = ((/* implicit */int) (signed char)-77);
    }
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)1)) ? (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (unsigned short)61137)) : (((/* implicit */int) (signed char)-75)))) : (((/* implicit */int) min(((unsigned short)60799), (((/* implicit */unsigned short) (signed char)14))))))))))));
    var_24 = ((/* implicit */long long int) (signed char)101);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134378
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)21628))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-57)) & (((/* implicit */int) arr_0 [(unsigned short)14] [i_1])))))));
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [(unsigned short)14])))))))));
                    var_16 = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) arr_4 [(short)15] [i_1] [i_2])))))) || (((((/* implicit */_Bool) arr_1 [(_Bool)1])) || (((arr_0 [i_1] [i_2]) || (((/* implicit */_Bool) 1467388138))))))));
                    arr_7 [i_2] = ((/* implicit */int) (unsigned char)242);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */int) (signed char)-72)) ^ (((/* implicit */int) (unsigned short)21627)))) == (((/* implicit */int) (signed char)1)))))));
        arr_10 [(short)10] [i_3] = ((/* implicit */int) ((arr_8 [i_3]) != (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))))))))));
    }
}

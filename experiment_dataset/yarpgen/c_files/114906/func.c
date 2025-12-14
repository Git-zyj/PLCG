/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114906
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
    var_19 = ((/* implicit */_Bool) var_14);
    var_20 = ((/* implicit */unsigned int) (unsigned char)62);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_1] [18LL] [i_3] = ((/* implicit */_Bool) (+(111855411U)));
                        arr_15 [i_3] [(signed char)3] [(unsigned char)19] [i_0] |= (((!(((/* implicit */_Bool) 4183111870U)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)197)))))));
                        var_21 |= (~(min((arr_4 [i_0] [i_2] [i_3]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0])))));
                    }
                    var_22 = ((/* implicit */unsigned int) min((-9223372036854775789LL), (((/* implicit */long long int) -15))));
                }
            } 
        } 
    } 
}

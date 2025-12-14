/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164007
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */unsigned short) var_12);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_12))))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) / (var_2))))))))));
                    var_17 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) 1950425661)) & (var_2))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                    var_18 &= ((/* implicit */long long int) arr_3 [(unsigned short)6]);
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((unsigned char) -906960370))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)25471)))))) == (((((/* implicit */_Bool) (unsigned char)87)) ? (1950425680) : (-1950425676))))))));
                }
            } 
        } 
        var_20 &= ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-44))))))));
        arr_8 [i_0 - 4] = ((/* implicit */short) (+((+(arr_5 [i_0 - 4])))));
    }
    for (int i_3 = 2; i_3 < 12; i_3 += 3) 
    {
        var_21 *= min((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */long long int) var_1)), (arr_9 [i_3] [i_3]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)49072))))));
        var_22 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_6 [i_3] [i_3 + 2])), (var_5)))));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
}

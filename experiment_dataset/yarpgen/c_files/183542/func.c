/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183542
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
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (unsigned short)61440)) : (((/* implicit */int) (unsigned short)362))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63488)) ? (3698349390U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) : (3314310606493837630LL)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27591))));
                var_21 = (+(((max((arr_4 [i_0] [1U] [(unsigned short)1]), (((/* implicit */int) var_1)))) / (((((/* implicit */_Bool) 3431464323U)) ? (-1829176985) : (-1969271163))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) arr_5 [14U] [i_2 - 1])))) > (((var_0) ? (((/* implicit */int) (short)30)) : (((/* implicit */int) var_4))))));
        var_23 = min((((((/* implicit */_Bool) 863502973U)) ? (((((/* implicit */_Bool) (unsigned char)224)) ? (2147483647) : (((/* implicit */int) (signed char)-12)))) : (((/* implicit */int) (unsigned short)36188)))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)61457)))))))));
        arr_7 [i_2 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_6 [i_2]))))))));
    }
    var_24 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)45562)))) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)47)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)4)) : (var_13)))))) : (var_3)));
}

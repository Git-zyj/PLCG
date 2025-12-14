/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139884
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
    var_12 = ((/* implicit */signed char) ((var_6) ? (((((2147483647) <= (((/* implicit */int) var_9)))) ? (((unsigned int) var_3)) : (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (590213086U))))) : (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3704754209U))) : (3704754209U)))));
    var_13 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) -1643456842)) ? (var_4) : (3704754182U))));
            arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 3704754200U)) | ((~(18446744073709551615ULL)))));
        }
        for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_9 [i_0] [(signed char)20] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 1136956099)) ? (590213095U) : (590213092U))), (((((/* implicit */_Bool) ((signed char) 3704754200U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6060))) : (590213117U)))));
            var_15 = ((/* implicit */unsigned int) ((unsigned short) ((((-1LL) + (9223372036854775807LL))) >> (((var_8) + (1709022117))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) << (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3126202361U)))))) | (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) 3704754179U)) : (2521610377541943210ULL))));
                    var_17 = ((/* implicit */long long int) ((((((1168764934U) < (3704754209U))) || (((/* implicit */_Bool) -2954144244310472948LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (1168764935U) : (3704754210U))))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((signed char) ((((1023) >= (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) 2923866431U)) ? (1168764934U) : (590213096U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
    }
}

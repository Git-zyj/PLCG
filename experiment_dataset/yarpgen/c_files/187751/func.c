/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187751
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) + (max((9223372036854775807LL), (7334832451053562689LL)))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27870)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12685))) : (var_11)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) <= (-9223372036854775807LL)))) : (((/* implicit */int) var_0))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((14195703904251193574ULL) >> (min((var_5), (((/* implicit */unsigned int) (unsigned char)3))))));
                    var_19 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) != (-9223372036854775807LL)));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max(((unsigned short)65527), (((/* implicit */unsigned short) (signed char)-91)))))));
    }
    var_21 = ((/* implicit */long long int) ((var_13) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-92)), ((unsigned short)16306)))) : (((/* implicit */int) ((short) max((8542355728529990356ULL), (((/* implicit */unsigned long long int) (unsigned short)65527))))))));
}

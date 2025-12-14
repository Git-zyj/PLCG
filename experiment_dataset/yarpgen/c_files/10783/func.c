/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10783
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
    var_15 = ((/* implicit */long long int) ((short) var_7));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((977003701) != (((/* implicit */int) (short)(-32767 - 1))))))));
            var_16 = ((/* implicit */_Bool) max((arr_2 [i_0]), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (min((((/* implicit */unsigned long long int) var_1)), (163848298466541160ULL)))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -7959532387276586863LL)))) <= (arr_4 [i_0] [i_0])));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) var_1);
            var_19 = ((/* implicit */short) ((((max((((/* implicit */long long int) var_12)), (var_2))) << (((var_5) - (11722278075559053056ULL))))) % (((/* implicit */long long int) ((/* implicit */int) (signed char)97)))));
            var_20 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (short)30)))) ? (((/* implicit */unsigned long long int) ((var_0) >> (((arr_4 [i_0] [i_0]) - (6884855540569328325ULL)))))) : (223930929573401283ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        }
    }
    var_21 *= ((/* implicit */short) 4294967288U);
}

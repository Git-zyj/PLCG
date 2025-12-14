/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111593
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2283472224597714057LL)) ? (((/* implicit */int) (unsigned short)42151)) : (((/* implicit */int) (short)-32760))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [(unsigned short)5] [i_0])) ? (-1184529441359306695LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23366))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-74)) < (((/* implicit */int) (unsigned short)54229))))))));
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) (unsigned short)28518)) : (((/* implicit */int) (short)-32751)))) | ((-(((/* implicit */int) ((short) (unsigned short)54215)))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_20 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_2]);
                    var_21 = ((unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-10634))));
                    var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)123)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (unsigned short)42151)) : (((/* implicit */int) (signed char)119))))) : (((((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [4LL]))))) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (63705)))))));
                }
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) (short)28672)) / (((/* implicit */int) (signed char)-126)))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */int) (signed char)69)) & (((/* implicit */int) ((short) max((var_12), (((/* implicit */unsigned short) var_3))))))));
                    var_25 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    var_26 = ((/* implicit */short) ((signed char) arr_7 [i_4]));
                    var_27 = ((/* implicit */short) var_2);
                }
                var_28 = ((/* implicit */signed char) ((unsigned short) (short)26622));
            }
        } 
    } 
    var_29 = ((/* implicit */short) var_14);
}

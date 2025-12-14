/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145650
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
    var_20 |= ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) == (var_0)))), (var_6)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (short)23654)) != (((/* implicit */int) (short)-6000)))))))) : (var_3)));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((short) max((((((/* implicit */_Bool) (short)32767)) ? (18210452664825584276ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24726))))), (((/* implicit */unsigned long long int) ((2995534205U) * (((/* implicit */unsigned int) -1420515398)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = arr_0 [i_1];
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-3201466833183114825LL) : (((/* implicit */long long int) var_17))))) ? (((var_14) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)2] [i_1] [i_0] [i_0]))))) : ((+(arr_0 [i_0]))))) < (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1])))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                            {
                                var_24 = ((/* implicit */long long int) ((((((/* implicit */int) var_13)) << (((((-1824607866839173772LL) + (1824607866839173799LL))) - (15LL))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                                var_25 = ((unsigned int) (unsigned char)244);
                            }
                            var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1420515399) : (((/* implicit */int) (short)-30032)))))))) : (((/* implicit */int) (signed char)98))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned int) arr_5 [i_1]);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)8673))));
}

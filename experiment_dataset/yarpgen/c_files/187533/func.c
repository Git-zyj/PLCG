/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187533
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
    var_18 = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */int) ((short) (-2147483647 - 1)))) > (((/* implicit */int) (unsigned char)144))))), (var_13)));
    var_19 *= ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) var_3))))) ? ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6))))) : (((/* implicit */long long int) min((((var_9) ? (281819806) : (((/* implicit */int) var_17)))), (((/* implicit */int) (unsigned char)13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (signed char)1))) > (((/* implicit */int) (short)-1))))), ((~(max((-5825042017846612387LL), (((/* implicit */long long int) (short)30909))))))));
                var_21 = ((/* implicit */unsigned char) ((((min((((((/* implicit */_Bool) -281819797)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39363))) : (-1LL))), (((/* implicit */long long int) min((((/* implicit */short) (signed char)-1)), ((short)-13095)))))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) 1094949786)) ? (((/* implicit */int) (short)-20088)) : (1648938148))) + (20133))) - (45)))));
                var_22 = ((((/* implicit */_Bool) var_17)) ? (((long long int) arr_0 [i_0] [i_1])) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_3))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_12))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? ((-(((/* implicit */int) arr_14 [i_2] [i_3])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_4)))))))));
                        }
                        arr_16 [i_0] = ((/* implicit */unsigned short) var_2);
                    }
                    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((short) var_16));
                        arr_19 [i_0] [i_5 - 1] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-116)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                        var_27 = ((/* implicit */int) 7707308650277633609ULL);
                        var_28 = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) (signed char)1)))));
                    }
                    for (long long int i_6 = 3; i_6 < 10; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 4; i_7 < 11; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)0))));
                            var_30 = ((/* implicit */short) ((((/* implicit */int) var_13)) - ((-(((/* implicit */int) (short)-28603))))));
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) (short)-14862));
                        arr_26 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-5)) : (arr_8 [i_6 + 3] [i_6 + 3] [i_6 + 3])));
                    }
                }
                var_31 = ((/* implicit */signed char) min(((~(((/* implicit */int) max((((/* implicit */short) var_15)), (var_17)))))), (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-8))))), (((unsigned char) (unsigned short)65535)))))));
            }
        } 
    } 
}

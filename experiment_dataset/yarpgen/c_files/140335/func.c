/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140335
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */short) var_18)), (max(((short)-5907), (arr_0 [i_1]))))), (((/* implicit */short) var_11))));
                var_19 = ((/* implicit */unsigned int) arr_3 [i_0 + 4] [i_0 + 3]);
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (!((_Bool)1)));
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)8326)) > (((/* implicit */int) (unsigned short)39660))));
                    arr_13 [2U] [i_1] [2U] |= ((/* implicit */long long int) ((0ULL) << (((511ULL) - (511ULL)))));
                }
                for (short i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                {
                    var_20 ^= ((/* implicit */unsigned short) (unsigned char)161);
                    arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned char)164), (((/* implicit */unsigned char) var_12))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) arr_7 [i_0 + 2])) ? (arr_7 [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)20396)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)161)) - (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) (signed char)52)) ? (var_16) : (((/* implicit */unsigned long long int) 788492880))))))));
                    arr_20 [i_0 - 1] [i_0 - 1] [i_4] = ((((/* implicit */_Bool) max(((unsigned short)59242), (((/* implicit */unsigned short) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_11))))) : ((((!(((/* implicit */_Bool) (signed char)-15)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (arr_2 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (unsigned short)61724)) : (-2038347373)))) ? (var_9) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))), (((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2])))))));
                                var_23 = ((/* implicit */unsigned int) 1095428808);
                                var_24 = ((/* implicit */short) (_Bool)0);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) ((arr_24 [i_0] [i_1] [i_4]) != (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                }
                /* vectorizable */
                for (long long int i_7 = 4; i_7 < 9; i_7 += 4) 
                {
                    arr_28 [i_1] [i_7] = ((/* implicit */unsigned char) var_2);
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) 788492869)) : (9776157725961871725ULL)));
                }
                var_27 = var_10;
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_15);
    var_29 = ((/* implicit */short) 2624582894U);
}

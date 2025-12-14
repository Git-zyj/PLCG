/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183117
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
    var_15 = ((/* implicit */int) var_2);
    var_16 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 *= ((/* implicit */long long int) ((short) min((arr_1 [i_0] [i_1]), (((/* implicit */long long int) (-2147483647 - 1))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_11);
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) || ((_Bool)0))) ? (((var_5) ? (var_0) : (((/* implicit */int) arr_2 [i_0])))) : (((arr_0 [i_1]) - (((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    arr_7 [i_2 + 1] [i_2] [i_2] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) (signed char)0)), (18446744073709551615ULL)))))));
                    var_19 = ((/* implicit */unsigned char) (-(var_1)));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((arr_1 [i_1] [i_2]) - (776896178352704360LL)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [(short)4])), (var_7)))) : (min((11249136882034644891ULL), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) (-(arr_6 [i_2] [i_2]))))));
                }
                for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 3) 
                {
                    var_21 = (((_Bool)1) ? ((((_Bool)1) ? ((-(1844782562439537444ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((long long int) 18446744073709551615ULL))));
                    arr_11 [i_3] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_2)), (arr_9 [i_3 - 2] [i_3 - 2] [i_0]))) >> (((min((((/* implicit */long long int) (short)30079)), (-5135323788259103906LL))) + (5135323788259103910LL)))));
                    arr_12 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((max((17355928433513304661ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) >> (((((((/* implicit */_Bool) var_2)) ? (arr_9 [i_3 + 1] [i_3 - 3] [i_3 - 3]) : (((/* implicit */unsigned long long int) var_1)))) - (11747369683424062427ULL)))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    arr_15 [i_0] [i_1] = ((/* implicit */signed char) var_8);
                    arr_16 [i_4] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))) % (((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29810))) : (16601961511270014171ULL)))));
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -4980759173790857954LL)) || (((/* implicit */_Bool) 20ULL)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) var_2))), (((((/* implicit */_Bool) 1797879518)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1]))))))) : (((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_17 [i_0] [i_1] [i_4] = var_12;
                }
                /* vectorizable */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((1844782562439537444ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117)))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_5] [i_5 - 1] [i_5 - 1])) || (((/* implicit */_Bool) arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_24 = var_14;
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (_Bool)1))));
                    arr_25 [i_0] [i_1] [i_6 - 1] [i_6] = ((/* implicit */unsigned short) (((~(var_1))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_20 [i_1]))))));
                }
            }
        } 
    } 
    var_26 += var_2;
}

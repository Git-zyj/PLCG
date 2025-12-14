/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145932
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
    var_20 = ((/* implicit */signed char) ((((((((/* implicit */int) var_0)) <= (var_11))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_16)) >> (((var_8) + (1683289304))))))) != (var_15)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            var_21 -= ((/* implicit */signed char) arr_3 [i_1 - 3]);
            arr_7 [i_0] [i_1] [i_1 - 1] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) >> (((var_11) - (509564335)))))))) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 3])))))));
            var_22 = ((((/* implicit */_Bool) -6775216439857295933LL)) ? (-6775216439857295933LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)91))));
            var_23 -= (((-(min((arr_6 [i_1 - 3]), (arr_0 [(_Bool)1]))))) % (((/* implicit */unsigned long long int) max((6775216439857295934LL), (((/* implicit */long long int) var_0))))));
        }
        var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))))) ? ((-(arr_6 [i_2]))) : ((+(arr_6 [i_2])))));
        var_25 = ((/* implicit */unsigned short) -6775216439857295933LL);
        var_26 = ((/* implicit */short) max((arr_8 [i_2]), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) var_13)))))) < ((~(-6775216439857295934LL))))))));
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_12 [i_3] [i_3])), (arr_6 [i_3]))), (((/* implicit */unsigned long long int) ((arr_3 [i_3]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))) ? (var_4) : (((/* implicit */int) ((((/* implicit */_Bool) -6775216439857295915LL)) && (((/* implicit */_Bool) arr_5 [i_3])))))));
        arr_13 [i_3] = (-(var_11));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 15; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        arr_24 [(short)5] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((min((var_7), (((/* implicit */long long int) arr_12 [i_6] [i_5])))) + (((/* implicit */long long int) ((/* implicit */int) var_19))))) * (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))))))));
                        var_28 = ((/* implicit */int) ((unsigned char) min((5995901764564983317ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))));
                    }
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((signed char) var_7))) ? (arr_0 [i_5 - 1]) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_0 [i_3]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (signed char i_8 = 1; i_8 < 14; i_8 += 3) 
                        {
                            {
                                arr_29 [i_8] [i_7] [(_Bool)1] [i_7] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? ((-(6775216439857295923LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_5 - 2]))))))));
                                var_30 |= min((((((/* implicit */_Bool) arr_4 [i_8 + 2] [i_8 + 3] [i_8 - 1])) ? (((((/* implicit */int) var_6)) ^ (((/* implicit */int) (_Bool)0)))) : (((-1245067622) / (((/* implicit */int) (unsigned short)55595)))))), (((/* implicit */int) var_16)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153390
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(0LL)))), (((((/* implicit */_Bool) arr_10 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) 0LL)) : (arr_2 [i_0])))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((((((/* implicit */_Bool) arr_1 [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))) ? (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-13LL))) + (((-12LL) / (var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 127ULL)) ? (((((/* implicit */int) (signed char)75)) / (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_12 [i_4] [i_2] [i_2] [i_3] [i_0] [i_3]))))));
                                var_13 = max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_4]))) < (max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (-6099540360710468215LL)))))), (min((((/* implicit */unsigned long long int) (signed char)-62)), (18446744073709551615ULL))));
                                var_14 = ((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)118))) | (arr_8 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((short) 150ULL))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(-1LL))), (((-6002030362942862874LL) & (3626901763855322097LL)))))) ? (max((((((/* implicit */_Bool) arr_19 [i_5])) ? (arr_17 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5]))))), (arr_18 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) -3112393798441729801LL)) || (((/* implicit */_Bool) arr_17 [i_5] [i_5]))))))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_5])) + ((-(((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (signed char)-82))))))));
        arr_21 [i_5] = var_8;
    }
    for (long long int i_6 = 3; i_6 < 18; i_6 += 3) 
    {
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_22 [i_6 - 3]), (arr_23 [i_6 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1099511627775LL))))) : (((/* implicit */int) (unsigned char)255))));
        var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_25 [i_6 - 1])) ? ((+(var_4))) : (((/* implicit */unsigned long long int) min((1099511627775LL), (((/* implicit */long long int) arr_23 [i_6 - 1])))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_24 [i_7]) + (arr_28 [i_7])))) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) arr_28 [i_7])) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551606ULL))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-62))))) ? (arr_28 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))));
        arr_29 [i_7] &= ((/* implicit */unsigned char) ((522683134903245958ULL) & (((/* implicit */unsigned long long int) -6099540360710468215LL))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_7]))))), (((arr_24 [i_7]) & (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7]))))))))));
        var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_22 [i_7])), (((((/* implicit */_Bool) (unsigned char)255)) ? (max((-7773755056112345339LL), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) (unsigned char)239)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)31)))) < (((((/* implicit */_Bool) arr_32 [i_7] [i_8 + 1])) ? (arr_32 [i_8 - 1] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48296)))))));
            var_22 = ((/* implicit */unsigned char) ((signed char) (unsigned char)31));
            var_23 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_7] [i_8 + 1]))))), (((unsigned long long int) 16427207837567906052ULL)))));
        }
    }
}

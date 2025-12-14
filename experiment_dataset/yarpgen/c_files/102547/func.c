/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102547
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_2 [i_1])), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_14)))) ? (max((((/* implicit */long long int) 2481933545U)), (var_10))) : ((~(5001645802057761861LL)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) arr_6 [i_2] [i_3]);
                                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))) : (max((((/* implicit */unsigned long long int) (signed char)106)), (2626662002829290894ULL)))));
                                arr_16 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))) < (((((/* implicit */_Bool) (short)3721)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3718))) : (15820082070880260721ULL)))));
                                var_17 += ((/* implicit */_Bool) 16548624903792849888ULL);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_8 [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 1] [i_2] [i_2]), (arr_8 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2] [i_2])))) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 1] [i_2] [i_2])) : ((-(((/* implicit */int) (signed char)106))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2626662002829290894ULL)))) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) : (min((((/* implicit */long long int) arr_2 [i_2])), (arr_24 [i_6] [i_0])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4251)) != (((/* implicit */int) var_9))))), (min((((/* implicit */unsigned long long int) arr_10 [i_6])), (16548624903792849885ULL))))) : (18446744073709551615ULL));
                                var_18 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 184920986U)) ? (1898119169916701725ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))))));
                                var_19 = ((/* implicit */unsigned short) ((min((arr_22 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_5]), (arr_22 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2]))) == (max((((/* implicit */long long int) var_16)), (arr_22 [i_2 + 2] [i_2] [i_2] [i_2 + 1] [i_2])))));
                                var_20 = arr_3 [i_2];
                                var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_15)), (arr_19 [i_0] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 4) 
        {
            for (unsigned short i_9 = 1; i_9 < 15; i_9 += 3) 
            {
                {
                    arr_36 [i_8] [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)173)), ((short)3721)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)177)), ((short)-5628))))) | (4297174510728801561ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32766))) != (max((8033206162464235383LL), (((/* implicit */long long int) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (short i_10 = 2; i_10 < 15; i_10 += 3) 
                    {
                        for (short i_11 = 1; i_11 < 17; i_11 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((((/* implicit */_Bool) 15549336915677316589ULL)) ? (((/* implicit */unsigned long long int) 7114622909875261048LL)) : (16548624903792849885ULL))) : (arr_12 [i_10] [i_9] [i_8] [i_7])))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_29 [i_8] [i_9]) >= (268435456U))))) : (min((15549336915677316580ULL), (((/* implicit */unsigned long long int) (unsigned char)133)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                                arr_41 [i_7] [i_9] [i_7] [i_9] [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_32 [i_8 - 1] [i_9 + 4] [i_11 - 1])) ? (((/* implicit */int) arr_32 [i_8 - 1] [i_9 + 4] [i_11 + 1])) : (((/* implicit */int) arr_32 [i_8 + 1] [i_9 + 3] [i_11 - 1])))), ((+(((/* implicit */int) arr_13 [i_11] [i_11 - 1] [i_11] [i_11] [i_9] [i_9] [i_9]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 16; i_12 += 4) 
                    {
                        for (signed char i_13 = 1; i_13 < 17; i_13 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_8 + 4] [i_9 + 4])) - (((/* implicit */int) arr_30 [i_8 + 3] [i_9 + 4])))))));
                                var_24 = ((/* implicit */long long int) (((_Bool)1) ? ((~(2897407158032235036ULL))) : (((/* implicit */unsigned long long int) 4479986262358547577LL))));
                            }
                        } 
                    } 
                    arr_48 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) (+(((((_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_12)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7]))) | (arr_22 [i_9] [i_9] [i_8] [i_7] [i_7])))))));
                    var_25 = ((/* implicit */short) max((1001160633U), (((/* implicit */unsigned int) (_Bool)0))));
                }
            } 
        } 
    } 
}

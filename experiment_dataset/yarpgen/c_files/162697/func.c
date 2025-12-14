/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162697
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)10))))))) && (((/* implicit */_Bool) (signed char)10))));
                                var_18 = ((/* implicit */unsigned int) max(((((_Bool)1) ? (arr_5 [i_1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0])))))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                            {
                                arr_18 [i_3] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (signed char)10)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_1])), (arr_11 [i_0] [i_0] [i_0])))))))));
                                var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_0 [i_1])))))))));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (+((((+(arr_11 [i_0] [i_0] [i_0]))) * (min((var_10), (var_0))))))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-8192)) < (((/* implicit */int) arr_17 [i_0] [i_3] [i_2] [i_3] [i_3] [i_5] [i_5]))));
                            }
                            var_22 += arr_11 [i_2 - 2] [i_2 - 2] [i_0];
                            arr_19 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_0] [i_3] [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_3])) : (-2065404934)))) ? ((+(((/* implicit */int) (unsigned short)32736)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-32752)) : (((/* implicit */int) (unsigned short)32796))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 23; i_6 += 2) 
                {
                    for (signed char i_7 = 2; i_7 < 20; i_7 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                            {
                                arr_26 [i_0] [i_1] [i_6 - 1] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_24 [i_7] [i_7] [i_6 - 1]);
                                arr_27 [i_0] [i_0] [i_7] [i_7] [i_1] [i_0] [i_7] = var_3;
                            }
                            for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_21 [i_6 - 1] [i_7 - 2] [i_7 - 2]), (arr_21 [i_6 + 1] [i_7 + 3] [i_6]))))));
                                arr_32 [i_7] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_25 [i_0] [9] [i_7] [i_7 + 3] [i_1] [i_0]))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_3 [i_9])))));
                            }
                            for (unsigned short i_10 = 1; i_10 < 20; i_10 += 4) 
                            {
                                arr_37 [i_0] [i_0] [i_1] [i_6] [i_7] [i_7 - 1] [i_10] = var_4;
                                arr_38 [i_0] [i_1] [i_6] [i_7] [i_10 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_7] [i_1] [i_1] [(short)20] [i_7] [i_10])) * (((/* implicit */int) arr_33 [i_10 + 4] [i_10] [i_7] [i_0] [(_Bool)1] [i_0] [i_0]))));
                            }
                            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
                            {
                                arr_41 [i_7] [23ULL] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_0] [i_7] [i_1] [i_0] [i_7 + 1] [(signed char)21] [i_6 + 1]))));
                                arr_42 [i_7] [i_7] [i_6] [i_7] [i_7] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) / (8769884631145023439LL)))));
                                var_24 &= ((/* implicit */short) (+(max((max((((/* implicit */long long int) (unsigned char)224)), (-1829083816322491449LL))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_34 [i_0] [i_1] [i_1] [i_6] [i_1] [i_7 - 1] [i_11])))))))));
                                arr_43 [18LL] [i_0] [i_0] [i_6] [i_0] [i_7] [i_11] = ((/* implicit */long long int) var_2);
                            }
                            var_25 = ((/* implicit */short) (unsigned short)65525);
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (unsigned short)21814))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141964
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0])) ? (((((/* implicit */_Bool) 1859557374528066778LL)) ? (14170230664496647415ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6762))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 - 2]))))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            {
                arr_7 [(signed char)14] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 623383064U))))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                            {
                                arr_16 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_11 [i_1] [i_1])))))) ? (((/* implicit */unsigned int) -350358024)) : (((unsigned int) min((4ULL), (((/* implicit */unsigned long long int) arr_11 [i_1] [(unsigned char)9])))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2 + 1]))) | (arr_14 [i_1] [i_2 - 1] [i_3] [i_4] [i_5]))) == (((/* implicit */long long int) -1791469877))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_1] [i_2 + 3] [i_2 + 2] [i_4] [i_4 + 2]))) ? (arr_15 [i_1] [i_2 + 1] [i_2 + 1] [i_4] [i_4 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_2] [i_2 + 2] [i_2 - 1] [i_2] [i_4 - 2]) == (3671584222U)))))));
                                arr_17 [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 623383085U))) ? (((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2 + 3])))))) : (((((/* implicit */unsigned long long int) 623383064U)) & (920984785210734457ULL)))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                            {
                                arr_21 [(signed char)16] [i_1] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (+(920984785210734457ULL)));
                                var_18 = ((/* implicit */long long int) 17525759288498817158ULL);
                            }
                            /* LoopSeq 2 */
                            for (long long int i_7 = 3; i_7 < 15; i_7 += 2) 
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2 + 3] [i_4])) ? (((((/* implicit */_Bool) 9441985040850321963ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_2] [i_4] [i_4] [4LL]))) : (11384901022123299224ULL))) : (max((920984785210734457ULL), (((/* implicit */unsigned long long int) var_5))))))))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_1] [i_2] [i_3] [i_4] [(unsigned short)13])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_4))) | (((/* implicit */long long int) ((/* implicit */int) (short)6762)))))) ? (((623383083U) & (((/* implicit */unsigned int) ((int) 11549619937625512724ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 623383064U))))));
                                var_21 = ((/* implicit */long long int) (short)-6763);
                            }
                            /* vectorizable */
                            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                            {
                                arr_28 [(short)16] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3671584220U)) ? (((/* implicit */int) arr_24 [i_8] [i_1] [i_3] [i_1] [i_1])) : (((/* implicit */int) arr_23 [2LL] [i_4 + 1] [i_2] [2LL] [i_2 + 2] [15LL]))));
                                arr_29 [i_1] [i_2] [16] [i_1] [i_8] = ((/* implicit */long long int) ((arr_4 [i_1]) != (arr_4 [i_1])));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)49266)) < (((/* implicit */int) (short)6774)))))) != (((((/* implicit */_Bool) arr_8 [2])) ? (((/* implicit */long long int) 623383069U)) : (arr_12 [i_1] [i_4] [i_4] [10ULL]))))))));
                            }
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((6050281509871415458LL) == (((/* implicit */long long int) ((/* implicit */int) min((arr_22 [i_1] [i_2] [i_1] [i_2 + 1] [i_1]), (arr_22 [i_1] [i_1] [i_1] [i_2 + 1] [i_1])))))));
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            {
                                arr_38 [i_1] = ((/* implicit */short) ((((15454470889806925141ULL) | (((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_9] [i_2] [2U])))) | (((/* implicit */unsigned long long int) ((long long int) arr_15 [i_1] [i_2] [i_9] [6LL] [i_11])))));
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6780)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_11] [0ULL] [i_11] [i_11] [i_2 + 2]))) : (623383087U)))) ? (((/* implicit */long long int) 3840523557U)) : (-794296956319646089LL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_2)) == ((((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) (short)-6781)) ? (((/* implicit */unsigned long long int) -7072422072133978943LL)) : (1293173291251466829ULL))) : (((/* implicit */unsigned long long int) min((var_13), (var_5))))))));
}

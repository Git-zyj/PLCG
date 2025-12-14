/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112108
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
    var_13 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 16876292686360183136ULL)) ? (-1140660596) : (((/* implicit */int) (short)25644))))), (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) ((var_12) ? (-1140660596) : (((/* implicit */int) var_7)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1140660580)) ? (-1140660580) : (((/* implicit */int) ((-1140660585) > (1140660584))))));
        var_15 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((unsigned long long int) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_5 [i_1])))))));
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-51)) | (-1140660580))))));
    }
    for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 4; i_3 < 23; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                {
                    var_18 |= ((/* implicit */signed char) ((int) 1140660573));
                    var_19 = ((/* implicit */unsigned char) ((unsigned int) ((long long int) arr_13 [i_4 + 1])));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) ((unsigned long long int) min((16669891435206398948ULL), (((/* implicit */unsigned long long int) (~(arr_9 [i_4])))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((max((((/* implicit */int) ((signed char) var_9))), ((~(-1140660585))))), (((/* implicit */int) ((unsigned short) min((-1140660593), (((/* implicit */int) var_7)))))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        var_22 += ((/* implicit */unsigned short) ((short) var_12));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) / (30426731)))), (((((/* implicit */_Bool) var_11)) ? (arr_9 [i_2]) : (((/* implicit */long long int) -1140660585))))))) ? (((/* implicit */int) arr_17 [20] [i_4 + 2])) : (((/* implicit */int) (((~(((/* implicit */int) var_11)))) < (((((/* implicit */int) (unsigned char)0)) << (((1140660605) - (1140660592))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) (unsigned short)21884);
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))) - (3931543185284168049ULL)));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 23; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                var_26 |= ((/* implicit */int) ((unsigned char) arr_15 [i_2] [i_3] [i_3] [(_Bool)1] [i_3] [(short)23]));
                                arr_26 [i_8] [i_8] = ((/* implicit */unsigned int) (signed char)49);
                                arr_27 [17LL] [i_3] [i_2] |= ((/* implicit */short) (~(0ULL)));
                                arr_28 [i_2 - 1] [i_3] [i_4 + 2] [i_3] [i_9] = ((/* implicit */signed char) -1140660579);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 |= ((/* implicit */signed char) max((((/* implicit */int) ((-1140660571) >= (((/* implicit */int) (unsigned short)42724))))), (((((/* implicit */int) arr_8 [i_2 - 1])) & (((/* implicit */int) arr_8 [i_2 + 3]))))));
    }
    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
}

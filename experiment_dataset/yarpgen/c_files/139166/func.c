/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139166
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) var_5);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_2]);
                    var_20 = ((/* implicit */int) arr_8 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((max((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) % (var_6))), (((/* implicit */long long int) ((int) -1322439517))))), (((/* implicit */long long int) arr_4 [i_0] [i_1])))))));
                                var_22 |= ((/* implicit */short) ((long long int) (_Bool)0));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((arr_3 [i_0] [i_1] [i_2 + 1]) / (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 369257054)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))))))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 24; i_5 += 2) 
                {
                    arr_21 [i_5] [i_1] [i_5] = ((/* implicit */signed char) arr_16 [i_5] [i_0] [i_1] [i_5] [i_5]);
                    arr_22 [i_5] [i_5] = ((/* implicit */long long int) var_10);
                    var_24 ^= ((/* implicit */signed char) var_4);
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 2; i_6 < 24; i_6 += 2) 
                {
                    var_25 = ((/* implicit */signed char) ((unsigned long long int) arr_19 [i_6] [i_6 - 2] [i_0]));
                    var_26 += ((/* implicit */int) (short)0);
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_18 [(signed char)4] [i_6] [i_6 + 1] [i_6]))));
                    var_28 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)30978))) - (var_6)));
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_29 ^= ((/* implicit */unsigned char) -2772804991632067786LL);
                    arr_29 [i_7] [i_7] [i_7] = (!(((/* implicit */_Bool) arr_0 [i_7] [i_0])));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7)) && (((/* implicit */_Bool) (unsigned short)65516)))))));
                    var_31 ^= ((/* implicit */short) arr_26 [i_0] [i_0] [i_0]);
                }
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)32)))))));
                var_33 = ((/* implicit */unsigned short) arr_11 [20ULL] [i_1] [i_1] [(signed char)10] [i_1] [i_1]);
            }
        } 
    } 
    var_34 -= ((/* implicit */int) ((short) 1332792307));
    var_35 = ((/* implicit */signed char) var_3);
    var_36 = ((/* implicit */unsigned short) var_14);
    var_37 = var_3;
}

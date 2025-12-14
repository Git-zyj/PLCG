/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182498
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1822934364U)))) ? (min((var_5), ((+(((/* implicit */int) (_Bool)1)))))) : (max(((-(((/* implicit */int) arr_10 [i_0 - 2] [i_1] [i_2 - 1] [i_3] [(_Bool)1])))), (((/* implicit */int) arr_3 [i_0 + 4] [i_1]))))));
                                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1 + 1] [i_0])) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 - 1] [i_0 - 1])))))));
                                arr_16 [i_0] [i_3] [i_2] [10ULL] [i_4] = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 - 3] [i_3] [i_1]))) : (((arr_9 [i_2] [i_2] [11ULL] [i_2] [i_3] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) var_7))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */int) arr_0 [i_1] [i_3]))))) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((((/* implicit */_Bool) (unsigned short)27723)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_4 - 1] [(unsigned char)13] [12ULL] [(_Bool)1] [i_0 - 3])))))))));
                                var_16 = ((/* implicit */unsigned char) min((((unsigned int) arr_2 [i_2 - 2] [i_1 + 1])), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_6 [i_2 + 1]))) > (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((63050394783186944ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)51961))))));
                                var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [i_5])), (((2395429946984674103ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53555)))))));
                                var_19 -= ((/* implicit */_Bool) min((((((/* implicit */int) arr_19 [i_6] [i_5] [i_2] [i_1] [(_Bool)1] [i_0])) ^ (((/* implicit */int) var_9)))), (((((/* implicit */int) (unsigned char)250)) ^ (((/* implicit */int) (unsigned char)153))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned short) var_2))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */int) (short)16755)) >= (((/* implicit */int) var_3)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (18383693678926364672ULL))))))) << (((((/* implicit */int) var_2)) - (62)))));
}

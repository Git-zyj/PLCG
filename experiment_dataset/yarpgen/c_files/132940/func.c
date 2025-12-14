/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132940
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_4))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) & (((/* implicit */int) var_8))));
    var_17 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((935747870U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)930))))))))) > ((-(12ULL)))));
                arr_6 [i_1] = ((long long int) ((max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_0)))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 + 1] [16])), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [15LL] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_4])));
                                var_21 = ((/* implicit */unsigned char) arr_10 [i_4] [i_3] [i_0] [i_0]);
                                arr_15 [i_1] [13LL] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3]))) <= (min((var_13), (arr_4 [i_1])))))), (var_2)));
                            }
                        } 
                    } 
                }
                arr_16 [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2574298558U)), (arr_22 [i_6] [i_5] [i_1] [i_0] [i_0])))) % (max((((/* implicit */unsigned long long int) arr_20 [i_1])), (12287499202543668555ULL))))) * (((arr_11 [i_6] [i_5] [i_0 - 2] [i_0 - 2]) ? (18252461075432600723ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0] [i_0]))))))))));
                            var_23 = var_1;
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), ((+(20ULL)))));
                            var_25 = ((/* implicit */long long int) (unsigned short)42177);
                        }
                    } 
                } 
            }
        } 
    } 
}

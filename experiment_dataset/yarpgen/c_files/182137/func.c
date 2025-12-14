/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182137
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [i_1 - 2] [i_1 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((arr_4 [i_0] [i_0] [i_1 - 2]) - (arr_3 [i_0] [i_0]))) : ((+(arr_3 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [4LL] [7U] [i_0] [i_2 + 1] [i_3] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)19)), ((-2147483647 - 1))))), (((((/* implicit */unsigned long long int) 3436292664U)) * (18446744073709551615ULL))))) | (((/* implicit */unsigned long long int) (+(max((arr_4 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1 - 1])))))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                            {
                                arr_15 [i_2] [i_3] [i_3] [i_2] [i_1 + 1] [i_1 + 1] [i_2] &= ((/* implicit */long long int) arr_6 [i_0] [i_2]);
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) (~(-28)))) : (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_2]))))))) ? ((~((+((-2147483647 - 1)))))) : (arr_12 [i_0] [i_0] [i_0] [i_3] [i_4] [3]))))));
                            }
                            arr_16 [i_0] [i_1 + 1] [i_1 - 2] [i_1 - 1] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_1 - 2])), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */unsigned short) (+((+(arr_6 [i_0] [i_1 - 2])))));
                var_16 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1] [(unsigned short)0])))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)5]))) >= (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1] [i_1 - 1]))) : (arr_0 [i_0] [10]))))))));
                arr_17 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_6 [i_1 - 1] [i_1 - 1]), (arr_6 [i_1 - 2] [0U])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : ((+(0ULL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) 134217727LL);
}

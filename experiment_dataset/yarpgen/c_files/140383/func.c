/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140383
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
    var_17 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) var_11)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) var_6))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_3] [i_4]);
                                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_2 [i_0]))))))), ((-(max((((/* implicit */unsigned long long int) (unsigned short)21867)), (0ULL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) -9153762976439314994LL)) ? (17083657854063697952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))))), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_5] [i_6 + 4]))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_6 - 2] [i_0 - 1])) <= (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_6 + 3] [i_5] [i_0] [i_0 - 1] [i_0])), (arr_11 [i_5] [i_5] [i_5] [i_1] [i_0])))))))) + ((~(min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_5 [i_6])))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_0] [i_0 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1])), (arr_18 [i_1] [i_1] [i_1] [i_0] [i_0 - 1])))), (max((((/* implicit */long long int) var_4)), (var_12))))))));
                arr_22 [i_0] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_17 [i_0 - 1])))), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_1])), (var_8))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_0] [i_1] [i_1])) / (((/* implicit */int) arr_20 [i_1] [i_1] [i_0] [i_0] [i_0]))))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107400
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
    var_15 = ((/* implicit */unsigned char) (short)-7521);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) | (3904232517162197997LL)));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-48)))))));
                                var_18 = ((/* implicit */unsigned short) ((long long int) min((min((((/* implicit */unsigned char) (signed char)-48)), (arr_3 [i_2] [(unsigned short)9]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_4] [i_4]))))))));
                                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [(unsigned char)3] [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_2]))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])) ? (-3904232517162197979LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18933))))))))));
                                var_20 = ((/* implicit */unsigned char) arr_5 [i_0] [(_Bool)1]);
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1 - 2] [i_1])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_11))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_1 - 1])) > (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [(_Bool)1] [i_1] [i_1 - 1]))))), (max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-6902))) == (var_14)))), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1])))))))))));
                    var_24 = ((/* implicit */signed char) -5506870521471246164LL);
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) -3904232517162197997LL))));
    var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3904232517162197997LL)) ? (1ULL) : (((/* implicit */unsigned long long int) var_6))));
}

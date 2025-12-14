/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156347
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [(signed char)16] [i_2] [(short)12] |= ((/* implicit */unsigned char) arr_2 [i_0] [(unsigned short)14]);
                            /* LoopSeq 3 */
                            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                            {
                                var_18 = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_0)), (14423804211077053128ULL))), (((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_4] [i_4]))))) ? ((+(((((/* implicit */unsigned long long int) arr_6 [9] [i_2 + 1] [i_1])) ^ (4022939862632498488ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
                                var_19 = ((/* implicit */long long int) min(((-((+(((/* implicit */int) (short)31163)))))), ((+(((arr_1 [i_3] [i_1]) / (((/* implicit */int) var_12))))))));
                            }
                            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                            {
                                var_20 -= var_4;
                                var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [6] [i_5])) ? (var_6) : (((/* implicit */unsigned long long int) arr_6 [i_0] [(signed char)19] [i_0]))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_0] [i_2 - 2] [i_1] [i_3] [i_5]))));
                                var_22 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((min((arr_8 [i_0]), (((/* implicit */long long int) (short)31156)))) < (((/* implicit */long long int) (+(arr_13 [i_1] [i_2] [i_3] [(unsigned short)10]))))))), (((((/* implicit */_Bool) min((((/* implicit */int) (short)-31165)), (-1310957453)))) ? (4022939862632498476ULL) : (((/* implicit */unsigned long long int) -952643371))))));
                                arr_16 [i_0] [i_1] [i_2 - 2] [i_1] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1048064)), (14423804211077053127ULL)));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                            {
                                var_23 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 4022939862632498476ULL)) ? (arr_13 [i_0] [i_0] [i_2 - 2] [14ULL]) : (((/* implicit */int) var_5)))) == (((((/* implicit */_Bool) arr_12 [i_2 - 3] [i_3] [(signed char)18] [i_3] [i_6])) ? (-1077813262) : (((/* implicit */int) (short)31150))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = arr_1 [i_3] [i_6];
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) -81870080);
                var_25 ^= ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [(signed char)18] [i_0])) <= ((+(((/* implicit */int) (short)-31150))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) var_1);
}

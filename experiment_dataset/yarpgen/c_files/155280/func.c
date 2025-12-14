/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155280
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((min((var_10), (((/* implicit */unsigned long long int) (unsigned char)92)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_9))))) >= (3873393662518958371ULL))))))))));
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) | (((/* implicit */int) (short)6144)))) == (((/* implicit */int) (unsigned short)20080))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 6557623160494281761ULL))));
                    var_17 |= ((/* implicit */unsigned long long int) (short)-6144);
                    var_18 -= ((/* implicit */unsigned char) min((arr_4 [i_0 - 1] [i_0] [i_0 - 4]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2] [7ULL]))))), (var_6))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1 + 2] [i_1] [(short)0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_9 [2ULL] [i_1] [i_1] [i_1] [4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5370))) : (arr_7 [i_0] [i_1 - 2] [i_2] [i_4])))))));
                                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_2 [i_1 - 3] [i_1 - 3])), (min((((unsigned long long int) arr_2 [i_0] [i_0])), (arr_9 [i_0 - 3] [i_0 - 3] [i_1] [i_0] [i_2])))));
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))));
                                arr_12 [i_4] [i_4] [i_2] [i_3] [i_4] &= ((/* implicit */short) ((unsigned char) (unsigned short)46735));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

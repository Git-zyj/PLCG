/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187704
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
    var_19 |= ((/* implicit */signed char) var_10);
    var_20 = ((/* implicit */long long int) (short)1023);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((arr_4 [i_0]) >= (((/* implicit */long long int) (+(((/* implicit */int) (short)1023))))))) ? (max((min((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((var_0), (var_8)))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) : (((9411630341473897044ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_0 + 1] [i_1] [(signed char)16] [i_2] = ((/* implicit */short) arr_6 [i_0] [i_1] [i_0]);
                    var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) (short)1023)), (min((max((242310944U), (((/* implicit */unsigned int) arr_1 [i_1])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (var_3))))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            {
                                arr_17 [i_5] [i_4] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (max((((/* implicit */unsigned long long int) min((3963283948U), (((/* implicit */unsigned int) var_13))))), (((arr_14 [i_0] [i_0] [i_0] [i_4] [i_1] [i_3]) ? (((/* implicit */unsigned long long int) var_14)) : (var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) >= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_5] [i_4])), (3068133311U))))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL))))))), (((max((((/* implicit */unsigned long long int) var_6)), (arr_9 [i_5] [i_3] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((arr_13 [i_0 + 1] [i_1] [i_1] [15ULL]) ^ (((/* implicit */long long int) ((/* implicit */int) var_18))))))))));
                                arr_19 [i_1] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */long long int) max(((short)1020), (((/* implicit */short) ((((arr_2 [i_1] [i_1]) > (((/* implicit */unsigned long long int) var_3)))) && (arr_10 [i_0 - 1] [i_0 - 2]))))));
                                var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))) >= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_15))))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) max((arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 1]), (min((((/* implicit */long long int) 242310943U)), (arr_16 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0])))))) : (min((min((((/* implicit */unsigned long long int) (short)22132)), (18446744073709551597ULL))), (2ULL)))));
                }
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_8))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) 6ULL);
}

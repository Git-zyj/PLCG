/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133041
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)122)), (18446744073709551615ULL)));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((min((max((((/* implicit */unsigned long long int) arr_4 [i_2] [i_1 + 2])), (arr_2 [i_1] [i_0]))), (((/* implicit */unsigned long long int) min((arr_6 [(_Bool)1] [10ULL] [i_0]), (((/* implicit */unsigned char) var_4))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_1)), (arr_1 [i_0])))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)2477)))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */signed char) max(((_Bool)0), ((_Bool)1)))), ((signed char)-122)))), (min((min((217319891516024067LL), (((/* implicit */long long int) (signed char)61)))), (((/* implicit */long long int) max((((/* implicit */signed char) arr_8 [i_4] [i_3] [i_0] [i_1 + 1] [i_0])), ((signed char)-55))))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)54392)))), (max((arr_2 [i_1] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)11143)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) max((((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4])), (arr_11 [i_4] [i_3] [i_1] [i_1] [(_Bool)1])))), (min((((/* implicit */unsigned short) arr_8 [i_4] [i_3] [i_1 + 4] [i_1 + 4] [i_0])), ((unsigned short)20639))))))))));
                                var_20 += ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)8160)), (4294967295U)))), (9104667395151067440LL)));
                                arr_13 [i_2] [i_3] [i_3] [i_2] [i_1] [i_0] = max((min((max((var_8), (((/* implicit */unsigned long long int) arr_1 [i_4])))), (((/* implicit */unsigned long long int) max((-9104667395151067440LL), (((/* implicit */long long int) (_Bool)1))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) max((arr_8 [i_4] [20ULL] [i_2] [i_0] [i_0]), (arr_10 [i_0])))), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8128)))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((max((arr_0 [i_1] [i_3]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) max((var_1), (var_5))))))), (max((min((var_10), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_1] [i_2] [21LL] [i_4]), ((_Bool)1)))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (min((max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-89)))), (min((var_10), (((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned short)9])))))), (((/* implicit */unsigned long long int) max((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (-9104667395151067411LL))), (min((var_3), (((/* implicit */long long int) (signed char)62)))))))))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */signed char) max((max((max((-217319891516024067LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_11)), (var_7)))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) max((var_2), ((_Bool)1)))), (max((((/* implicit */unsigned short) var_15)), (var_7))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155526
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) arr_0 [i_0]);
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) 1565242061));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) ((short) (_Bool)1))), (min((-689238871), (1565242061)))));
                    var_12 = 3145756415U;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] &= ((/* implicit */unsigned int) (unsigned char)55);
                                var_13 = ((/* implicit */unsigned int) -582094392);
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_1 - 1] [i_1 - 1] [i_2 + 1])), (min((((/* implicit */long long int) 4294967295U)), (4515997441483020180LL)))))) ? (arr_13 [12ULL] [12ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_8 [i_0] [(signed char)17] [(_Bool)1])) / (arr_14 [i_1 + 2] [i_1] [i_2 + 1] [10] [i_1] [i_1 + 2] [i_2 + 1]))) <= (((/* implicit */int) (unsigned short)65526))))))));
                    var_16 -= ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (_Bool)1))), (((int) arr_12 [i_2] [i_1] [(short)10] [5LL] [(unsigned short)0]))));
                }
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (long long int i_6 = 3; i_6 < 8; i_6 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) arr_16 [i_6]);
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_14 [i_6] [i_6] [i_5] [(_Bool)1] [(short)10] [i_6 - 1] [i_5]))) ? (((/* implicit */unsigned int) -582094402)) : (min((3145756409U), (min((arr_20 [(_Bool)1]), (3145756435U)))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (arr_11 [i_6 - 2] [i_6] [i_6 + 3] [i_6 - 3] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-2668))));
                arr_22 [i_5] = ((/* implicit */long long int) ((int) min((((/* implicit */unsigned long long int) min(((unsigned char)55), (((/* implicit */unsigned char) (signed char)10))))), (max((36028797018931200ULL), (((/* implicit */unsigned long long int) (unsigned short)65530)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((min((var_3), (((/* implicit */unsigned long long int) ((signed char) 466032217))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) -582094392)) ? (((/* implicit */unsigned int) 664653189)) : (var_1)))), (max((var_7), (((/* implicit */long long int) var_0))))))))))));
}

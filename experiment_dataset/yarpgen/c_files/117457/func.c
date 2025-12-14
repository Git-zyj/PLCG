/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117457
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1]))) | (var_4))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) var_15);
                                var_18 = ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_10))))) | (max((1017743822U), (((/* implicit */unsigned int) 2147483647)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                {
                    arr_19 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) -2147483647);
                    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_5]))))));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9)))))) ^ (min((((/* implicit */unsigned int) -2147483647)), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) || (((/* implicit */_Bool) arr_15 [i_0] [i_0]))));
        arr_21 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), (var_6)))), (((unsigned int) arr_2 [i_0]))))), (max((((/* implicit */long long int) arr_15 [i_0] [i_0])), (arr_14 [i_0])))));
        var_20 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (3898356793608988201ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_0])), (((((/* implicit */_Bool) 14548387280100563415ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_1)))))));
    }
    for (int i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
    {
        var_21 ^= ((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7])) ? (((((/* implicit */_Bool) min((4294967292U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) var_15))) : (((/* implicit */int) (short)331)))) : (((/* implicit */int) ((short) var_13))));
        var_22 ^= ((/* implicit */long long int) ((((long long int) (unsigned short)18434)) > (((/* implicit */long long int) ((/* implicit */int) var_13)))));
        arr_25 [i_7] [i_7] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))), ((!(((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
    }
    var_23 = ((/* implicit */short) (signed char)-78);
    var_24 = ((/* implicit */short) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_15))));
}

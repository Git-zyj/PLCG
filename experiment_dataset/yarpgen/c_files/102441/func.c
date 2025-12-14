/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102441
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 += ((8589934591LL) - (((/* implicit */long long int) 18U)));
                var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18U)) ? (((/* implicit */long long int) 4294967278U)) : (-6752605490578384222LL)));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1100986454))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        for (unsigned char i_3 = 4; i_3 < 17; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) 15819098023404182072ULL)) || (((/* implicit */_Bool) (unsigned char)6)))) && (((((/* implicit */_Bool) 691127297554760566ULL)) && (((/* implicit */_Bool) (unsigned char)2))))))));
                    arr_14 [i_2] = ((/* implicit */_Bool) min((arr_2 [i_2] [i_3 - 3] [i_2]), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_7))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (long long int i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (signed char)-31)) > (((/* implicit */int) arr_7 [i_6 - 1] [i_6 + 2]))))), (((((/* implicit */int) var_0)) - (((/* implicit */int) arr_7 [i_6 + 2] [i_6]))))));
                var_16 = ((/* implicit */unsigned int) 12695437297964318495ULL);
                arr_21 [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_6 - 1])) * (((/* implicit */int) var_6))))) - (min((((/* implicit */long long int) arr_15 [i_6 + 1])), (var_2)))));
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    arr_26 [i_5] = ((/* implicit */int) var_7);
                    var_17 = ((/* implicit */unsigned int) var_3);
                }
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) -8589934581LL)), (12695437297964318494ULL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 4; i_9 < 15; i_9 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_9)))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) & (min((min((var_2), (((/* implicit */long long int) arr_32 [i_10] [0ULL] [i_6])))), (((/* implicit */long long int) (unsigned short)13337)))))))));
                            var_21 = ((/* implicit */int) min((-8059507692418792398LL), (((/* implicit */long long int) (signed char)32))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) (!(((/* implicit */_Bool) 8589934584LL)))))));
                            arr_35 [i_10] [i_10] [i_9] [i_9] [i_8] [i_6] [i_10] = ((/* implicit */long long int) ((unsigned long long int) min((16143260952177378618ULL), (((/* implicit */unsigned long long int) var_10)))));
                            arr_36 [i_5] [(signed char)14] [i_10] [(_Bool)1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_9 [i_6 + 2] [i_10] [i_6 - 1]))))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_30 [i_11] [i_6] [i_8] [i_6 + 2] [i_6] [i_11]))) ? (((/* implicit */int) min((arr_25 [i_6 + 1] [i_6 + 2]), (((/* implicit */unsigned char) arr_27 [i_6] [i_6 - 1] [i_8]))))) : (((((/* implicit */_Bool) arr_27 [i_5] [i_6 - 1] [i_8])) ? (((/* implicit */int) arr_25 [i_6 - 1] [i_6 - 1])) : (arr_30 [i_5] [i_5] [i_8] [i_6 - 1] [i_5] [i_5])))));
                        var_24 = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) - ((+(((/* implicit */int) var_10))))))));
                    }
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((unsigned long long int) var_8));
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)55)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)179))))) < (((/* implicit */int) ((short) -8589934568LL)))))))))));
}

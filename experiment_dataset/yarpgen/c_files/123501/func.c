/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123501
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
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((2080528788), (((/* implicit */int) (short)-2725))))) ? (min((min((((/* implicit */int) (short)5470)), (2080528788))), (((/* implicit */int) (short)-21707)))) : (((/* implicit */int) (unsigned char)80))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_12 [2U] [2U] [i_2 - 2] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_13)))) ? (((((/* implicit */_Bool) (unsigned char)80)) ? (var_15) : (((/* implicit */unsigned long long int) var_6)))) : (min((var_4), (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))), (max((((/* implicit */unsigned long long int) var_8)), (arr_6 [i_0] [i_0])))))));
                        arr_13 [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (7125928530863850482LL) : (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) (short)14087)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (arr_7 [i_0] [i_3] [i_3] [5])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (unsigned char)80)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_3 [i_3]))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) 2080528788)) : (arr_5 [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_5 [0LL] [i_1] [0LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (7180546980811318058LL)))))));
                        var_16 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2]))) : (arr_0 [i_2 - 3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-2726)) : (((/* implicit */int) var_14))))) : (min((((/* implicit */long long int) var_6)), ((-9223372036854775807LL - 1LL)))))), (max((min((((/* implicit */long long int) 3618794775U)), (4551483860760560366LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15302)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_2] [i_1]))))) ? (((((/* implicit */_Bool) (short)2725)) ? (1754362548638023959ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_4])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_4])) ? (406811532) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 451314429)) ? (arr_6 [i_1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)2744)) : (((/* implicit */int) var_5)))))));
                    }
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))), (min((((/* implicit */unsigned long long int) var_14)), (var_4))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1672964326U)))), (min((9223372036854775807LL), (((/* implicit */long long int) var_10)))))))));
    var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (9223372036854775807LL)))) ? (min((var_4), (((/* implicit */unsigned long long int) 13U)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 7843186694011246700LL)) : (var_15))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) max(((signed char)-33), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) 4551483860760560353LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-54)))))))));
    var_21 = ((/* implicit */short) max((11312599623618666194ULL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14428321807177746039ULL)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 840750118428557399LL)) : (((((/* implicit */_Bool) 14723118521980871765ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4570))) : (7757170814189335847ULL)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11125
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
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))))));
        var_15 = 9223372036854775807LL;
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))), (((((arr_0 [11ULL]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 - 3]))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (4294967270U) : (26U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])))))));
        arr_3 [i_0 - 3] [21ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(arr_0 [i_0 - 2]))) << (((min((arr_0 [i_0]), (var_11))) - (3722683646U)))))) && (((/* implicit */_Bool) (-((~(((/* implicit */int) var_10)))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((-(3196089031U))) : (max((3196089031U), (((/* implicit */unsigned int) var_5))))))) || (((/* implicit */_Bool) var_8))));
            var_17 = ((long long int) 9223372036854775807LL);
            arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) / (4294967270U)))) ? (min((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (1098878264U) : (909494165U))), (((/* implicit */unsigned int) ((short) (unsigned char)185))))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((var_10), (var_10)))) >> (((max((((/* implicit */unsigned long long int) (short)22599)), (11947847488267726982ULL))) - (11947847488267726982ULL))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                arr_10 [i_0] [i_1] [i_2] [(short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_8 [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (var_4)))) : (((((/* implicit */_Bool) var_0)) ? (-9223372036854775796LL) : (var_12)))));
                arr_11 [i_2] [i_1] [1U] = ((/* implicit */short) ((_Bool) (~(2147483647))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-54))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (_Bool)1)))))));
            }
        }
        for (short i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            arr_15 [i_0 - 3] &= ((/* implicit */int) arr_0 [i_3 - 1]);
            var_19 *= ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0 + 2] [i_3 + 2]), (arr_9 [i_0] [i_3] [i_0 - 2] [i_3 - 2])))), ((~(((/* implicit */int) (signed char)22))))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_4 [i_4] [i_4]))))));
        arr_18 [(signed char)0] [i_4] = ((/* implicit */int) (signed char)-22);
        arr_19 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) arr_9 [i_4] [i_4] [6U] [i_4])) : (((/* implicit */int) arr_4 [i_4] [i_4]))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 8; i_7 += 3) 
                {
                    {
                        var_21 += ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_22 [0LL])))) ? (min((((/* implicit */int) (unsigned char)80)), (arr_22 [0ULL]))) : (max((((/* implicit */int) (signed char)-59)), (var_8)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (arr_0 [i_4])))) ? (((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (arr_17 [i_4]) : (((/* implicit */long long int) arr_13 [i_4] [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13))))))));
                        arr_27 [i_5] [i_5] [i_6] [i_7] [i_7] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_24 [i_4] [i_5] [i_6] [i_7])) : (((/* implicit */int) var_7))))), (((((var_13) ? (((/* implicit */unsigned long long int) arr_22 [i_5])) : (arr_20 [(signed char)5]))) << (((arr_17 [i_7 + 1]) + (5474637978814936509LL)))))));
                        arr_28 [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_5])) || (((/* implicit */_Bool) arr_0 [i_4])))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [2U] [i_5] [2U] [i_7 - 1])) <= (((/* implicit */int) arr_21 [i_5]))))) : (((/* implicit */int) var_9)))));
                    }
                } 
            } 
        } 
        var_22 ^= ((/* implicit */unsigned char) (signed char)7);
    }
    var_23 = ((min((((/* implicit */unsigned int) var_13)), (((var_5) ? (var_11) : (var_4))))) ^ (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 681012196340138023ULL)) && (((/* implicit */_Bool) (signed char)-21)))) ? (((/* implicit */int) (short)9872)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2226933797570337273ULL)) ? (((/* implicit */int) (short)-22596)) : (((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (unsigned char)220)) : (1500391170)))))) ? (1098878277U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)60)) <= (((((/* implicit */_Bool) 6879053854403061965LL)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (_Bool)1))))))))));
}

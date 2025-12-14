/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164580
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
    var_17 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) (signed char)63)) ? (3627950960740604794LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                var_18 += arr_6 [i_0] [i_0] [i_0] [i_0];
                var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_2 + 2]) : (arr_2 [i_2 - 1])));
                var_20 = ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_2)));
                var_21 = ((/* implicit */long long int) var_6);
            }
            var_22 |= ((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0 + 1] [i_0]))) / (((/* implicit */long long int) max((var_10), ((((_Bool)1) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (unsigned char)150))))))));
            arr_9 [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) min((var_14), (var_14)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (-5258851591613835134LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_2))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_23 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) 937224039)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-5258851591613835134LL))), (((5258851591613835111LL) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0] [i_0 - 1])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_11 [i_0 - 1] [i_0 - 1]) : (arr_11 [16ULL] [i_4])));
                var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_3])) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)9)) ? (arr_5 [i_0 + 1] [i_0]) : (arr_5 [i_0 + 1] [i_0])));
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (arr_10 [i_0] [i_0 + 1])));
                var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_3])) ? (var_11) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_5] [i_0 - 1]))))));
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                var_29 = ((/* implicit */long long int) (-(arr_18 [i_0] [i_0] [15ULL])));
                arr_21 [i_0] [i_3] [i_6] [i_0 - 1] = ((/* implicit */long long int) ((((-1800022423) / (((/* implicit */int) var_15)))) >= (((/* implicit */int) var_16))));
            }
        }
        var_30 *= min((((/* implicit */long long int) ((_Bool) (((_Bool)1) ? (var_10) : (-1330245749))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (210257166)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_11 [i_0] [i_0]))))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (max((210257166), (arr_13 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-90)))) : (min((((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [(_Bool)1]))) : (8073677514907661234LL))), (((/* implicit */long long int) arr_19 [i_0 - 2] [i_0]))))));
    }
    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)243)) ? (5258851591613835133LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) var_5)))) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))))));
    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-5258851591613835121LL)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_15)))))));
}

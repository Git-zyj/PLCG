/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109039
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 1450285618609206560ULL)) ? (1450285618609206553ULL) : (((/* implicit */unsigned long long int) 1U)))) : (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_15 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((((/* implicit */int) arr_3 [(signed char)4] [i_1])), (arr_1 [i_0]))), (((/* implicit */int) max((var_5), (((/* implicit */short) (_Bool)0))))))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((1450285618609206532ULL) < (9223371487098961920ULL)));
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            arr_11 [i_0] [11LL] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) var_12)));
            var_16 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) max((16996458455100345084ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (371992900))));
            var_17 -= ((/* implicit */short) var_1);
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_3 [10LL] [10LL]))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) 2147483647);
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) - (((arr_14 [i_4] [i_3]) / (((/* implicit */int) arr_3 [(_Bool)1] [i_3]))))))) ? (((arr_15 [(unsigned char)0]) ? (((/* implicit */int) ((_Bool) 1450285618609206524ULL))) : (((/* implicit */int) arr_6 [i_4])))) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)18))))), ((unsigned char)72))))));
                var_21 = (signed char)-86;
                var_22 = ((/* implicit */signed char) ((arr_16 [i_0] [i_0 + 3] [i_0] [6]) * (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)65535)))) | (((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_8)))))))));
                var_23 ^= ((/* implicit */_Bool) min((max((((/* implicit */int) (unsigned char)7)), (523776))), (((/* implicit */int) min((((/* implicit */short) min(((signed char)-70), (((/* implicit */signed char) (_Bool)1))))), (((short) (unsigned char)41)))))));
            }
        }
        /* vectorizable */
        for (signed char i_5 = 2; i_5 < 12; i_5 += 3) 
        {
            arr_20 [2U] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_5])) ? (1534084752433881671ULL) : (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) (unsigned char)30)) : (var_6))))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_1 [(signed char)12]))));
        }
        var_25 = ((/* implicit */signed char) var_3);
        arr_21 [i_0 + 3] = ((/* implicit */unsigned short) (unsigned char)92);
        var_26 ^= ((/* implicit */short) (unsigned short)17);
    }
    for (int i_6 = 1; i_6 < 8; i_6 += 1) 
    {
        var_27 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_13))))))), (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) var_8))))) ? (arr_23 [2]) : (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))))));
        var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65528))));
        var_29 = ((/* implicit */long long int) 16996458455100345092ULL);
        var_30 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)253))));
    }
    var_31 = (unsigned char)162;
}

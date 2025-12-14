/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161642
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
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_18), (((/* implicit */unsigned short) var_1)))))))) ? (((((/* implicit */_Bool) ((short) var_17))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_10)))) : (var_9))) : (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) <= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_4 [i_0 + 1] = ((/* implicit */short) var_6);
    }
    for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((-2683622516797709309LL), (((/* implicit */long long int) arr_7 [i_1])))), (((/* implicit */long long int) min((arr_7 [i_1]), (arr_7 [i_1]))))))) ? (((/* implicit */int) arr_6 [i_1])) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4821))))) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (_Bool)0))))))));
        arr_10 [(short)6] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_1 + 1])), (arr_6 [(unsigned char)6])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -394589819)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4821))))) ? (((((/* implicit */_Bool) arr_8 [8])) ? (8628499586498728948LL) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
    }
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 2]))))) ? (min((((/* implicit */long long int) (unsigned char)10)), (-8754141335774012453LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_12 [i_2]))))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) : (var_7))) : (((((/* implicit */unsigned long long int) (+(var_14)))) + (max((11990726171221418232ULL), (((/* implicit */unsigned long long int) (signed char)-1))))))));
        arr_14 [(signed char)8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) arr_0 [i_2] [i_2 + 2]))))))) : (((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2 + 2])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-8628499586498728948LL)))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 4; i_3 < 16; i_3 += 2) 
        {
            var_21 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3 - 4] [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_16 [i_3 - 4] [i_3 + 1] [i_3])) : (((/* implicit */int) arr_16 [i_3 - 4] [i_3 + 1] [i_3]))))) - (max((max((var_14), (((/* implicit */unsigned int) var_17)))), (min((((/* implicit */unsigned int) var_3)), (var_14)))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_2] [i_3] [i_3 - 2]))))) ? (((((/* implicit */_Bool) var_5)) ? ((+(12708531731963773903ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2])) ? (var_15) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_3])) ? (((/* implicit */int) arr_13 [i_2 - 1] [i_3])) : (((/* implicit */int) arr_16 [i_3 + 1] [i_3] [i_3 - 1]))))) ? (((/* implicit */int) arr_2 [i_3 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))))));
            var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3])) - (((/* implicit */int) arr_15 [i_3] [i_2 + 2] [i_2]))))) ? (((var_4) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_2])))))) : (min((((((/* implicit */int) arr_2 [i_3])) * (((/* implicit */int) var_10)))), ((+(((/* implicit */int) arr_1 [i_3 - 3]))))))));
            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */short) arr_12 [i_2]);
        }
    }
    var_24 = ((/* implicit */signed char) (+(var_9)));
    var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= ((~(((/* implicit */int) var_10)))))))) : (((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_4)), (var_13)))))))));
}

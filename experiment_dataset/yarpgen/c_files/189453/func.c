/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189453
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_1))))))))));
                arr_5 [i_1] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1350785347104070409ULL)) && (((/* implicit */_Bool) var_5)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (arr_1 [(signed char)10])))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_0)))))) : (((((/* implicit */int) ((5463010305290945028ULL) < (var_7)))) | (arr_4 [i_0])))));
            }
        } 
    } 
    var_11 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1350785347104070408ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)12)))) ^ (((/* implicit */int) var_4))))) ? ((~((~(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (10463589305472734015ULL)))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 27ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (((4321993500905651702LL) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) : (((arr_2 [i_2] [(_Bool)1] [i_2]) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (arr_4 [i_2])))));
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((arr_1 [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 18LL)) ? (((/* implicit */int) (unsigned short)34997)) : (((/* implicit */int) arr_2 [i_2] [i_2] [i_2])))) : (((((/* implicit */int) var_0)) >> (((var_7) - (858265793208253499ULL))))))))));
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3] [i_3] [i_3])) >> (((((/* implicit */int) arr_3 [(unsigned short)10] [i_3])) - (126)))))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))))) : (((/* implicit */unsigned int) ((((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)13] [(unsigned char)14]))))) ? ((-(arr_10 [4U]))) : (((/* implicit */int) arr_8 [i_3])))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_4))))) : (6ULL)))) ? (((637804800984947082ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_11 [i_3])) - (((/* implicit */int) arr_7 [(signed char)14] [i_3]))))))))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_3])))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_3] [i_3]))))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) % (arr_6 [i_3])))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120858
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
    var_14 = ((/* implicit */unsigned char) ((unsigned int) var_11));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)156)) <= (1075327780)));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1075327805) >> (((arr_0 [(unsigned short)17] [i_0]) - (2543224371074450341LL)))))) ? (max((((/* implicit */unsigned int) var_13)), (arr_1 [i_0 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_0 - 1])), ((short)1979)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))) : (max((23ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))))));
    }
    for (long long int i_1 = 4; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 4; i_3 < 19; i_3 += 3) /* same iter space */
            {
                arr_12 [i_2] [i_2] [15ULL] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (var_11) : (var_3))))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(7224150546805003035LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_2])) > (((/* implicit */int) arr_10 [i_2])))))) : (((((/* implicit */_Bool) arr_10 [i_2])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2])))))));
            }
            for (unsigned short i_4 = 4; i_4 < 19; i_4 += 3) /* same iter space */
            {
                var_16 ^= ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) arr_8 [i_1 - 1] [i_4]))), (((arr_14 [i_2] [i_2] [i_4]) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (1075327768))) + (70)))))));
                arr_15 [i_4 - 1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_2] [i_4 + 2]))) ? (((long long int) var_6)) : (((/* implicit */long long int) min((arr_9 [i_2] [i_4 - 4]), (((/* implicit */unsigned int) (_Bool)0)))))));
                var_17 = max((((/* implicit */unsigned int) arr_11 [1LL] [i_4])), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 7224150546805003031LL)))) % (507070712U))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                arr_18 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((short) -7224150546805003035LL));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_9 [i_2] [i_5]) : (536870912U)))) > (((((/* implicit */long long int) ((/* implicit */int) (signed char)40))) - (var_0)))));
                var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-4)) || (((/* implicit */_Bool) var_5)))))));
            }
            arr_19 [i_1 - 2] [i_2] [4LL] = ((/* implicit */int) ((var_8) < (max((min((((/* implicit */long long int) (short)(-32767 - 1))), (-7224150546805003037LL))), (((((/* implicit */_Bool) arr_7 [i_1 - 4])) ? (var_8) : (var_8)))))));
        }
        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_3))));
            var_21 -= ((/* implicit */long long int) min(((~(((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) (~((~(arr_14 [13ULL] [i_6] [i_6]))))))));
        }
        var_22 *= (~(var_10));
    }
}

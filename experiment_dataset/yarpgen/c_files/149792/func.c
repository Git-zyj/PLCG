/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149792
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
    var_16 = ((/* implicit */unsigned long long int) max((var_6), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14))))));
    var_17 = ((/* implicit */int) ((long long int) min((7603504571376270990LL), (((/* implicit */long long int) (signed char)1)))));
    var_18 |= ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)120)), (-2147483638)))), (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (4U))), (((/* implicit */unsigned int) (signed char)-121))))));
    var_19 *= var_14;
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_2 [16U] [16U] &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(2147483638)))) || (((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0 - 2] [(unsigned char)4])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */_Bool) ((int) 0ULL))) ? (min((((/* implicit */unsigned int) var_4)), (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (var_4))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_20 = ((7603504571376270990LL) != (((((/* implicit */_Bool) var_0)) ? (7603504571376271004LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-5413))))));
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_21 = ((/* implicit */int) arr_6 [i_1]);
                arr_11 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(var_12)))) ^ (((var_13) & (((/* implicit */unsigned long long int) var_8))))));
            }
            var_22 = ((/* implicit */int) arr_6 [i_1]);
            var_23 += ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) var_10)) : (arr_1 [i_1] [i_2])));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_2]))))))));
            arr_12 [i_1] [i_1] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) : (var_2)));
        }
        for (signed char i_4 = 4; i_4 < 6; i_4 += 3) 
        {
            arr_15 [i_4] = ((/* implicit */int) ((((/* implicit */int) ((var_1) <= (((/* implicit */long long int) var_10))))) < (((/* implicit */int) ((unsigned char) var_4)))));
            arr_16 [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (arr_13 [i_4 + 1] [i_4 + 1]) : (arr_13 [i_4 - 3] [i_4 - 4])));
        }
        for (unsigned short i_5 = 2; i_5 < 8; i_5 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_14))) >> (((var_4) + (1051373067)))));
            var_26 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))));
            var_27 = ((/* implicit */int) ((short) (_Bool)1));
        }
        for (long long int i_6 = 4; i_6 < 9; i_6 += 1) 
        {
            arr_21 [i_1] [i_6 - 4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_13)))) : (((/* implicit */int) arr_4 [i_1] [i_6 - 4]))));
            var_28 = ((/* implicit */int) ((short) arr_10 [i_6 - 4] [i_6] [i_6 - 3] [5U]));
        }
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((short) arr_5 [i_1] [3U])))));
        var_30 = ((/* implicit */signed char) arr_8 [i_1] [i_1]);
        arr_22 [i_1] |= ((/* implicit */_Bool) var_10);
    }
}

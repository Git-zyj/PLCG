/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169624
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (signed char)-111;
        arr_4 [i_0] = ((/* implicit */signed char) 7655241321964066592ULL);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)51)) <= (((/* implicit */int) (signed char)-53))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [8ULL])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (7037278402313950431ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)24583)) : (((/* implicit */int) arr_1 [i_2])))))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-22))) && ((!(((/* implicit */_Bool) (unsigned short)45234))))));
                            var_23 = ((signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (signed char)30))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_4 + 2] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_2]))) : (5246813182950651323ULL)));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (unsigned char)20))));
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_4 - 1]))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 17258769236986264803ULL)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_11 [i_6] [(unsigned char)1] [i_6]))));
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) var_9);
        var_26 = ((/* implicit */signed char) var_10);
        arr_25 [i_6] = ((/* implicit */unsigned short) 1187974836723286821ULL);
    }
    var_27 &= ((/* implicit */signed char) var_16);
    var_28 = ((/* implicit */signed char) ((max(((~(1187974836723286813ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) + (var_19)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((7037278402313950431ULL) | (var_11))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)25)))))))))));
}

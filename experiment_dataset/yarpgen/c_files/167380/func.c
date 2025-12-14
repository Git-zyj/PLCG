/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167380
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)112)), (((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (unsigned short)65535))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (18446744073709551615ULL) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_0 [i_0]))))) : (8ULL)));
    }
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_11 [(short)14] [i_2] [i_2] = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned char) max((((((/* implicit */int) arr_10 [12U] [i_2] [i_2])) >= (((/* implicit */int) arr_7 [i_2])))), (arr_6 [i_1 - 2] [i_2]))))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_2] [i_1] = ((/* implicit */unsigned char) min((arr_8 [i_3]), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_3]))));
                var_11 = ((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_7 [i_1])))), (((/* implicit */int) var_3))));
                var_12 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32742)) || (var_4)))), (0ULL)))));
                arr_15 [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned char) arr_6 [i_3 - 1] [i_2]);
            }
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                arr_19 [i_1] [i_1] [(signed char)18] = ((/* implicit */unsigned char) var_1);
                var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1 - 2]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((arr_18 [i_4] [i_1 - 2]) - (5471142900888463047ULL)))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))))));
            }
            arr_20 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) arr_12 [i_1] [i_2] [i_2]);
            arr_21 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)139)), (max((4294967295U), (((/* implicit */unsigned int) (unsigned short)0))))));
        }
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)0))))))) && (((/* implicit */_Bool) min((arr_4 [i_1 + 1]), (((/* implicit */long long int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 2])))))));
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 1])) ? (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (15U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_9 [i_1])))))))), (var_2)));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [(unsigned short)10])) ? (18446744073709551587ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [(_Bool)1] [(_Bool)1] [i_1 - 2]), (arr_9 [i_1]))))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073709551608ULL)))))) ? ((-((+(((/* implicit */int) var_8)))))) : (((/* implicit */int) (unsigned char)255))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_6))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)2)) || (((((/* implicit */int) (short)4)) != (((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), (var_5))))))));
}

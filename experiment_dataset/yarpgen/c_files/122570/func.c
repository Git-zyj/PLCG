/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122570
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
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)244)), (var_2)))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_2)) : (var_0)))))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_7))));
    var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) var_7))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) | (var_0)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((((((int) 2147483647)) < (((/* implicit */int) arr_2 [i_0] [i_0])))), (((((/* implicit */unsigned long long int) arr_1 [i_0])) < (var_0)))));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (((var_0) >> (((var_0) - (10285762090428470585ULL)))))));
        arr_5 [i_0] = ((/* implicit */long long int) var_1);
        arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((var_7) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) var_7))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) -1015454774);
            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_8))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
                {
                    arr_13 [i_0] [(signed char)9] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0])) >> (((((/* implicit */int) var_5)) + (12)))));
                    var_18 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (var_4) : (arr_8 [i_0] [i_1])))) ? (((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))))) : (((/* implicit */int) ((arr_1 [i_3]) == (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
                    var_20 = ((/* implicit */long long int) ((arr_8 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    var_21 ^= ((/* implicit */_Bool) (~(var_2)));
                }
                for (signed char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                {
                    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4] [0] [0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [(unsigned char)6] [i_0] [i_0])) : (((/* implicit */int) var_9))));
                    var_23 = ((/* implicit */unsigned short) 4340232536389201932LL);
                }
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_8))));
                var_25 = ((/* implicit */unsigned int) ((int) var_8));
                var_26 = ((/* implicit */int) (~(((((arr_7 [i_0] [i_1] [i_2]) + (9223372036854775807LL))) << (((((/* implicit */int) (short)32291)) - (32291)))))));
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_0 [i_1]))));
            }
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 2147483635))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_6 = 3; i_6 < 21; i_6 += 1) 
            {
                var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_7 [i_0] [i_5] [i_6]))))));
                arr_21 [i_0] [i_0] = ((/* implicit */short) arr_7 [i_6 + 1] [i_6 - 2] [i_6 - 2]);
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_24 [7U] [7U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_0)))) > (((/* implicit */int) (signed char)-124))));
                arr_25 [11] [(unsigned short)4] [i_7] [(_Bool)1] = ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_7] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_7])));
                var_30 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_0] [i_5] [i_5] [i_0])) >= (((/* implicit */int) arr_10 [i_0] [i_5] [i_5]))));
            }
            arr_26 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_5])), (-3709272079002879919LL)))) ? (max((max((var_4), (((/* implicit */unsigned long long int) 26812702650767720LL)))), (((/* implicit */unsigned long long int) ((-2147483636) / (((/* implicit */int) (unsigned short)20726))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0))))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) arr_8 [i_0] [i_0]);
                            var_32 += ((/* implicit */short) (~(((arr_31 [i_0] [i_5] [i_10] [i_8] [i_9] [i_10]) * (((/* implicit */int) arr_3 [i_0] [i_5]))))));
                        }
                    } 
                } 
            } 
            arr_35 [i_0] [i_0] [i_0] |= ((((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((2147483647) % (((/* implicit */int) (unsigned char)75)))))) + (2147483647))) >> (((/* implicit */int) var_7)));
            var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_6))) + (arr_7 [i_5] [i_0] [(_Bool)1]))), (((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (short)17533)) : (((/* implicit */int) var_3))));
        }
    }
    var_34 = ((/* implicit */unsigned short) ((short) max((((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_8))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_11))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137266
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
    var_18 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_19 *= ((/* implicit */unsigned long long int) (_Bool)1);
            var_20 = ((/* implicit */int) ((unsigned int) 38590395));
            var_21 = ((/* implicit */int) arr_3 [i_0] [i_0] [4]);
            arr_5 [i_1] |= ((/* implicit */unsigned char) arr_2 [i_0]);
        }
        arr_6 [(unsigned char)3] [i_0] = ((/* implicit */long long int) (unsigned short)32767);
        var_22 = ((/* implicit */signed char) (-((~(arr_3 [i_0] [i_0] [i_0])))));
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) arr_3 [i_2] [i_2] [i_2]);
            var_24 ^= ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_2])) ? (arr_3 [i_0] [i_0] [i_2]) : (arr_3 [i_2] [i_0] [i_0]));
            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_2 [i_0])) | (arr_9 [i_2])));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_7 [(unsigned short)2]))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_27 = (unsigned char)0;
                        var_28 = ((/* implicit */int) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_13))));
                    }
                } 
            } 
            var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_12 [i_3] [i_3] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
        }
        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */int) arr_9 [i_0]);
            var_31 -= ((/* implicit */int) ((unsigned int) arr_7 [i_6]));
            var_32 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) var_17)) : (arr_3 [i_6] [i_0] [i_0])));
            var_33 = ((/* implicit */long long int) (((_Bool)1) ? (-791467967) : (((/* implicit */int) (signed char)(-127 - 1)))));
            var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3391366532U)) ? (((/* implicit */int) (short)91)) : (791467966)))) ? (((/* implicit */int) arr_7 [i_6])) : (((((/* implicit */int) var_11)) % (((/* implicit */int) (short)112))))));
        }
        for (signed char i_7 = 1; i_7 < 10; i_7 += 2) 
        {
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2679472800162199351LL)) ? (-791467967) : (-1745240587)));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 2; i_8 < 8; i_8 += 3) 
            {
                arr_26 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_8 + 2] [i_7] [i_7] [i_7 + 2])) ? ((-(((/* implicit */int) arr_7 [i_8])))) : (arr_19 [i_7])));
                var_36 -= ((/* implicit */unsigned char) var_6);
                var_37 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7 + 2] [i_8 + 2]))) : (arr_3 [i_0] [i_7 - 1] [i_8 + 3]));
            }
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                var_38 = ((/* implicit */unsigned short) max((var_38), (((unsigned short) 0ULL))));
                var_39 = ((/* implicit */_Bool) (-(arr_11 [i_7 - 1])));
            }
            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2099222246U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)107))) : (4828918447064588924ULL)));
            var_41 = ((/* implicit */signed char) (~(var_9)));
        }
    }
}

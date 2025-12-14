/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136943
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min(((short)1008), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (var_8)))))));
        var_16 ^= ((/* implicit */signed char) (short)1020);
        var_17 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-1008)) + (2147483647))) >> (((/* implicit */int) ((signed char) 1549954819U)))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) (_Bool)1);
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned short)63339)))) : (((/* implicit */int) arr_4 [i_0] [i_1])))) >> (((((((/* implicit */_Bool) (unsigned short)41219)) ? (var_11) : (arr_5 [i_0] [i_1]))) + (1200133652)))));
            arr_7 [12ULL] = ((((/* implicit */int) arr_4 [i_0] [i_1])) >= (((((/* implicit */int) (signed char)-14)) & (((/* implicit */int) min(((unsigned short)2196), (((/* implicit */unsigned short) arr_4 [(unsigned short)2] [i_0]))))))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_20 &= ((/* implicit */unsigned short) var_3);
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1282634521)))) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 1379214181))) && (((/* implicit */_Bool) 806639523U)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
            {
                var_22 *= ((/* implicit */unsigned long long int) ((short) (((!(((/* implicit */_Bool) 3488327770U)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_12 [(unsigned short)5] [(unsigned short)5] [i_5] [i_6])))));
                arr_19 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */short) 3778132089U);
            }
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
            {
                arr_23 [i_0] [i_5] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 7931599190045048520LL)) || (((/* implicit */_Bool) arr_10 [i_0])))) ? (((int) (short)14388)) : (((/* implicit */int) ((-1719531274) > (((/* implicit */int) var_1)))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((514549944U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(_Bool)1]))))) ? (((((/* implicit */_Bool) 806639551U)) ? (((/* implicit */unsigned int) -835525490)) : (806639526U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))));
            }
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) (short)32766);
                var_25 = ((/* implicit */long long int) min(((signed char)109), (((/* implicit */signed char) (_Bool)1))));
            }
            var_26 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? ((-(arr_9 [i_0] [i_5] [i_5] [i_5]))) : (arr_9 [i_0] [i_5] [i_5] [i_5])));
            arr_27 [i_0] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (3488327776U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
            var_27 = ((/* implicit */short) ((arr_13 [i_0] [i_0] [i_5] [i_5] [i_5]) + (((((/* implicit */_Bool) 8133326470755560109LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_5] [i_0] [i_0] [i_0] [i_0])))));
            arr_28 [i_5] [i_0] = ((/* implicit */signed char) min((1793495688810448546ULL), (((/* implicit */unsigned long long int) (signed char)-1))));
        }
        /* vectorizable */
        for (signed char i_9 = 1; i_9 < 10; i_9 += 4) 
        {
            var_28 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9905928552432112849ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9]))) : (var_6))))));
            arr_32 [i_0] [i_9] = ((/* implicit */signed char) 5685352047868624535ULL);
            var_29 = ((/* implicit */int) ((short) ((_Bool) var_5)));
            var_30 = ((((/* implicit */_Bool) ((signed char) (short)3840))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3778132093U) < (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_9 + 2] [i_0] [i_0]))) : (arr_8 [i_0] [(signed char)6] [(signed char)12]))));
        }
    }
    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (_Bool)1))));
}

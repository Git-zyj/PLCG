/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176770
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((int) ((unsigned int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))) : (14608877497963216616ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_18 = ((/* implicit */_Bool) (signed char)69);
            var_19 = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) var_9)))));
        }
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)63))))))) - (((((((/* implicit */_Bool) arr_6 [i_0])) ? (432345564227567616ULL) : (((/* implicit */unsigned long long int) arr_3 [(_Bool)1])))) + (((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) : (3837866575746334991ULL)))))));
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((_Bool) ((int) ((((/* implicit */_Bool) 3837866575746334989ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_2]))))));
            var_21 *= ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_6 [i_2])) >= (((/* implicit */int) arr_6 [i_0])))));
            var_22 = ((/* implicit */int) ((unsigned char) max((1191840698U), (((/* implicit */unsigned int) (signed char)-75)))));
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2]))))) ? ((~(arr_7 [i_0] [i_2]))) : (((/* implicit */int) arr_4 [i_0]))));
        }
        for (int i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            var_23 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)52)) | (((/* implicit */int) arr_11 [i_3]))))) ? (((((/* implicit */_Bool) 3103126598U)) ? (((/* implicit */long long int) arr_7 [(unsigned char)1] [(unsigned char)10])) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))))), (((/* implicit */long long int) (~(278941948))))));
            arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5189159170541698418LL)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (signed char)-89))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) 14608877497963216616ULL))), (arr_11 [i_0]))))) : (((long long int) (signed char)69))));
        }
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            var_24 = ((/* implicit */int) ((unsigned long long int) (+(((((/* implicit */_Bool) 3837866575746335025ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
            var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (14608877497963216619ULL)))) ? (max(((-(var_13))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))));
            var_26 -= ((/* implicit */unsigned short) ((long long int) max((((/* implicit */int) (unsigned short)44724)), (-505184073))));
            var_27 = ((/* implicit */short) ((((max((arr_10 [i_0]), (((/* implicit */long long int) (unsigned short)20812)))) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (short)-32765)))))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            var_28 &= ((/* implicit */signed char) ((unsigned int) (signed char)-66));
            var_29 = ((/* implicit */unsigned int) var_1);
            arr_18 [(_Bool)1] = ((/* implicit */long long int) (-(((int) (signed char)75))));
        }
        var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) var_4))))))));
    }
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            {
                var_31 -= var_6;
                arr_23 [i_6] = max((((/* implicit */unsigned long long int) ((max((3103126598U), (((/* implicit */unsigned int) (signed char)-75)))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4203434722U)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) var_15)))))))), (((3837866575746335006ULL) / ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20812))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_2)))))) ? ((~(var_2))) : (((((/* implicit */_Bool) var_11)) ? ((-(var_11))) : (((unsigned long long int) var_14))))));
    var_33 *= ((/* implicit */unsigned int) max(((((_Bool)1) || (((/* implicit */_Bool) (short)32756)))), (((_Bool) (signed char)74))));
}

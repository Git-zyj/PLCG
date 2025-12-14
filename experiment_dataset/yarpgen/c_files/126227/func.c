/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126227
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (var_11)))) ? (var_11) : (var_4)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(short)24] = ((/* implicit */long long int) ((unsigned char) ((short) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-111)), (350736315U)))) : (((unsigned long long int) 3944230991U))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) max((min(((+(arr_1 [i_1]))), (((/* implicit */unsigned long long int) 2606106540U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (var_4))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_4 - 1] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) 350736297U)) || (((/* implicit */_Bool) ((var_12) << (((arr_12 [i_1] [i_2]) - (5283213291073917695LL)))))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) 1583859489)) : (arr_18 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 + 3] [i_4])));
                            arr_22 [i_5] [i_3] [i_2] [10ULL] &= ((((/* implicit */_Bool) (unsigned char)104)) ? (350736315U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    arr_26 [i_6] [i_2] [i_3] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_23 [i_1] [i_6] [(short)10] [i_1] [i_1] [i_1]) << (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))));
                    var_16 = ((/* implicit */unsigned int) var_1);
                    var_17 -= ((/* implicit */signed char) var_3);
                    arr_27 [i_1] [i_1] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3844876827U)) ? ((+(3844876818U))) : (((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_3] [i_6] [i_2])) ? (var_4) : (3944230981U)))));
                }
                for (short i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    arr_30 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7] [i_7 - 1] [i_7 - 1]))) : (((long long int) arr_10 [i_3]))));
                    arr_31 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                    arr_32 [i_1] [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 450090473U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-54))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_7 + 1])) != (((/* implicit */int) arr_0 [i_7 + 1]))));
                    var_19 *= ((/* implicit */short) arr_6 [i_1] [i_1]);
                }
                for (unsigned char i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((arr_12 [i_1] [i_2]) != (arr_10 [i_1])));
                    arr_36 [i_8] [i_8] [i_8] [i_1] = ((/* implicit */unsigned char) ((arr_1 [i_8 - 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (3844876838U)))))));
                    var_21 *= ((/* implicit */signed char) ((arr_20 [i_8 + 1]) ^ (arr_20 [i_8 - 1])));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_8 - 1] [i_2] [i_1])) ^ (((((/* implicit */_Bool) arr_12 [(unsigned char)2] [i_1])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6))))));
                    arr_37 [i_1] [i_2] [i_3] [i_8] = ((/* implicit */unsigned short) (-(3997228918U)));
                }
            }
            /* LoopSeq 1 */
            for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
            {
                arr_42 [7LL] [7U] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(3944230971U)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_1] [i_1]))));
                var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_2 [i_2])))) && (((((/* implicit */_Bool) arr_7 [i_9])) || (((/* implicit */_Bool) var_2))))));
            }
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3944230991U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (10607090209237659058ULL)));
        }
    }
    var_25 = ((/* implicit */unsigned int) var_10);
    var_26 = ((/* implicit */long long int) min((450090473U), (((/* implicit */unsigned int) 89475602))));
    var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 450090472U)) ? (var_4) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_3)) : (var_11))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150518
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_7 [(signed char)2] [11LL] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [0LL] [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)40))))))))));
            arr_8 [(short)9] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) max(((short)-4288), (arr_2 [i_1 + 2]))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_12 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_2 + 1] [i_2 - 1] [i_2]))))));
                        var_13 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) max((((/* implicit */int) (short)8188)), (1706937683)))))));
                        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_2 - 1])) ? (max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) arr_11 [i_0] [i_2] [i_2 - 1] [i_2 + 1])))) : (((/* implicit */int) max((arr_2 [i_1 + 3]), (((/* implicit */short) ((_Bool) arr_6 [i_0] [i_0]))))))));
                    }
                } 
            } 
        }
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)14120)) ? (((/* implicit */int) arr_13 [i_0] [14] [i_0] [16U] [i_0])) : (((/* implicit */int) var_10)))) + (((((/* implicit */_Bool) arr_13 [16LL] [(signed char)5] [i_0] [i_0] [16LL])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9)))))))));
    }
    for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
    {
        arr_17 [i_4 - 2] [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) max((arr_16 [i_4 + 1]), (((/* implicit */unsigned long long int) (signed char)-52)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) max(((short)-28023), (((/* implicit */short) var_7)))))))) : (max((((/* implicit */unsigned long long int) (~(arr_15 [i_4] [i_4 + 1])))), (max((var_5), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4]))))))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        arr_28 [i_7] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4])) ? (arr_16 [i_4]) : (7017911709071869410ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_4 + 2] [i_6]))))) : (((/* implicit */int) ((signed char) arr_20 [(signed char)6] [i_4 + 2] [i_6])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 3; i_8 < 21; i_8 += 2) 
                        {
                            arr_32 [i_8] = var_8;
                            arr_33 [i_8] [i_5] [i_6] [i_7] [i_7] [i_8 + 2] = ((/* implicit */unsigned char) var_6);
                            var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((max((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_26 [i_8 - 3] [i_5] [i_6] [i_4 - 2] [i_8] [11U])))) : (((/* implicit */unsigned long long int) max((arr_24 [i_8 + 1] [i_8 + 3] [i_6]), (((/* implicit */long long int) arr_18 [i_4 + 1] [21LL])))))));
                        }
                    }
                } 
            } 
        } 
        var_17 ^= ((/* implicit */long long int) ((max(((+(((/* implicit */int) arr_22 [17ULL])))), (((/* implicit */int) ((((/* implicit */int) arr_22 [i_4 - 2])) > (((/* implicit */int) var_1))))))) - (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_1)))))));
        var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) max((2ULL), (((/* implicit */unsigned long long int) arr_23 [i_4] [i_4] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4] [i_4 + 1] [(unsigned short)22] [16U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [i_4] [i_4 - 2] [i_4] [i_4 + 1] [i_4])))) : ((~(((/* implicit */int) (unsigned char)254))))))));
    }
    var_19 = ((/* implicit */unsigned int) var_5);
}

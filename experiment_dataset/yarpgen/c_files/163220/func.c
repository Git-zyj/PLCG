/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163220
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
    var_10 *= ((/* implicit */short) ((((/* implicit */int) var_7)) % (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)13))))));
    var_11 = ((/* implicit */signed char) min((((((/* implicit */int) var_9)) | (((((/* implicit */int) var_8)) & (((/* implicit */int) var_7)))))), (((/* implicit */int) var_3))));
    var_12 |= ((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((unsigned int) (signed char)113)))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~(min((((/* implicit */int) min((((/* implicit */short) var_4)), ((short)32759)))), (((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_0 [i_0])) - (73))))))))))));
        var_15 = ((/* implicit */long long int) (_Bool)1);
        arr_2 [i_0] [(signed char)9] = ((/* implicit */unsigned long long int) var_2);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_2))))) ? (-1807315580) : (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_6)) : (2112149768))));
                    var_17 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_6 [i_0 + 1] [i_2 + 2])))));
                    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)32755)) ? (1807315580) : (((/* implicit */int) var_4)))) >= (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_9)))))) ? (((((/* implicit */_Bool) (short)-32759)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) 1807315580)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> (((/* implicit */int) ((7) >= (-1807315581)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (1946015518U)))) | (((/* implicit */int) var_8))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_6)))));
        var_20 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_9 [8])) - (((/* implicit */int) arr_10 [i_3])))));
        arr_14 [i_3] = ((/* implicit */short) 2348951788U);
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_15 [i_4]))))) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((unsigned char) arr_15 [i_5]));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                {
                    {
                        arr_27 [(signed char)0] [i_4] [i_5] [(unsigned short)13] [i_5] [i_7] = ((/* implicit */unsigned char) var_7);
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) arr_16 [i_7 - 1])) != (((/* implicit */int) arr_16 [i_7 + 1])))))));
                        arr_28 [i_4] [i_4] [i_6] [i_4] [i_5] [(unsigned short)5] = ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            var_23 = ((/* implicit */int) max((var_23), ((~(8191)))));
            var_24 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_3))))));
        }
    }
    var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_2)) & (((/* implicit */int) var_2))))))) ? (min(((((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-1807315566))), (((/* implicit */int) max((var_5), (var_5)))))) : (((/* implicit */int) ((_Bool) min((var_7), ((_Bool)1)))))));
}

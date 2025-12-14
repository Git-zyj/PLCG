/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129707
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
    var_18 = (~(min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_10))))))));
    var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) var_14))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))) / (var_11))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_8)))))))));
    var_20 = ((/* implicit */signed char) max(((((+(((/* implicit */int) var_6)))) % (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_5)))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (unsigned char)252))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_14)))))) && (((/* implicit */_Bool) min((max(((signed char)-1), ((signed char)127))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_1] [i_1]))))))))));
                                arr_13 [i_4 - 1] [i_4] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_1] [i_0] &= ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16135))) * (arr_10 [i_0] [i_1] [i_2 - 1] [4] [i_4]))))))), ((+(((var_11) / (((/* implicit */unsigned int) 503695997))))))));
                                var_22 = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */int) var_15)) << (((((((/* implicit */int) (signed char)-106)) + (131))) - (8))))))), ((~((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [(short)0] [(unsigned char)6]))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_7)), (var_4))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_11))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)119)), (var_14)))))))));
                arr_14 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) | (var_1))))) ^ (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)32767)))) ^ ((~(((/* implicit */int) (short)-5538)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
    {
        var_24 |= ((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)10))))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((min((((/* implicit */int) (signed char)-110)), (1882948082))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32743))) >= (var_16)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_17))))))))))));
    }
    for (int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((~(((/* implicit */int) (short)-5538)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -1882948082))))))))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (((+(((((/* implicit */long long int) arr_18 [i_6])) ^ (arr_15 [i_6] [i_6]))))) >= (((/* implicit */long long int) (~(min((arr_18 [i_6]), (((/* implicit */int) (short)-13823))))))))))));
        var_28 |= ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) (short)5538)))))) - ((+(arr_15 [i_6] [i_6])))))));
        var_29 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (unsigned char)63)))))))));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_8 = 1; i_8 < 17; i_8 += 2) 
        {
            arr_27 [15ULL] [i_8] [i_8 - 1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)72)) * (((/* implicit */int) arr_17 [i_7]))))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) * ((+(((/* implicit */int) (unsigned short)0)))))))));
                        arr_34 [i_7] [i_8] [i_9] [i_8] = ((/* implicit */signed char) ((((var_7) & (((/* implicit */int) (short)-16113)))) * (((/* implicit */int) ((((/* implicit */_Bool) (short)-16149)) || (((/* implicit */_Bool) arr_33 [i_8] [i_9] [i_8 + 1] [i_8 + 1] [i_8])))))));
                        var_31 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_11 = 1; i_11 < 17; i_11 += 4) 
            {
                var_32 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)65531)) < (((/* implicit */int) arr_17 [i_8])))))));
                var_33 ^= ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_20 [i_11]))))));
            }
        }
        for (unsigned int i_12 = 1; i_12 < 17; i_12 += 2) 
        {
            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) (short)-32767)))))) || (((/* implicit */_Bool) (~(-511808335))))));
            var_35 = ((/* implicit */unsigned short) (((~(arr_18 [i_7]))) * (((/* implicit */int) ((((/* implicit */int) arr_23 [i_7])) != (((/* implicit */int) arr_17 [13ULL])))))));
        }
        var_36 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)86)) >> (((var_1) - (13964312320240308560ULL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106)))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140462
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
    var_11 = ((/* implicit */int) ((max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) var_2)))) < (((/* implicit */int) max((var_7), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-31129))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_12 ^= (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
        arr_7 [i_1] = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) arr_6 [i_1])))) ? (((922556336) / (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)25365)))))), ((~((~(((/* implicit */int) var_0))))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                for (int i_4 = 3; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 15)) ? (1073741823U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned char) var_0)))))))))))));
                        var_15 += ((/* implicit */unsigned char) ((signed char) ((long long int) ((((/* implicit */_Bool) (signed char)120)) ? (arr_9 [i_1]) : (((/* implicit */long long int) var_6))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((1073741849U), (((/* implicit */unsigned int) (signed char)-13))))) ? (min((-922556333), (((/* implicit */int) arr_19 [i_5] [i_5])))) : (min((-838886552), (((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_9)))))))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 22; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 4; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_17 = ((unsigned short) min((((/* implicit */int) ((short) var_4))), ((~(-15)))));
                        var_18 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */signed char) (_Bool)1))))))))));
                        var_19 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_26 [i_6 - 1] [i_8 + 2] [i_8] [i_7] [i_8 + 2] [i_8 - 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 15)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) 2928058325U))))))));
                    }
                } 
            } 
        } 
    }
    var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 17ULL))));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1073741801U)))) ? (((/* implicit */unsigned long long int) min((-2147483627), (((/* implicit */int) (short)12))))) : (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned long long int) -1611388579)) : (14659231617014431008ULL))))))))));
    /* LoopNest 2 */
    for (unsigned char i_9 = 4; i_9 < 19; i_9 += 3) 
    {
        for (int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 10LL)) || (((/* implicit */_Bool) arr_24 [(short)4])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-41)))) : ((~(((/* implicit */int) (unsigned char)46))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_29 [(_Bool)1] [(_Bool)1])))) ? (((arr_28 [i_9]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)196)))) : ((-(((/* implicit */int) (short)31131))))))))))));
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (long long int i_13 = 2; i_13 < 19; i_13 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (unsigned char)192);
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)-39)))))))))));
                                arr_41 [i_9] [i_10] = min(((~(max((arr_23 [i_12]), (arr_0 [i_9 - 4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4748)) ? (((/* implicit */int) arr_24 [i_10])) : (((/* implicit */int) (short)31125))))) + (((((/* implicit */_Bool) (short)-32741)) ? (11U) : (((/* implicit */unsigned int) -1907721965))))))));
                                var_25 = (~(max(((~(-9223372036854775803LL))), (((/* implicit */long long int) arr_28 [i_9 - 4])))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4853827191361081457LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-31103))))) : ((~(arr_39 [i_10] [i_10] [i_10] [(signed char)16] [i_9] [i_9] [i_9])))))))))));
            }
        } 
    } 
}

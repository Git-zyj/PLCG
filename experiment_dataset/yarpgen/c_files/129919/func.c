/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129919
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)4835)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 13)))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_7);
                        var_14 = ((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [(signed char)11] [i_0] [(signed char)11])) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) min((var_5), (((/* implicit */signed char) arr_7 [i_0] [i_1] [i_0 - 2])))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(var_10)))) ? (855034083U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_3 [i_0 + 2] [i_0]), (((/* implicit */short) (unsigned char)15))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned int) min((var_7), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_0])))))))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)127))))) + (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) arr_19 [i_6])))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
            var_20 = ((/* implicit */int) ((((((/* implicit */int) var_1)) - (((/* implicit */int) var_6)))) != ((+(((/* implicit */int) arr_9 [i_0] [i_0] [(short)2] [i_0]))))));
        }
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */int) arr_9 [(unsigned char)0] [i_7] [i_7] [8U])) <= (((/* implicit */int) (signed char)125)))) ? (1141783968) : (((/* implicit */int) (unsigned char)41)))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((_Bool) var_9)))));
        }
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
        {
            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_20 [i_8] [0U]))))) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) var_0)))) : (max((((/* implicit */int) arr_5 [i_8] [(unsigned char)8])), (var_10)))))) ? ((-(((((/* implicit */_Bool) 4278472490U)) ? (((/* implicit */int) (unsigned short)16384)) : (((/* implicit */int) (unsigned short)8977)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_9)) / (arr_0 [i_0]))) : (((/* implicit */int) var_2))))));
            var_24 = ((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */_Bool) var_7)) ? (arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) / (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [i_0 + 2])) & (((/* implicit */int) arr_25 [i_0] [i_0 + 2] [2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_22 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_9))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (3439933232U)))));
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((signed char) arr_11 [3ULL] [6LL] [3ULL] [6LL]))) : (min((((/* implicit */int) var_3)), (arr_15 [i_9] [i_10]))))) | ((~(((/* implicit */int) (unsigned short)16387))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [9] [(unsigned short)5])) ? (max((((/* implicit */int) ((unsigned char) arr_14 [i_0 + 1] [9LL]))), (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_13 [i_0] [i_11])))))) : (((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_5))))) << (((arr_15 [i_0] [i_8]) - (1457312378)))))));
                            var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)4850))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)46277)) : (((/* implicit */int) var_2))))), ((~(arr_34 [i_11] [i_8])))))));
                        }
                    } 
                } 
            } 
        }
        arr_37 [i_0 - 2] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13304))))) ? (((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) var_9)))) : (((var_4) >> (((((/* implicit */int) arr_3 [i_0] [i_0])) + (14753))))))));
    }
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) var_10);
        var_30 = ((/* implicit */_Bool) var_5);
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_3)))) ^ (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) var_10)) : (((((/* implicit */_Bool) (unsigned short)13836)) ? (4278472480U) : (0U)))));
    }
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) min((((unsigned short) ((var_10) ^ (((/* implicit */int) var_5))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned char) var_2)))))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116156
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 98405576)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)32760))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((var_5) ? (2744323776U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
            arr_8 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) var_10))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) /* same iter space */
            {
                arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_2 - 2])) : (((/* implicit */int) arr_4 [i_2] [i_2 + 4]))));
                var_12 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_2 + 4] [i_2 + 4]))));
            }
            for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) /* same iter space */
            {
                var_13 = ((/* implicit */unsigned char) ((arr_10 [i_3 + 2] [i_3 - 1] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 - 2] [i_3 + 3] [i_3])))));
                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_3] [(_Bool)1] [i_3]))))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (signed char i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((var_0) ? (((/* implicit */int) arr_6 [i_5] [1LL])) : (((/* implicit */int) arr_4 [i_5 + 2] [i_5 + 2])))));
                            var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0])) || (var_5))) ? (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) (unsigned short)52235)) - (52216))))) : (((/* implicit */int) (signed char)-26))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32903)) ? (2412837268U) : (((/* implicit */unsigned int) 1485927075))))) : (var_4)));
            }
            arr_22 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)9569)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))));
            arr_23 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_1]))));
        }
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
        {
            arr_26 [i_6] = ((/* implicit */unsigned char) arr_1 [i_0]);
            var_16 ^= ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0]))))), ((((!(((/* implicit */_Bool) var_1)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) -1485927083))))))))));
        }
        for (int i_7 = 2; i_7 < 20; i_7 += 4) 
        {
            arr_29 [i_7] [i_7 - 2] |= ((/* implicit */unsigned char) min((1667891712U), (((/* implicit */unsigned int) (unsigned char)151))));
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 19; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 3) 
                {
                    for (unsigned int i_10 = 1; i_10 < 20; i_10 += 4) 
                    {
                        {
                            var_17 ^= ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757))) : (((unsigned long long int) 207345163U))));
                            var_18 = ((/* implicit */unsigned long long int) arr_9 [i_8 + 3] [i_8 + 3] [i_8 - 3] [i_8 - 2]);
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)13758)))))) >= (max((4659550328492440483ULL), (((/* implicit */unsigned long long int) arr_33 [i_7] [i_7 + 2] [i_7 - 2] [i_7] [i_7 - 2]))))))))));
                            arr_40 [i_0] [i_0] = -1485927076;
                        }
                    } 
                } 
            } 
        }
        var_20 *= ((/* implicit */unsigned int) (~(((int) (short)-13750))));
    }
    for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 1) 
    {
        arr_43 [i_11] [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-3))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((var_0) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))) : (arr_38 [i_11 - 1] [i_12] [(unsigned short)3] [i_12] [i_11])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_11 - 2]))) ^ (var_1))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_0))))))))))));
            var_22 ^= max((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (arr_9 [i_11] [i_11] [i_11 + 2] [i_11]))), (((/* implicit */unsigned int) arr_32 [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11 + 2])));
            var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (var_6)))) ? ((-(((/* implicit */int) arr_18 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1])))) : (((/* implicit */int) var_7))));
            arr_48 [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_44 [i_12])) : (arr_9 [i_11 + 2] [i_11] [i_11] [i_11])))))) ? (min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_25 [i_11 + 1] [i_12] [i_12])) ? (((((/* implicit */_Bool) (unsigned short)58065)) ? (-784815080) : (((/* implicit */int) var_3)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (_Bool)1))))))));
        }
        var_24 = arr_27 [i_11];
        var_25 *= ((/* implicit */unsigned int) ((13787193745217111133ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107)))));
    }
    var_26 = ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_1)))) : (((/* implicit */int) ((_Bool) 1719143867))))));
    var_27 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
    var_28 |= min((((/* implicit */unsigned int) var_0)), (var_6));
}

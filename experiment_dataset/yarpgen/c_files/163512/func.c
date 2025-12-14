/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163512
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
    var_17 = ((/* implicit */signed char) min(((unsigned short)47408), (((/* implicit */unsigned short) (short)14610))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_1])) << (((((/* implicit */int) (short)-26029)) + (26043)))))))));
                var_18 ^= (-(((/* implicit */int) (signed char)28)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) var_16);
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_1))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_2])) != (((((/* implicit */_Bool) (signed char)-28)) ? (arr_5 [i_4] [0LL]) : (-1525538368))))) ? (((/* implicit */int) arr_0 [(unsigned char)0] [(unsigned char)0])) : (((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [i_6])))))));
                            var_21 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)27)) : (var_7)))) ? (min((((/* implicit */unsigned int) 199211923)), (2203559104U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (var_10))))))) < (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-14611)) ? (((/* implicit */int) (short)-14611)) : (((/* implicit */int) (signed char)-28)))) * (((/* implicit */int) ((((/* implicit */_Bool) 3292807149866577048LL)) && (((/* implicit */_Bool) var_1))))))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_18 [i_2] [i_2] [i_4] [i_6]) : (arr_18 [i_2] [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) ((long long int) var_10))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26028))))) : (((/* implicit */unsigned long long int) arr_16 [i_5] [i_2])))) : (((/* implicit */unsigned long long int) ((long long int) var_9)))));
                        }
                    } 
                } 
            } 
            arr_24 [i_2] = ((/* implicit */unsigned char) arr_11 [i_2] [i_2]);
        }
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                for (long long int i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    {
                        var_23 = ((/* implicit */int) (~(arr_2 [i_7] [i_7] [i_9 + 1])));
                        var_24 *= ((/* implicit */short) max((-7962588613774138972LL), (((/* implicit */long long int) (-((~(((/* implicit */int) var_8)))))))));
                        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16))))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) ((2091408191U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-15826)))))))))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (short i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) (~(var_4)));
                        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_44 [i_13] [i_11] [i_11] [i_11]))))));
                        arr_48 [i_10] [i_13] [i_12] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_13] [i_11] [i_13])) ? (((/* implicit */int) arr_42 [i_10] [i_11] [i_12] [i_13])) : (((/* implicit */int) arr_42 [i_10] [i_11] [i_12] [i_13]))));
                        var_29 &= ((/* implicit */short) var_1);
                    }
                } 
            } 
        } 
        var_30 = var_1;
    }
}

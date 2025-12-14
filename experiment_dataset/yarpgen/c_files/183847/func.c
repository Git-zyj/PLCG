/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183847
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((arr_5 [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) min(((unsigned char)255), (var_0)))))))));
                        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [8ULL])) ? (((/* implicit */unsigned long long int) arr_10 [i_3])) : (var_1)))) ? (max((var_9), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) arr_9 [i_2 + 2] [i_2 + 1] [i_2] [i_2 - 2] [i_2]))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((14741085477881774890ULL) != (((/* implicit */unsigned long long int) 227662390)))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 + 2]))) + (var_8))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)7)) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_7])))))) : (var_9)));
                            var_14 = ((/* implicit */unsigned char) (+(arr_20 [i_0] [i_4] [i_0] [(short)10] [i_7] [i_7] [i_5 + 1])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 3; i_9 < 7; i_9 += 3) 
                {
                    for (long long int i_10 = 3; i_10 < 8; i_10 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (_Bool)0);
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_9 - 2] [i_10] = ((/* implicit */_Bool) ((arr_13 [i_0] [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                            var_16 = arr_17 [i_10 + 1] [i_0] [i_8] [i_0] [i_0];
                        }
                    } 
                } 
                arr_33 [i_0] [i_4] [i_0] [(unsigned short)0] = (unsigned short)2495;
            }
            for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            arr_41 [i_0] [i_12] [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((short) ((unsigned short) var_5)));
                            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) - (((var_8) - (arr_24 [i_11])))));
                        }
                    } 
                } 
                arr_42 [i_0] [8ULL] [i_0] [i_0] = var_5;
                var_18 ^= ((/* implicit */int) ((signed char) arr_26 [i_11] [i_11] [i_4] [i_4] [i_0] [i_0]));
            }
            arr_43 [i_0] [0ULL] [(_Bool)1] = ((/* implicit */unsigned short) arr_17 [i_4] [i_0] [i_0] [i_0] [i_0]);
        }
    }
    var_19 *= ((/* implicit */short) var_8);
    var_20 = ((/* implicit */unsigned long long int) min(((_Bool)1), (var_7)));
}

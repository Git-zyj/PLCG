/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176531
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                var_10 = ((/* implicit */short) (~((-(((/* implicit */int) var_3))))));
                var_11 = (+(arr_0 [i_0]));
                /* LoopSeq 3 */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
                {
                    arr_11 [i_0] [i_2] [i_2] [i_2] = ((signed char) (~(((/* implicit */int) arr_3 [i_2]))));
                    var_12 = ((/* implicit */signed char) arr_1 [i_1]);
                    arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_5 [i_2] [7ULL] [i_2] [i_3]);
                }
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    var_13 = ((((/* implicit */_Bool) 540447219)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) : (12990162364554979915ULL));
                    var_14 = ((/* implicit */signed char) var_6);
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1] [i_1] [i_2 + 1]))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45765))) : (12990162364554979915ULL)));
                    }
                    for (unsigned int i_6 = 4; i_6 < 18; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_5);
                        var_17 = ((/* implicit */unsigned short) ((int) arr_13 [i_1 + 2] [i_2 + 1] [i_2] [i_4]));
                        var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned long long int) -540447220)) : (12990162364554979901ULL)));
                        var_19 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_15 [i_6] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6]))))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1 - 2] [i_2 + 1]))) ^ (9223372036854775807LL)));
                        var_21 = ((/* implicit */signed char) arr_8 [i_0] [(signed char)2] [(signed char)2] [i_2 + 1]);
                        var_22 ^= ((/* implicit */unsigned short) arr_6 [i_0]);
                    }
                }
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    arr_30 [i_2] = ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 3] [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 3] [i_2 + 1])) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 3] [i_2 + 1])));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-540447212) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                }
            }
            var_24 = ((/* implicit */unsigned int) (unsigned char)113);
        }
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(_Bool)0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(signed char)6]))))) ? (min((((/* implicit */unsigned int) max((arr_26 [i_0] [i_0] [i_0] [(signed char)16] [i_0]), (((/* implicit */short) arr_25 [i_0] [i_0] [i_0] [i_0] [(signed char)8]))))), (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) ((long long int) (+(var_8))));
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_1 [i_10]))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) var_4);
        var_29 = ((/* implicit */signed char) var_8);
    }
    /* vectorizable */
    for (unsigned short i_11 = 3; i_11 < 23; i_11 += 2) 
    {
        var_30 = var_4;
        var_31 = var_9;
        var_32 ^= ((/* implicit */signed char) (unsigned short)61125);
    }
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (var_4) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */int) ((signed char) min((var_0), (((/* implicit */unsigned long long int) var_2)))))) : (max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) var_7))))));
    var_34 = ((/* implicit */unsigned short) max((540447219), (-540447219)));
    var_35 = ((/* implicit */long long int) (+(var_6)));
    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) var_1))));
}

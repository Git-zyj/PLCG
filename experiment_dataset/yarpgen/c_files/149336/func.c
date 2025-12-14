/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149336
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
    var_12 *= ((/* implicit */short) var_0);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 17713717188892486077ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_2)))))) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (733026884817065536ULL))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)63)) ? (((((/* implicit */_Bool) (signed char)-62)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0 - 1])))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((733026884817065538ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196)))))) >= (((/* implicit */int) arr_1 [i_0]))));
        var_14 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) 17713717188892486096ULL)) || (((/* implicit */_Bool) (unsigned short)39237)))))));
        var_15 -= ((/* implicit */long long int) arr_1 [14]);
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    var_16 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned char)64)) - (64)))))), (((((/* implicit */_Bool) arr_9 [2ULL])) ? (arr_9 [18ULL]) : (arr_9 [(unsigned char)2])))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_11 [i_1 - 1] [i_1 - 1] [i_2 + 2] [i_3]), (arr_11 [i_1 - 1] [i_2 - 1] [(unsigned short)22] [i_3])))), (min((((((/* implicit */_Bool) (unsigned short)1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((arr_6 [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38)))))))))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_18 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_9 [0ULL]) : (arr_9 [20LL])))), (min((min((16826506684934768630ULL), (((/* implicit */unsigned long long int) arr_4 [i_1 - 1])))), (((/* implicit */unsigned long long int) min((2147483639), (((/* implicit */int) var_4)))))))));
                    arr_15 [i_1] [i_2] [18] = ((/* implicit */signed char) arr_11 [i_1] [i_1 - 1] [i_4] [i_4]);
                }
                for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    arr_19 [13LL] [i_1] [i_1] [i_5 - 1] = ((/* implicit */_Bool) 25ULL);
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((arr_10 [i_1 - 1] [i_5] [i_5] [i_5]), (((/* implicit */short) arr_8 [(_Bool)1] [i_2 - 3] [i_5])))), (((/* implicit */short) (unsigned char)60)))))));
                    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_13 [i_1 - 1]) > (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    var_21 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2] [i_5])))), ((((-(((/* implicit */int) (_Bool)0)))) < (((/* implicit */int) ((unsigned short) arr_17 [(short)5] [(short)5] [i_5] [12ULL])))))));
                    arr_20 [i_1 - 1] [i_1 - 1] [i_1] [8] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3158362046160620746ULL)) ? (var_10) : (25ULL))))))), ((+(((((/* implicit */int) (unsigned short)41283)) / (((/* implicit */int) (_Bool)1))))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 21; i_6 += 1) 
                {
                    for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        {
                            arr_25 [i_1 - 1] [13ULL] [i_1 - 1] [i_1 - 1] [i_1] [7LL] = min((2578732215U), (((/* implicit */unsigned int) ((unsigned short) 2578732228U))));
                            arr_26 [i_1 - 1] [5ULL] [i_1] [i_7 - 2] = ((/* implicit */_Bool) (unsigned char)29);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = (~(((/* implicit */int) (_Bool)1)));
}

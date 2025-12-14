/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1441
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) var_17)) : (max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */int) var_16)))))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((var_7) << (((((/* implicit */int) var_17)) - (2588)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((10916843199357659273ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (_Bool)1))))))))));
    var_20 ^= ((/* implicit */unsigned short) ((((((-597656901) ^ (((/* implicit */int) var_8)))) <= (((/* implicit */int) var_2)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_17)) << (((((/* implicit */int) var_6)) - (167))))))) : (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    arr_8 [(_Bool)1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((arr_7 [i_1] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned char)16]))))), ((!(((/* implicit */_Bool) var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : ((-(((/* implicit */int) ((((/* implicit */unsigned int) arr_2 [(_Bool)1] [13] [(_Bool)1])) < (arr_7 [i_0] [i_1]))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((arr_7 [i_2 + 3] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1] [i_0] [i_2 + 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))))));
                    var_21 &= ((/* implicit */unsigned char) min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) arr_2 [i_2 + 4] [i_2 + 4] [i_2 + 2])) ? (arr_2 [i_2 + 3] [i_2 + 2] [i_2 - 1]) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 4] [i_2 + 2]))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 4; i_3 < 16; i_3 += 2) 
                {
                    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
                    arr_12 [i_3 - 4] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)31))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        arr_20 [i_0] [i_5] [(signed char)16] [i_4] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [i_1] [i_1])) ? (arr_5 [i_5] [i_1] [i_5]) : (arr_5 [i_4] [i_4] [i_4])))))) == (((((/* implicit */_Bool) (-(arr_17 [i_5] [i_1] [i_4] [i_5])))) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_4])) : (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [17ULL] [i_5])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_4])))))))));
                        arr_21 [6U] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_5] [i_4] [i_1] [12])) << (((1002823766) - (1002823761)))))) : (arr_16 [i_1] [i_5]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [(_Bool)1])) ? (arr_13 [i_0] [i_5]) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1] [i_4] [i_4]))) & (arr_19 [i_0] [i_0] [i_4] [i_5]))) : (((/* implicit */unsigned int) max((arr_17 [i_0] [i_4] [i_0] [6]), (((/* implicit */int) var_6)))))))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0]))) == (arr_7 [i_4] [i_1])))) : (((((/* implicit */_Bool) arr_16 [i_1] [i_4])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_4] [9ULL])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-9)) + (2147483647))) << (((arr_14 [i_0] [i_1] [i_4]) - (1940618576)))))) ? (((/* implicit */int) var_16)) : (arr_2 [(_Bool)1] [(_Bool)1] [8LL]))) : (arr_14 [i_4] [i_1] [i_0])));
                }
                var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1]))))) > (((((/* implicit */_Bool) arr_4 [1] [i_1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) (unsigned char)171)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) arr_4 [i_6] [i_6]);
        /* LoopNest 2 */
        for (long long int i_7 = 3; i_7 < 16; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_26 ^= ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) != (((((/* implicit */int) (!(arr_11 [i_6] [i_7 - 1] [12U])))) >> (((((/* implicit */int) arr_3 [i_6])) - (243)))))));
                    arr_29 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_6] [i_8] [i_7 + 1]))));
                }
            } 
        } 
        arr_30 [i_6] = ((/* implicit */int) min(((~(((((/* implicit */_Bool) var_9)) ? (arr_7 [i_6] [i_6]) : (((/* implicit */unsigned int) arr_1 [(signed char)15] [i_6])))))), (((/* implicit */unsigned int) ((arr_28 [(unsigned short)13]) ? (arr_17 [(short)16] [i_6] [i_6] [(short)16]) : (arr_17 [2] [i_6] [i_6] [2]))))));
    }
}

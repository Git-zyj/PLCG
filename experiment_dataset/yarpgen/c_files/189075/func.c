/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189075
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
    var_11 = var_3;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) -9223372036854775798LL)) ? (((/* implicit */int) arr_1 [(unsigned char)15])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) var_0))))), (max((arr_0 [i_0] [i_0]), (((/* implicit */int) var_8))))));
        var_12 = ((/* implicit */long long int) ((_Bool) ((((arr_0 [i_0] [i_0]) + (2147483647))) << (((((/* implicit */int) ((_Bool) var_8))) - (1))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 3; i_3 < 22; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_13 -= ((/* implicit */unsigned char) (short)5530);
                    var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -21LL)) ? (134217600U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [(signed char)3] [i_3] [i_5] [i_3 + 1]))))))));
                    var_16 = ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) ^ ((~(4LL))));
                }
                for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245)))))));
                    arr_18 [12] [i_6] [i_6] [i_1] = ((/* implicit */_Bool) var_5);
                    var_18 = ((/* implicit */unsigned long long int) var_8);
                }
                for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    var_19 = ((/* implicit */signed char) (((~(((/* implicit */int) (short)5515)))) ^ (((/* implicit */int) ((_Bool) max((1142907179), (((/* implicit */int) arr_1 [i_1]))))))));
                    var_20 = ((/* implicit */short) -933768881712836919LL);
                    var_21 = (~(min((((((/* implicit */_Bool) var_4)) ? (-1263142101) : (((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7])))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_3 [i_2] [i_3]))))))));
                    var_22 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_15 [(short)12] [(unsigned char)4] [(unsigned char)21])) >> (((/* implicit */int) ((_Bool) var_5))))), (((/* implicit */int) (unsigned char)128))));
                    var_23 = ((/* implicit */_Bool) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 2133985779))))))) << (((min((arr_21 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 - 2]), (arr_21 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_3 - 1] [i_3 + 1]))) - (14375307443303441979ULL)))));
                }
                var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-76)), (933768881712836926LL)));
                var_25 = ((/* implicit */_Bool) max(((unsigned char)111), (arr_9 [i_1] [(unsigned char)22] [i_1] [(unsigned char)22])));
            }
            for (int i_8 = 3; i_8 < 22; i_8 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_9 = 3; i_9 < 21; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28804))) ^ (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-6429))) & (909157797U))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-15)))))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_9] [i_8])) ? ((+(((((/* implicit */int) (signed char)125)) >> (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_12 [i_1] [i_2] [i_8] [i_9] [i_10])))) & (((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        }
                    } 
                } 
                arr_29 [(short)22] [i_2] [(signed char)17] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_6 [i_1] [i_2] [i_2])), ((unsigned short)26731)))), (var_4))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_8 - 3] [i_8 - 1]))) : (((((/* implicit */_Bool) arr_19 [i_8] [i_8 - 3] [i_8] [i_2] [i_1])) ? (var_7) : (((/* implicit */long long int) var_5))))))));
            }
            var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_6 [i_1] [8U] [i_2]))))))), (((unsigned int) arr_21 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1]))));
        }
        var_29 = ((/* implicit */signed char) min((((((/* implicit */int) arr_15 [i_1] [i_1] [12U])) & (((/* implicit */int) var_10)))), ((-(((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_23 [i_1] [i_1]))))))));
    }
    var_30 = ((/* implicit */signed char) min(((~(var_7))), (((/* implicit */long long int) var_9))));
    var_31 = ((/* implicit */int) var_1);
    var_32 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_8))))), (var_1)))));
}

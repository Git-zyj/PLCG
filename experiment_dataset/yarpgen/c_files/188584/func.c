/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188584
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
    var_10 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) ((unsigned short) var_5)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_3)) : (var_8)))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((var_8) % (((/* implicit */unsigned int) var_2)))))))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) | (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_7))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (var_8))))) ? (((/* implicit */int) var_5)) : (var_6)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0 + 2] [i_0] = ((/* implicit */short) var_0);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [9U]))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0 + 2])))), (((var_2) << (((((/* implicit */int) arr_0 [i_0 + 2])) - (10674)))))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 + 2]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 1] [i_1]))))));
        }
    }
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 2) 
    {
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [12] [i_2 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((((_Bool)1) ? (((/* implicit */unsigned int) var_3)) : (var_8)))));
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((var_4), (arr_9 [i_2])))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_1 [i_2 - 1] [i_2]))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_9))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)20669)) : (((/* implicit */int) (short)6705))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) var_5)))))))) : (var_6)));
        }
        arr_14 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2 - 1] [i_2])) | (((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 1] [i_2]))))) ? (((((/* implicit */_Bool) arr_10 [i_2])) ? (max((var_3), (((/* implicit */int) arr_3 [i_2])))) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_7)) % (var_2)))))));
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        var_19 = arr_13 [i_4] [i_4] [(short)8];
        var_20 -= ((/* implicit */unsigned short) arr_2 [(unsigned short)4] [i_4]);
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_21 -= ((/* implicit */unsigned int) arr_12 [i_5]);
            var_22 = ((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)19423)));
            arr_20 [9ULL] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_5] [i_5]) / (arr_8 [i_5] [i_5])))) ? (((arr_8 [i_5] [i_4]) | (arr_8 [i_5] [i_5]))) : (((((/* implicit */int) var_4)) | (var_2)))));
        }
        for (unsigned char i_6 = 2; i_6 < 21; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_6 + 1] [i_6])) * (((((/* implicit */int) arr_0 [i_4])) % (((/* implicit */int) var_5))))))) ? (max((((((/* implicit */_Bool) var_5)) ? (var_8) : (arr_29 [i_4] [i_6] [i_7]))), (((/* implicit */unsigned int) arr_21 [i_6 + 1] [i_6])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
                            var_24 = ((/* implicit */short) arr_28 [i_4] [i_6] [i_4]);
                            var_25 ^= min((((((/* implicit */_Bool) arr_22 [i_9] [(signed char)14])) ? (arr_22 [i_9] [6ULL]) : (var_8))), (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
            } 
            var_26 = ((((/* implicit */int) min((var_9), (arr_32 [i_6] [(short)12] [(unsigned char)8])))) ^ (((((/* implicit */int) var_9)) - (((/* implicit */int) var_4)))));
        }
        arr_33 [i_4] = ((/* implicit */signed char) max((min((((/* implicit */int) arr_21 [i_4] [i_4])), (var_2))), (((((/* implicit */_Bool) arr_26 [8ULL] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_26 [(signed char)12] [i_4] [i_4] [(signed char)12])) : (((/* implicit */int) arr_26 [(unsigned short)2] [i_4] [i_4] [(unsigned short)2]))))));
        arr_34 [i_4] = ((/* implicit */_Bool) var_8);
    }
}

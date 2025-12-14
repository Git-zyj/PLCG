/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174555
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
    for (int i_0 = 2; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned short)0))))))) - (max((5362317791148360014ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2])))))))))))));
                    var_12 ^= ((/* implicit */short) (~(max((((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                }
            } 
        } 
        arr_8 [i_0 + 1] = ((/* implicit */unsigned char) var_5);
    }
    for (int i_3 = 2; i_3 < 15; i_3 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) (-(((((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_17 [i_6]))))) : (((((((/* implicit */int) var_4)) + (2147483647))) >> (((var_0) - (9311399972788014177ULL)))))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_4] [i_3 - 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_3] [i_3] [i_3 + 2])) ^ (((/* implicit */int) var_4)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            arr_25 [i_3 + 2] [i_4] [i_5] [i_4] [i_7] = var_5;
                            var_15 = ((/* implicit */unsigned long long int) var_1);
                            arr_26 [i_7] [i_4] [i_5] [i_4] [i_6] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (((long long int) var_3))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) 3733150410385202460LL)) || (var_3))))));
                        }
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) 9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (var_5)))))))));
                    }
                } 
            } 
        } 
        arr_29 [i_3 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)2), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1459943385412634315LL)))))))) - (max(((~(arr_14 [i_3 - 1]))), (((/* implicit */int) max((var_1), (arr_28 [i_3 - 2] [i_3 + 2] [i_3 + 3] [i_3] [i_3]))))))));
    }
    var_19 = ((/* implicit */short) var_7);
    var_20 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_0)))));
    var_21 = ((/* implicit */signed char) ((unsigned short) min((((((/* implicit */_Bool) 3677026961988911680ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) max((var_9), (((/* implicit */short) var_5))))))));
}

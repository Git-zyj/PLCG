/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164423
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 9223336852482686976LL)) ? (15393162788864LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18732))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0])))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))), (arr_0 [i_0]))) : (((/* implicit */long long int) (+(((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) var_9)))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [4ULL] [i_1] [i_1] [i_1] = ((/* implicit */short) (~(max((((/* implicit */int) (short)-18728)), (((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (short)-18731))))))));
                    var_20 = ((/* implicit */short) max((((/* implicit */long long int) arr_6 [i_1])), (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned char) arr_6 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0])))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_0)))), ((~(((/* implicit */int) arr_8 [i_0])))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1]))))));
                    var_21 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_7))))))), ((+(((/* implicit */int) var_4))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) <= (max((((/* implicit */unsigned long long int) var_9)), (var_16))));
            var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((min(((short)-18743), (((/* implicit */short) (signed char)64)))), (min((arr_13 [i_3]), ((short)32758)))))), (((arr_11 [i_3]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_4] [i_3])))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_15 [i_3] [i_5] [i_5])) ? (((/* implicit */int) arr_18 [i_3] [i_5] [(unsigned char)6])) : (((/* implicit */int) arr_18 [i_3] [i_5] [6ULL])))), (((/* implicit */int) max((arr_18 [i_3] [i_5] [i_5]), (arr_18 [(unsigned char)16] [i_3] [i_3]))))));
            /* LoopNest 2 */
            for (short i_6 = 2; i_6 < 19; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_15 [i_3] [i_3] [i_6])), (((unsigned long long int) ((signed char) var_6)))));
                        var_26 = ((/* implicit */short) min((((/* implicit */long long int) var_11)), ((~(var_14)))));
                        arr_25 [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) arr_16 [i_3] [i_3]))))))))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */signed char) arr_12 [i_3]);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 42083029813853918LL)), (max((arr_22 [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_5 [i_8]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_29 = ((/* implicit */short) (~(9LL)));
            arr_31 [i_8] = ((/* implicit */unsigned short) var_17);
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_9])) ? (((/* implicit */int) arr_7 [(unsigned char)19] [i_8] [i_8])) : (((/* implicit */int) arr_5 [i_8]))));
        }
        arr_32 [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)-18735), (((/* implicit */short) var_7)))))))), (max((arr_22 [i_8] [i_8] [i_8]), (arr_22 [i_8] [i_8] [i_8])))));
    }
    var_31 = var_7;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186492
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) var_2)))))) == (min((var_4), (((var_3) ? (3031796898404167989ULL) : (var_4))))))))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_10))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 1884484388U))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) (signed char)119)))))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_13))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)64629)) < (((((/* implicit */int) (unsigned char)153)) % (((/* implicit */int) (signed char)-33)))))))) | ((~((~(var_2)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_20 -= ((/* implicit */unsigned char) var_11);
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_6))));
            arr_9 [i_2] = ((/* implicit */long long int) arr_4 [i_1]);
        }
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_5 [i_1]))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */short) var_12);
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            arr_16 [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) == (((/* implicit */int) var_9)))) ? (arr_12 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_15 [3LL] [3LL])) : (((/* implicit */int) arr_1 [i_3]))))) ? (arr_0 [i_4]) : (((/* implicit */unsigned int) 1706281261))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)22])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */int) var_3))))) : (var_11)));
        }
        /* LoopSeq 1 */
        for (unsigned short i_5 = 3; i_5 < 19; i_5 += 4) 
        {
            var_24 += ((/* implicit */short) (-2147483647 - 1));
            arr_20 [i_3] = ((/* implicit */unsigned char) arr_0 [i_3]);
        }
        /* LoopNest 3 */
        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (int i_8 = 1; i_8 < 20; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 2; i_9 < 19; i_9 += 1) 
                        {
                            var_25 -= ((/* implicit */_Bool) arr_29 [0] [(unsigned char)14] [(unsigned char)14]);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((/* implicit */int) ((var_8) == (var_2)))))))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_3] [i_6 - 1] [i_9])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7]))) : (arr_25 [i_3] [i_3] [(unsigned short)0] [i_3] [(unsigned short)0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))))));
                        }
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) -1706281257))));
                        var_29 *= ((/* implicit */short) arr_12 [i_3]);
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)131)) ? (((((((((/* implicit */_Bool) (unsigned short)53488)) ? (-1664980632) : (((/* implicit */int) var_0)))) + (2147483647))) << (((var_10) - (546584015))))) : (16383)));
}

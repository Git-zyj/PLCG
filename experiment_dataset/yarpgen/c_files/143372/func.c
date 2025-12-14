/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143372
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (var_14)));
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 3862100312141109550ULL)) ? (var_5) : (((/* implicit */int) var_2))))), (max((5102820656476144537LL), (((/* implicit */long long int) var_8)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_0 [i_0 + 1])))));
                    arr_11 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((long long int) 2420148667U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) -333824610)) : (arr_5 [(short)9]))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (arr_9 [i_2] [i_0]));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                var_17 = ((/* implicit */short) 5102820656476144544LL);
                /* LoopSeq 2 */
                for (int i_6 = 1; i_6 < 21; i_6 += 3) 
                {
                    var_18 = ((/* implicit */_Bool) arr_13 [i_3] [i_5]);
                    var_19 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_3] [i_4] [i_5] [i_6] [i_3] [i_6 - 1]))));
                }
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    arr_24 [i_7] = ((((/* implicit */int) arr_16 [i_3] [i_3] [i_7])) + (((/* implicit */int) arr_14 [i_3] [i_3] [i_7])));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) << (((var_12) - (8830761846652007535LL)))));
                    var_21 = arr_23 [i_3] [i_4] [i_4] [i_4] [i_7] [i_7];
                }
                var_22 = ((/* implicit */unsigned char) arr_23 [i_3] [i_4] [i_4] [i_3] [i_4] [i_3]);
                var_23 = ((/* implicit */unsigned long long int) arr_17 [i_3] [i_4] [i_5]);
                var_24 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (unsigned short)8828))));
            }
            var_25 = var_5;
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [(unsigned short)14] [(unsigned short)14])) ? (max((((/* implicit */unsigned long long int) -333824607)), (196363619956966381ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) -1376334471)))))) ? (arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)894))))) + (((((/* implicit */_Bool) (unsigned char)197)) ? (2147483626) : (var_5))))))));
            arr_25 [i_3] = ((/* implicit */long long int) 3202572459U);
        }
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
                        var_29 = ((/* implicit */short) min((((((/* implicit */int) (unsigned char)197)) << (((/* implicit */int) (unsigned char)1)))), (((int) var_12))));
                    }
                } 
            } 
            arr_33 [i_3] |= ((/* implicit */unsigned int) 0);
            var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_3]))))) ? (((/* implicit */int) max((arr_26 [i_3] [i_3]), (var_11)))) : (((arr_26 [i_3] [i_3]) ? (((/* implicit */int) arr_27 [i_3] [i_8] [i_8])) : (((/* implicit */int) var_6))))))) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) ^ ((-(0)))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_31 |= ((/* implicit */long long int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) (_Bool)0)), (arr_19 [i_3] [i_3] [i_11]))))))));
        }
        var_33 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) max((((/* implicit */int) arr_31 [6U])), (-2147483627)))))));
    }
    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) var_3)) : (max((((/* implicit */int) var_2)), ((+(((/* implicit */int) (_Bool)1))))))));
}

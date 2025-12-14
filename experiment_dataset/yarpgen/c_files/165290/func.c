/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165290
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_1 [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((unsigned short) ((((/* implicit */_Bool) arr_1 [(short)10])) ? (((long long int) arr_14 [i_0] [i_0] [(signed char)16] [i_0] [(signed char)5] [i_0 - 1] [19U])) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-21), ((short)21))))))))));
                                var_15 *= ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) var_6)))));
                                var_16 = ((/* implicit */long long int) arr_3 [i_1] [i_3] [i_1]);
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2] [i_0])) ^ (((/* implicit */int) var_8))))), ((+(arr_6 [i_2] [i_2] [i_0] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_7)))) <= (((/* implicit */int) arr_4 [i_0])))))) : (var_7)));
                                var_18 = ((/* implicit */short) ((((/* implicit */int) ((((long long int) (short)20)) <= (((/* implicit */long long int) min((arr_6 [i_0] [i_1] [i_0] [i_4]), (((/* implicit */unsigned int) var_3)))))))) != (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_3] [i_0])) ? (((/* implicit */int) arr_14 [i_0 - 2] [i_1 + 4] [i_2] [i_3] [(_Bool)1] [i_3] [i_1 + 4])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) arr_20 [(_Bool)1] [(unsigned char)5] [i_7])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])) ? (((/* implicit */int) (unsigned short)61775)) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_7])))) >> (((((((/* implicit */_Bool) arr_3 [i_5] [i_6] [i_7])) ? (((/* implicit */int) arr_20 [i_7] [i_6] [(signed char)13])) : (((/* implicit */int) arr_20 [i_5 - 1] [i_5 - 1] [(unsigned short)5])))) + (103)))))) : (((unsigned long long int) var_8)));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) ((short) var_11))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 1; i_8 < 19; i_8 += 1) 
    {
        for (long long int i_9 = 2; i_9 < 20; i_9 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((((/* implicit */int) arr_10 [i_8 - 1] [i_9 - 1] [i_9 - 2])) - (((/* implicit */int) arr_10 [i_8 + 1] [i_9 + 1] [i_9 + 1])))))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    for (short i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) arr_13 [i_8] [i_8] [i_8]);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((short) ((_Bool) arr_12 [i_8] [i_9] [i_8 + 1] [i_8 + 1] [i_8])))), (((arr_7 [i_8] [i_9] [i_9]) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)61769))))))))))));
                            var_24 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_8] [i_8])) ? (((/* implicit */int) arr_2 [i_8] [i_8])) : (((/* implicit */int) max((arr_29 [i_8 + 1] [i_8]), (var_9)))))));
                        }
                    } 
                } 
                var_25 &= ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_14 [i_8 + 2] [(unsigned char)20] [i_9 - 2] [5ULL] [i_8 + 2] [i_9 - 2] [i_9 - 2]))) >> (((min((var_5), (((/* implicit */long long int) arr_32 [i_8] [i_8] [i_8] [(signed char)20])))) + (7106071897790516180LL)))))) ? (((((/* implicit */int) var_9)) - (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_3)))))) : (((/* implicit */int) var_4)));
                var_26 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_8] [i_8] [(short)9])) >> (((((long long int) (~(((/* implicit */int) arr_32 [9LL] [i_9 + 1] [i_9 + 1] [i_9 - 1]))))) + (4LL)))));
            }
        } 
    } 
}

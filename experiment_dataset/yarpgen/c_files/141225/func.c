/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141225
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)91)) ? (7011272062691205312LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32754)))));
                        arr_9 [i_0] = ((/* implicit */unsigned char) var_4);
                        arr_10 [i_0] = (((+(var_12))) > (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))));
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((unsigned long long int) arr_7 [i_2] [i_2 + 1] [i_2 - 1] [i_3] [i_0] [i_2]))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 2] [15ULL] [i_4]))) ^ (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)84)))))))));
                            var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2] [10LL])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)4] [i_1] [i_4] [i_4] [i_1] [i_1])))))))));
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max(((unsigned short)27940), (((/* implicit */unsigned short) (unsigned char)215))))) : ((+(((/* implicit */int) var_6))))))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_5] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [(short)4] [i_0] [i_1] [4ULL] [i_1] [i_5])))) : ((+(((/* implicit */int) var_5)))))))));
                            arr_17 [i_0] [i_0] [(short)13] [i_3] [i_3] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 - 2])) ? (((/* implicit */int) (short)-32754)) : (arr_8 [i_2 - 1] [i_2 - 1])));
                        }
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2 - 2] [i_2] [i_6])) ? (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)16] [i_1] [i_2] [i_1] [(short)12])))));
                            var_20 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_15 [i_0] [i_0] [i_3]))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1]))) ? ((-(((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 2])))) : (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 2]))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2 - 2]), (((/* implicit */unsigned short) arr_16 [i_0] [i_2 - 2] [i_2 - 1] [i_0])))))));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((min((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (var_3))))), (((/* implicit */int) ((signed char) var_11))))))));
    }
    var_22 *= var_8;
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((((/* implicit */int) arr_5 [i_7] [i_7] [i_7])) >> ((((~(((/* implicit */int) var_9)))) + (156))))))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned int) (-(((unsigned int) (unsigned char)40))))))));
    }
    for (short i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned char)215))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) arr_3 [i_8] [i_8])))) : (((/* implicit */int) ((arr_2 [(unsigned short)9] [(signed char)4]) > (7563755458125614587ULL))))))) : (((((/* implicit */_Bool) (-(arr_23 [i_8] [2LL])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8] [(unsigned char)8]))))) : (((((/* implicit */_Bool) (short)32754)) ? (18177594134160158650ULL) : (((/* implicit */unsigned long long int) 15LL))))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((_Bool) arr_5 [i_8] [i_8] [i_8])))));
        var_27 = ((/* implicit */_Bool) max((var_27), ((!(((/* implicit */_Bool) arr_26 [i_8] [i_8]))))));
        var_28 = ((/* implicit */short) arr_1 [i_8]);
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            {
                var_29 *= ((/* implicit */signed char) arr_29 [i_9] [i_9]);
                var_30 *= ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_29 [i_9] [i_10])) : (((/* implicit */int) arr_29 [i_9] [i_10]))))));
            }
        } 
    } 
}

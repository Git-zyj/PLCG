/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144278
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])) < (16494722956756604309ULL)))), (524287ULL)));
        var_17 -= (~(((((/* implicit */_Bool) (~(16494722956756604309ULL)))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_0 [i_0])))));
        var_18 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) : (1952021116952947281ULL))) & (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0 - 2]))))));
        arr_4 [i_0] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? ((~(((/* implicit */int) arr_0 [i_0 - 2])))) : (((((/* implicit */int) ((short) arr_2 [i_0 - 1]))) ^ (((((/* implicit */_Bool) 21205452)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [(signed char)20] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (0U)))))) : ((+((((_Bool)1) ? (16494722956756604303ULL) : (8714191028457717016ULL)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3]))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            var_20 = ((long long int) arr_7 [i_1]);
                            arr_16 [i_1] = ((/* implicit */int) (+(arr_6 [i_0] [i_1] [i_4])));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) -492972240))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_22 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_5 - 1] [i_5] [(signed char)11] [i_5]))));
                            arr_21 [8LL] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1] [i_0 - 2])) && (((/* implicit */_Bool) (unsigned char)16))));
                        }
                        var_23 = ((((/* implicit */_Bool) 3968584593382927087LL)) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        var_24 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_10))));
                        arr_22 [i_0 + 1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)178))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    var_25 = ((/* implicit */unsigned short) (~((+(arr_17 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0])))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) ((signed char) -6081584210314157774LL)))));
}

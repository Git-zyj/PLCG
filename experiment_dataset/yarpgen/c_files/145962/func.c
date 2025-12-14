/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145962
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = (-(((((arr_2 [i_0]) + (2147483647))) << (((((/* implicit */int) (unsigned char)215)) - (215))))));
        arr_3 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) -620389543);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) ((long long int) 0ULL));
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 14; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_16)) | (((/* implicit */int) (_Bool)1))))));
                            var_21 += ((/* implicit */unsigned int) (+(-620389543)));
                            arr_16 [i_1] [i_1] [i_1] [i_1] [i_5] [(signed char)5] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_16)))))) / ((-(arr_1 [i_1])))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (short)28070)) != (-594847756)))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned char) (~(-620389543)));
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (unsigned short i_7 = 2; i_7 < 14; i_7 += 1) 
                {
                    for (short i_8 = 2; i_8 < 15; i_8 += 1) 
                    {
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_8 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_6] [i_7] [i_1]))))) : ((~(((/* implicit */int) arr_0 [6LL]))))));
                            var_24 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (short)-286))))));
                            arr_26 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1] [3U] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_24 [i_1] [i_1] [(signed char)3] [i_2] [i_1])) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_1] [i_2] [(short)10] [i_7 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) arr_24 [(_Bool)1] [i_7] [i_1 - 1] [(signed char)14] [i_1 - 1]))));
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            var_26 = ((/* implicit */_Bool) max((var_26), (arr_15 [i_1 + 1] [i_1] [i_9] [i_9] [i_9] [i_9])));
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 1; i_11 < 14; i_11 += 4) 
                {
                    {
                        arr_38 [i_1] [10ULL] [i_10] [i_11 + 1] = ((/* implicit */unsigned char) ((short) arr_5 [i_11 - 1] [i_11 + 1]));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(signed char)6] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) ((_Bool) arr_20 [i_1])))));
                    }
                } 
            } 
        }
    }
    var_28 = ((/* implicit */unsigned long long int) var_9);
    var_29 += ((/* implicit */unsigned char) (~(var_0)));
}

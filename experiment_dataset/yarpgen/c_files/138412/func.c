/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138412
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */signed char) arr_1 [i_0]);
        arr_4 [i_0] |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)11594))) || (((/* implicit */_Bool) (short)-21139)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_11 [i_2] [i_2] [i_1] [(unsigned char)0] &= ((/* implicit */short) var_11);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_16 [(signed char)7] [(signed char)7] [(signed char)7] [(unsigned short)18] = ((/* implicit */_Bool) ((long long int) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) < (((/* implicit */int) (unsigned short)53941))))), (arr_12 [i_2 + 1]))));
                                arr_17 [i_0] [(unsigned short)17] [(unsigned char)13] [(short)12] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)53954))));
                                arr_18 [(_Bool)1] [9LL] = ((/* implicit */_Bool) 1);
                                arr_19 [i_2] [i_2] [i_2] [(unsigned short)9] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_2 [i_2 + 2])) << (((var_4) + (1318595383)))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_0] |= var_18;
                    arr_21 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)11574)) <= (((/* implicit */int) var_17))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11582)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (signed char i_6 = 2; i_6 < 17; i_6 += 4) 
            {
                {
                    arr_26 [14U] [(unsigned char)12] [5LL] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((signed char) ((short) (short)19854))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_33 [i_7] [i_7] [(unsigned short)3] = ((/* implicit */signed char) ((_Bool) (-((+(((/* implicit */int) (unsigned short)53927)))))));
                                arr_34 [i_0] [i_7] [i_6] [i_7] [i_0] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) (short)-19855)))));
                                arr_35 [i_0] [i_0] [i_6] [i_7] [i_7] [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [(signed char)14] [i_6 + 1] [14LL] [(signed char)15])) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_7 + 1] [i_7 + 1])))))) && (((/* implicit */_Bool) ((long long int) (unsigned short)11608)))));
                                arr_36 [i_6] [i_5] [i_5] [(unsigned short)4] [i_5] = ((/* implicit */unsigned short) arr_6 [i_0]);
                            }
                        } 
                    } 
                    arr_37 [i_0] [2LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) ((arr_0 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)19854)))))))));
                    arr_38 [i_0] = ((/* implicit */short) ((unsigned char) (-(arr_7 [i_0] [i_6 - 1] [i_0]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_47 [5U] [i_9] [i_9] [i_10] = ((short) (!(((/* implicit */_Bool) (-(7))))));
                        arr_48 [i_9] [i_9] [i_9] [i_0] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) arr_12 [i_11 - 1])))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (short i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        for (long long int i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            for (long long int i_14 = 1; i_14 < 22; i_14 += 4) 
            {
                {
                    arr_58 [i_12] [12LL] [i_12] [i_12] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_53 [i_14 + 1])) > (((/* implicit */int) arr_53 [i_14 + 1])))));
                    arr_59 [i_14] [2U] [i_12] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)6))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182546
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
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((var_7) > (arr_1 [i_0 + 2])));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((arr_1 [i_0 - 1]) > (var_7)));
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_10 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)122)) > (1946337789))))) > (83846090133878217LL)));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_4))))));
                        arr_13 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_7))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_0] = (-(((/* implicit */int) arr_15 [i_3 + 1] [i_1 - 2] [i_0] [i_0 + 2])));
                            arr_17 [i_0] [i_2] [i_2] = ((unsigned char) ((((/* implicit */int) (unsigned char)141)) > (((/* implicit */int) var_6))));
                            arr_18 [i_0] [i_0] [i_4] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) (_Bool)1)) : (-1193342352)));
                        }
                        arr_19 [i_2] [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) 18446744073709551615ULL);
                        var_12 = ((/* implicit */unsigned char) (((-(arr_7 [i_0] [i_0]))) > (((/* implicit */int) arr_15 [i_1 + 1] [i_1] [i_3] [i_3]))));
                    }
                } 
            } 
        }
        for (short i_5 = 3; i_5 < 13; i_5 += 1) /* same iter space */
        {
            arr_23 [i_0] = ((/* implicit */int) (unsigned char)252);
            arr_24 [i_0] [i_5] = (unsigned char)17;
            /* LoopSeq 1 */
            for (short i_6 = 4; i_6 < 12; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    for (unsigned char i_8 = 2; i_8 < 13; i_8 += 1) 
                    {
                        {
                            arr_33 [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_3)))));
                            arr_34 [i_0] [i_5] [i_6] [i_7] [i_0] = (~(((/* implicit */int) var_1)));
                            var_13 = ((/* implicit */long long int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        }
                    } 
                } 
                arr_35 [i_0] [i_0] = ((/* implicit */int) var_1);
            }
        }
        for (short i_9 = 3; i_9 < 13; i_9 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */short) (+(arr_11 [i_0] [i_9] [i_0] [i_0])));
            arr_38 [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
            arr_39 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_9] [i_9] [i_0 - 3])) > (((/* implicit */int) var_6))));
        }
    }
    var_15 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_3)) > (((/* implicit */int) (unsigned short)45825)))), (var_3)));
    var_16 = ((/* implicit */long long int) var_2);
    var_17 = ((/* implicit */short) max((var_9), (((/* implicit */long long int) var_5))));
}

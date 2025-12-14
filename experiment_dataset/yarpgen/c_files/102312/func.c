/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102312
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                arr_8 [0] [i_1] [0] |= ((/* implicit */_Bool) (-(max((arr_5 [i_0] [i_1] [4U]), (((/* implicit */unsigned long long int) (unsigned char)189))))));
                var_10 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_0 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_12 [16U] [16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_2]))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) (~(arr_16 [i_2])));
                        /* LoopSeq 3 */
                        for (int i_6 = 3; i_6 < 23; i_6 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned char) -426755103);
                            var_13 = var_9;
                            var_14 = ((/* implicit */unsigned char) 4435687283887884388LL);
                            arr_26 [(unsigned char)7] [(unsigned char)7] [i_4] [(unsigned char)7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1797883043)) || (((/* implicit */_Bool) 2759466094809322866ULL))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            arr_29 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_5] [i_3] [i_4] [i_5]))));
                            arr_30 [i_7] [17U] [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_8))))));
                            var_15 = ((/* implicit */unsigned char) var_7);
                            arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) var_2));
                            arr_32 [5U] [5U] [i_5] [i_5] [i_5] [i_7] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (-5084908112380266682LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            arr_35 [i_2] [i_2] [i_2] [i_8] [i_2] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (_Bool)1)))));
                            var_16 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) >= (16221863251548057410ULL)));
                            arr_36 [i_8] [i_8] = ((/* implicit */unsigned int) var_5);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        arr_40 [i_9] [i_9] = ((/* implicit */unsigned int) (-(var_2)));
        arr_41 [i_9] = ((/* implicit */_Bool) var_0);
        arr_42 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [20ULL]))));
        var_17 = ((/* implicit */unsigned char) (signed char)25);
    }
    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        arr_45 [i_10] [(unsigned short)2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_9))))));
        arr_46 [i_10] [i_10] = ((/* implicit */unsigned int) var_6);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_5))))))) < (((/* implicit */int) arr_11 [i_10] [i_10]))));
    }
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)255))));
}

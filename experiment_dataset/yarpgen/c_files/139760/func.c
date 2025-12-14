/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139760
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((var_7) - (189703683)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) arr_1 [i_1]);
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned short) ((unsigned char) var_8));
                    var_13 = arr_1 [i_2];
                    var_14 = ((/* implicit */unsigned long long int) (_Bool)0);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */short) ((arr_4 [i_2 - 1] [i_3 + 1] [i_3] [i_2 - 1]) == (((/* implicit */int) var_3))));
                        var_16 = ((/* implicit */unsigned int) ((-5112650898919580431LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_8 [i_2 - 3] [i_0 - 1]), (arr_8 [i_2 + 1] [i_0 - 3])))) || (((((/* implicit */int) arr_8 [i_2 + 1] [i_0 - 3])) >= (((/* implicit */int) arr_8 [i_2 - 3] [i_0 - 2]))))));
                                var_18 = ((/* implicit */long long int) ((var_9) || ((!(((/* implicit */_Bool) -204854124))))));
                                var_19 = (+(((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)221)) || (((/* implicit */_Bool) var_8)))))))));
                            }
                        } 
                    } 
                }
                for (short i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) ((signed char) (-(max((((/* implicit */long long int) var_9)), (var_8))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0 - 3] [i_0 - 3] [i_0])))) ^ (var_8)));
                }
                var_22 = ((/* implicit */unsigned long long int) (signed char)91);
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_1]))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 11; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) var_4);
                                var_25 = var_6;
                                var_26 = ((/* implicit */long long int) (-(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_1 [i_9])) - (63)))))));
                                var_27 = ((/* implicit */unsigned long long int) (+(-6059783902316915401LL)));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) var_2);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 11; i_10 += 4) 
    {
        for (short i_11 = 4; i_11 < 9; i_11 += 4) 
        {
            for (unsigned short i_12 = 3; i_12 < 8; i_12 += 1) 
            {
                {
                    var_29 = (-(((((/* implicit */int) var_0)) % (((/* implicit */int) var_0)))));
                    var_30 = ((/* implicit */signed char) arr_19 [i_10] [i_12] [i_10] [i_10]);
                    var_31 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned char) var_2);
}

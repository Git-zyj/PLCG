/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139823
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) min((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
        arr_2 [i_0] |= ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_14 |= (unsigned short)51531;
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_10))))) ? (2242539457088119852LL) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_7)))))))));
                                var_16 |= (+(((/* implicit */int) ((unsigned short) arr_11 [i_5] [i_4] [i_3] [(signed char)2] [i_1]))));
                                arr_16 [i_4] [i_4] [i_2] [18] [18] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [3U] [i_2] [i_2]))) < (2242539457088119872LL))));
                                var_18 = var_5;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) var_0);
        arr_23 [i_1] [19ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_1] [(unsigned char)14] [i_1] [i_1])) <= ((+(((/* implicit */int) arr_3 [i_1]))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
        var_20 -= ((/* implicit */unsigned short) arr_6 [(signed char)0]);
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (((+(arr_19 [(unsigned char)22] [i_8] [i_8] [i_8] [i_8] [i_8]))) / (((/* implicit */long long int) ((unsigned int) (unsigned short)26308)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_8] [(short)8] [i_8] [i_8] [(unsigned short)9]))))) : (min((arr_9 [i_8] [(unsigned short)6]), (((/* implicit */unsigned int) var_10)))))))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((2242539457088119852LL) * (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9]))))))));
        var_23 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_1)))) > (((/* implicit */int) var_11))));
        arr_31 [i_9] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((1181099600U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))))))));
    }
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned int) arr_8 [i_10] [i_11] [i_10]);
                var_25 -= ((unsigned short) (+(((/* implicit */int) var_1))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4081162107U)) ? (-6467314847754719474LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109)))));
    var_27 += ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29130)) ? (var_2) : (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8))) : (((/* implicit */long long int) var_4)))) + (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_28 = ((/* implicit */int) 3113867695U);
}

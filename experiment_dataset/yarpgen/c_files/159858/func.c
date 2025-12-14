/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159858
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) -405453838))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) max(((-((+(arr_2 [i_0]))))), (arr_2 [(signed char)18])));
        var_12 |= ((/* implicit */unsigned char) min((arr_0 [i_0]), (min((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 2) 
    {
        var_13 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            var_14 = ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_1 - 2] [(short)0] [i_2]))));
            var_15 = ((/* implicit */int) ((long long int) arr_3 [i_2 - 1] [i_1 - 3]));
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_0))))));
                        var_17 = ((/* implicit */long long int) (~(((unsigned long long int) arr_12 [i_1] [i_2] [i_1] [i_4]))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                arr_17 [i_5] [i_2] [5] [i_2] = ((/* implicit */unsigned char) arr_8 [i_1] [13] [i_2]);
                var_18 = ((/* implicit */unsigned short) arr_8 [(unsigned char)2] [i_2] [i_2]);
            }
            for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
            {
                var_19 = ((/* implicit */unsigned int) (unsigned char)143);
                var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [22] [i_1] [i_1]))) ^ (arr_10 [(unsigned short)18] [i_6 - 1] [i_2 + 1] [(unsigned short)18])));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_21 = ((/* implicit */int) ((unsigned char) var_0));
                var_22 *= ((/* implicit */unsigned int) arr_4 [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        {
                            arr_27 [i_1] [i_1] [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_1 - 3]))));
                            arr_28 [i_2] [i_9] [i_2] [(unsigned short)6] [(signed char)9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 405453838))));
                            var_23 |= ((/* implicit */unsigned char) (_Bool)0);
                            arr_29 [i_1] [i_2] [i_2] [i_7] [i_1] [i_8] [i_9] = arr_23 [i_1] [i_2 + 1] [i_2 + 1] [i_9];
                        }
                    } 
                } 
                var_24 &= ((/* implicit */unsigned int) (+(arr_13 [(_Bool)1] [i_2])));
            }
        }
        var_25 = ((/* implicit */signed char) (~(9382449294786572761ULL)));
    }
    var_26 &= ((/* implicit */int) (signed char)-18);
}

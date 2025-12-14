/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109176
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
    var_14 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) var_12)), (var_11))) >= (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_12))) | (var_12))))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)3897), (((/* implicit */unsigned short) (short)-29769)))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(0U)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)38407))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_2] [i_0])) - (arr_7 [i_0] [i_1] [i_2] [i_3])));
                        var_18 = ((/* implicit */unsigned short) ((arr_7 [i_3] [i_1] [(unsigned short)11] [i_3 + 1]) * (arr_7 [i_0] [i_1] [(unsigned char)8] [i_3 + 1])));
                        var_19 = ((/* implicit */unsigned int) var_2);
                        var_20 = ((/* implicit */unsigned char) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_4 = 2; i_4 < 12; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 13; i_5 += 2) 
            {
                for (short i_6 = 2; i_6 < 12; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((_Bool) arr_9 [i_4 + 1] [i_5 + 1] [9ULL] [i_6 + 2]));
                            var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) || (((/* implicit */_Bool) arr_9 [i_7] [i_5] [i_5] [i_0]))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */short) var_12);
        }
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            arr_25 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8]))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) * (4165000553U)))));
            var_24 = ((/* implicit */int) var_10);
        }
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            arr_29 [i_9] &= ((/* implicit */unsigned short) var_10);
            var_25 = ((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))) > (930501233U)));
            arr_30 [i_9] [i_0] [i_0] = ((/* implicit */unsigned short) arr_6 [i_0]);
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [11ULL] [i_9] [i_9] [i_9] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_9] [i_9] [i_9] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_9] [i_0] [3ULL] [i_0]))));
        }
    }
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        var_28 = ((/* implicit */int) (unsigned char)23);
        var_29 = ((/* implicit */unsigned short) min((((arr_32 [i_10]) | (arr_32 [i_10]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) == (4193928224U))))));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (~(69605133U)))) ? (17601008221294582582ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27799)))));
        arr_35 [i_10] = ((/* implicit */int) var_8);
        var_31 = ((/* implicit */unsigned short) arr_32 [i_10]);
    }
}

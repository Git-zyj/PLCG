/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109987
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [0U] [i_0] [i_0] [5U] [i_3] = ((/* implicit */unsigned int) max(((+(arr_11 [(signed char)19] [i_1] [i_2] [i_1]))), (((int) arr_2 [i_0]))));
                        arr_13 [i_2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) var_7);
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (arr_11 [i_0] [i_1] [i_2] [i_3]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    arr_21 [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_11 [i_5] [6LL] [i_4] [i_0])))) ? (((arr_11 [i_5] [i_4] [i_0] [i_0]) / (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) arr_2 [i_0]))))));
                    arr_22 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) | (((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))) | (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)108)) ? (939985129) : (((/* implicit */int) (signed char)-4)))))))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_3 [i_0] [i_5])))))), ((((+(var_15))) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [(short)12] [i_4] [(short)12]) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((var_2) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16384))))) & (((((/* implicit */_Bool) arr_20 [i_4] [i_5])) ? (((/* implicit */long long int) var_16)) : (var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                arr_27 [(short)7] [i_4] [i_0] [i_7] = ((/* implicit */unsigned char) var_12);
                                var_20 += ((/* implicit */long long int) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_18 [i_0]))))));
        arr_28 [i_0] = ((/* implicit */signed char) arr_19 [i_0] [i_0] [i_0] [i_0]);
    }
    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_19 [i_8] [14] [i_8] [i_8]))));
        var_23 = ((/* implicit */short) (-(max((((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned char)0)))), ((+(((/* implicit */int) (short)-25800))))))));
    }
    /* LoopNest 3 */
    for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        for (unsigned char i_10 = 1; i_10 < 12; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), ((unsigned char)0)));
                    arr_41 [i_9] [i_9] |= ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_19 [i_9] [i_9] [(signed char)3] [i_9])) - (((/* implicit */int) ((var_16) > (arr_15 [i_9] [i_11] [i_11])))))));
                    var_25 = ((/* implicit */unsigned int) max(((+((+(((/* implicit */int) var_6)))))), (((/* implicit */int) var_11))));
                }
            } 
        } 
    } 
}

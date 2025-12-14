/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178459
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)153), (((unsigned char) 6705868140741396733LL))))) && (((/* implicit */_Bool) (+(var_10))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [i_0] [i_0]) == (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0])))))))) + (max(((~(((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) arr_3 [i_0]))))))));
        var_15 = ((/* implicit */signed char) arr_3 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1]))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_4))) > (((/* implicit */int) arr_3 [i_1]))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_1]))) : (((((/* implicit */int) arr_0 [i_1] [i_1])) / (((/* implicit */int) var_11))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        var_18 = ((/* implicit */short) ((_Bool) arr_2 [i_2 + 1] [i_2 + 2]));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) && (((/* implicit */_Bool) var_7))))) ^ ((~(((/* implicit */int) arr_3 [(unsigned short)8])))))))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) (_Bool)1))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_4]);
            arr_16 [(signed char)14] &= ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_10 [i_2] [i_2 + 1])) : (((/* implicit */int) arr_12 [i_2])));
            var_23 = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_13 [(_Bool)1] [i_2] [i_2])))));
            arr_17 [i_2] [i_2] = ((/* implicit */short) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_2])))));
        }
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            arr_20 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
            var_24 |= ((/* implicit */unsigned short) arr_1 [i_2 + 1]);
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_25 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                        arr_28 [i_7] [i_7] [i_7] [i_2] &= ((/* implicit */short) var_4);
                        arr_29 [i_2] [i_6] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */short) var_1);
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
        var_28 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_2 + 3] [i_2 + 1])) > (((/* implicit */int) var_9))));
    }
    var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_30 = ((/* implicit */int) var_11);
}

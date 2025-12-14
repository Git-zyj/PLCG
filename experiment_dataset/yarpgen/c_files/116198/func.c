/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116198
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((-(min((arr_4 [i_0] [i_1] [i_0] [i_1]), (var_7))))) % (((/* implicit */int) arr_3 [i_1] [i_2 - 3]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_4] [i_3] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (var_6)));
                                arr_14 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_6) : (var_9)))) : (max((7245836816943392427ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_2] [i_4 - 4])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))));
                                var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)3))))) : (((((/* implicit */_Bool) var_0)) ? (var_9) : (var_6)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (!(var_11))))));
                                arr_16 [i_4] [i_4] [i_3] = var_8;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 16; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_11 [i_6] [i_6]))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_5] [i_5]))) && (((/* implicit */_Bool) (+(var_9))))));
                    var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
        arr_25 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_3 [i_5] [i_5]))));
    }
    var_19 = (+(var_10));
}

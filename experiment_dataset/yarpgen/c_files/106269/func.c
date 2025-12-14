/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106269
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
    var_20 = ((/* implicit */unsigned char) (~(min((var_4), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_2)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))))));
        var_21 = ((/* implicit */int) var_10);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_1]));
        var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) (_Bool)1))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) (_Bool)1);
                    var_24 = ((/* implicit */unsigned char) ((arr_6 [i_2]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_5 [i_2])))))));
                    var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_2]))));
                    var_26 = ((/* implicit */signed char) var_8);
                    arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2] [i_2]))));
                }
            } 
        } 
        arr_15 [i_2] [i_2] = var_12;
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) arr_4 [i_5] [i_5]);
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    {
                        var_28 = ((/* implicit */long long int) (_Bool)1);
                        var_29 = ((/* implicit */unsigned int) (unsigned char)11);
                        arr_30 [i_5] [i_6 + 1] [i_7] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_27 [i_8] [i_6 - 1] [i_6 + 3])) > (((/* implicit */int) (short)815)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_38 [i_10] [14U] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_36 [i_10]))))));
            var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_31 [i_10]))));
            arr_39 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) var_19);
            arr_40 [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_12))));
            arr_41 [(_Bool)1] [i_10] = ((/* implicit */unsigned long long int) arr_34 [i_10] [(unsigned char)8] [i_10]);
        }
        var_31 = ((/* implicit */short) var_2);
    }
    var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) != (max((((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((var_14) ? (var_3) : (var_9)))))));
    var_33 = ((var_4) >= (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) : (65535ULL))), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)197))))));
}

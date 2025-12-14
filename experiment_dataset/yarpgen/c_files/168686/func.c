/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168686
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((unsigned int) ((((/* implicit */int) (short)-13830)) / (((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                arr_5 [i_0] [i_1] [i_1] &= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (arr_2 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) & (max((((unsigned int) var_8)), (((/* implicit */unsigned int) arr_10 [i_2] [i_3] [i_4]))))));
                        var_16 *= ((/* implicit */_Bool) min((((((/* implicit */int) var_4)) - (((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) (short)13829)) : (((/* implicit */int) arr_14 [i_5])))))), ((~((~(var_1)))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_17 += ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) arr_7 [i_2])), (arr_13 [i_5])))) == (((((((/* implicit */int) arr_12 [i_2])) / (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_3))))));
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (signed char)-75);
                            arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_1);
                            var_18 &= ((/* implicit */unsigned short) (short)-13836);
                            arr_19 [i_2] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= ((-(((/* implicit */int) (short)13836))))))) | (min((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_12)))), (((((/* implicit */int) (short)-908)) % (((/* implicit */int) var_11))))))));
                        }
                        arr_20 [i_5] [i_4] [i_4] [i_3] [i_3] [i_2] = var_11;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2]))) : (var_6)))) ? (max((((/* implicit */int) min((arr_15 [i_2] [i_7] [i_7] [i_7] [i_8]), (((/* implicit */short) var_3))))), ((+(((/* implicit */int) var_4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                    arr_27 [i_8] [i_7] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */int) var_7)) << (((((/* implicit */int) var_2)) - (12407))))) <= (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_4)))))))) <= (((/* implicit */int) var_12))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_33 [i_9] [i_9] [i_10] = ((/* implicit */long long int) (short)13835);
                    var_20 = ((/* implicit */unsigned long long int) var_9);
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) && (((/* implicit */_Bool) max((var_5), ((short)13835)))))))) - ((~(var_13)))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((min((arr_24 [i_2]), (((/* implicit */int) arr_6 [i_2])))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)13830)) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
    }
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        arr_38 [i_11] [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_37 [i_11] [i_11])) || (((/* implicit */_Bool) var_13)))) ? (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_11])) || (((var_7) || (var_8))))))));
    }
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                var_24 += ((/* implicit */int) (unsigned short)50128);
                var_25 &= ((/* implicit */signed char) var_5);
            }
        } 
    } 
}

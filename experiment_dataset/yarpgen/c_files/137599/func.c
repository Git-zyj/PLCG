/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137599
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_13 |= ((/* implicit */unsigned char) (+(((var_2) - (((/* implicit */unsigned long long int) (+(1519495586U))))))));
        var_14 = ((/* implicit */long long int) min(((-(min((arr_2 [i_0] [2U]), (var_2))))), (var_4)));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_1] [i_4] [(signed char)5])) : (((/* implicit */int) max((var_9), (var_6))))))));
                        arr_16 [i_1] [i_1] [10] [(unsigned char)10] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) min((arr_7 [i_1]), (((/* implicit */unsigned short) arr_6 [i_2] [(signed char)6]))))) >= (((/* implicit */int) ((signed char) arr_6 [i_1] [i_1]))))))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_5 [i_4]), (arr_5 [i_1])))) + (((/* implicit */int) arr_5 [i_1])))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned short) min(((+(max((var_12), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) max(((unsigned short)36836), ((unsigned short)28699))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_16 *= ((/* implicit */signed char) (-((~(1519495583U)))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            for (signed char i_7 = 1; i_7 < 23; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                arr_36 [i_5] [(_Bool)1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (arr_26 [i_6 + 1] [(unsigned short)20] [i_8 - 1])));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) + (((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */unsigned long long int) 4294967287U)) : (arr_25 [i_7])))));
                            }
                        } 
                    } 
                    var_18 = var_3;
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) (~(var_0)));
    }
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        for (unsigned int i_11 = 1; i_11 < 20; i_11 += 2) 
        {
            {
                arr_44 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) min((min((arr_25 [i_10]), (((/* implicit */unsigned long long int) arr_31 [(_Bool)1])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))) + (((long long int) (short)-444)))))));
                var_20 = ((/* implicit */signed char) var_9);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((long long int) var_0));
    var_22 *= ((/* implicit */short) var_10);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1324
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [(signed char)15] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_3] [i_0] [i_0]))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned int) min((1090200758), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))))), (arr_3 [i_2] [i_1] [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((2020983820U) <= (((/* implicit */unsigned int) var_1))))) - (((/* implicit */int) min((arr_2 [i_0] [i_1] [i_4]), (var_3))))))))))));
                            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_13)) - (30)))))))))));
                            arr_17 [i_0] [i_1] [i_0] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0]) - (arr_7 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_10 [i_0]))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_14)) - (100)))))), (min((var_4), (((/* implicit */unsigned int) arr_0 [i_0]))))))));
                            var_19 -= ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_25 [i_0] = ((/* implicit */signed char) (+(max((((((/* implicit */int) (unsigned short)60658)) / (((/* implicit */int) arr_14 [i_0])))), ((-(arr_19 [i_0])))))));
                                arr_26 [i_0] [i_0] [i_6] [i_7] [i_8] [i_8] [i_6 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_6 - 1] [i_7] [i_1])) ? ((((_Bool)1) ? (((/* implicit */int) arr_21 [i_0] [i_6 + 1] [i_6] [i_7])) : (((/* implicit */int) arr_23 [i_6 + 2] [(signed char)7] [i_1] [i_6] [i_6 + 2] [i_6 + 2] [i_1])))) : (((((/* implicit */int) arr_23 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        for (unsigned char i_10 = 2; i_10 < 12; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 11; i_11 += 4) 
                {
                    for (unsigned short i_12 = 3; i_12 < 12; i_12 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) var_15);
                            var_21 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (~(4294967264U)))) != (max((var_12), (((/* implicit */unsigned long long int) arr_35 [(signed char)0] [i_10 - 1] [i_9] [(signed char)0])))))) ? (((/* implicit */unsigned int) ((arr_19 [i_9]) + (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) : (((arr_32 [i_9] [i_9] [i_9]) - (min((((/* implicit */unsigned int) (_Bool)1)), (arr_6 [i_9] [i_10] [i_12] [i_12])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_13 = 3; i_13 < 11; i_13 += 2) 
                {
                    for (signed char i_14 = 3; i_14 < 11; i_14 += 3) 
                    {
                        for (signed char i_15 = 3; i_15 < 12; i_15 += 2) 
                        {
                            {
                                arr_46 [i_15 + 1] [i_14] [i_13 + 1] [i_14] [i_9] = ((/* implicit */short) arr_5 [i_9] [i_10] [i_14 - 3] [i_14]);
                                var_22 ^= ((/* implicit */unsigned char) var_7);
                                var_23 *= ((/* implicit */unsigned short) (signed char)27);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

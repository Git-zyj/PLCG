/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119438
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) min((max((max((((/* implicit */long long int) var_2)), (var_8))), (min((var_14), (((/* implicit */long long int) var_15)))))), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                arr_6 [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_7)) & (((/* implicit */int) var_13))))))) && (((/* implicit */_Bool) (-((+(var_1))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 8; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            arr_17 [i_2 + 2] [i_2] [i_3] [(signed char)7] [i_5] = var_14;
                            var_17 -= ((/* implicit */signed char) (+(3274370669U)));
                            /* LoopSeq 1 */
                            for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
                            {
                                arr_21 [i_3] [1U] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) min((var_2), (((/* implicit */short) var_7)))))))));
                                arr_22 [i_2] [i_2] [i_2] [i_2 - 3] = ((/* implicit */unsigned char) (+(max((var_8), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_13))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+((~(((/* implicit */int) var_0)))))))));
                            }
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))))), ((~(var_6))))))));
                        }
                    } 
                } 
                arr_23 [i_2] [i_3] = ((/* implicit */int) ((((((var_14) + (var_5))) / (((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) var_13))))))) ^ (var_8)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    arr_26 [i_2 - 2] [i_2] = ((/* implicit */_Bool) (~((~(var_14)))));
                    arr_27 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (~((~(var_8)))));
                }
                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 8; i_8 += 3) 
                {
                    for (unsigned int i_9 = 2; i_9 < 8; i_9 += 1) 
                    {
                        {
                            arr_32 [i_2] [i_2] [i_3 + 2] [i_3 + 2] [i_8] [i_2] = ((/* implicit */long long int) var_7);
                            arr_33 [7U] [i_2] = ((/* implicit */unsigned short) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
}

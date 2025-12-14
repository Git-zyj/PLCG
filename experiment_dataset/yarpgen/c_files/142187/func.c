/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142187
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    var_17 *= ((/* implicit */signed char) (~(((/* implicit */int) max(((unsigned char)146), ((unsigned char)110))))));
                    arr_6 [8] [(short)6] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)156)), (2029644255)));
                }
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    arr_11 [i_0] [(_Bool)1] [i_1] [i_3] = ((/* implicit */short) var_3);
                    var_18 = ((/* implicit */unsigned int) (!(((((/* implicit */int) (unsigned char)98)) <= (((/* implicit */int) arr_3 [i_1 - 2]))))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 3; i_4 < 9; i_4 += 2) 
                {
                    arr_14 [i_4 - 3] [i_1] = ((/* implicit */unsigned long long int) var_5);
                    var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */int) var_12);
                            arr_20 [0U] [i_0] [i_1 + 1] [i_6] |= ((/* implicit */unsigned short) var_2);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((var_2) <= (((/* implicit */long long int) var_12)))))) % (((var_2) & (var_6)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (unsigned int i_9 = 2; i_9 < 13; i_9 += 2) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned long long int) var_6);
                    var_23 ^= ((/* implicit */unsigned char) var_1);
                    arr_28 [i_7 + 1] [i_7] [i_7] [i_7 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) & (((/* implicit */int) min(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned short)16976)))))))));
                    arr_29 [i_7] [i_8] [i_9 - 2] &= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_8)))))))), ((+((+(((/* implicit */int) (unsigned short)61300))))))));
                    arr_30 [(short)8] [i_9 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -213065665)) / (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (3170915447U))))))));
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-2)))) + (((/* implicit */int) (unsigned char)131))))), (var_10)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156094
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
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) (((((~(arr_0 [(short)3]))) / (((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_3] [i_0] [i_0])), (arr_6 [12ULL])))))) & (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (arr_6 [6U])))) * ((~(arr_6 [i_0]))))))));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -2147483627))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) min((min((arr_0 [i_0]), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125)))))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_19 [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) var_9);
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) ((arr_12 [i_6] [i_5]) == (((/* implicit */unsigned long long int) -2147483615))))), (-2147483627))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_13)), (arr_14 [i_0] [i_1]))) & (((/* implicit */unsigned long long int) ((max((var_11), (((/* implicit */unsigned int) -2147483627)))) >> (((arr_17 [i_0] [i_0] [i_0] [(unsigned short)12] [(unsigned char)4]) + (5732457648794544351LL))))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned short) max((max((arr_16 [i_0] [i_8]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_7] [i_8])))), (min((((/* implicit */unsigned long long int) var_7)), (var_1)))));
                            var_20 += ((/* implicit */unsigned char) ((min((arr_3 [i_8]), (arr_3 [i_7]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_14))));
}

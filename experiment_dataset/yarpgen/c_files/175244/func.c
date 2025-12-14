/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175244
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) -8520785749320273761LL)) ? (((/* implicit */unsigned long long int) arr_3 [12] [12])) : (arr_1 [0LL] [0LL]))), (arr_1 [i_1 - 3] [6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(signed char)12] [i_1])) ? (arr_4 [(short)16] [(short)16]) : (arr_4 [i_0] [(short)8])))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 = var_12;
                                var_19 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_16 [i_0] [i_1] [(signed char)15] [i_0] = ((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_0]);
                            /* LoopSeq 3 */
                            for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) 
                            {
                                var_20 = ((/* implicit */int) ((min((8520785749320273760LL), (((/* implicit */long long int) (unsigned short)3)))) & (arr_14 [i_7 - 1] [i_6 - 1] [i_1 + 1])));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) arr_6 [i_0]))))) + (((/* implicit */int) var_3))))) ? (max((((/* implicit */unsigned long long int) 4020158014U)), (arr_15 [i_0] [i_7] [i_0] [i_7] [i_7] [i_7 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned short)5] [i_1] [i_1] [i_0])) != (2147483647))))) > (max((arr_14 [2] [i_5] [i_0]), (((/* implicit */long long int) var_14))))))))));
                            }
                            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                            {
                                arr_23 [i_8] [i_8] [i_0] [i_8] [i_8] [i_8] = ((/* implicit */long long int) arr_0 [16ULL]);
                                arr_24 [i_0] [i_0] [i_5] [i_0] [i_8] = ((/* implicit */signed char) ((unsigned int) arr_1 [i_0] [i_0]));
                            }
                            for (signed char i_9 = 2; i_9 < 17; i_9 += 3) 
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) (signed char)41))))) ? (((((/* implicit */_Bool) 274809292U)) ? (1278537278) : (((/* implicit */int) (signed char)-73)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 5751692713800224824ULL))))))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)157)) / (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (arr_17 [i_0] [i_0]) : (var_8))) <= (((((/* implicit */_Bool) 1533397400U)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_26 [i_0] [0U] [i_5] [(signed char)17])))))))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (min((((/* implicit */unsigned int) arr_5 [i_0] [(unsigned short)12] [(_Bool)1] [i_0])), (4020158014U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (signed char)-100))))))))));
                                arr_29 [i_0] [i_0] [i_0] = ((/* implicit */short) 8520785749320273761LL);
                                arr_30 [i_0] [i_1 + 3] [(signed char)9] [i_0] [i_9] = ((/* implicit */int) (~(arr_4 [i_0] [i_0])));
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_10 [(_Bool)1]))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned char)156)))))))) ? (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) || (((((/* implicit */_Bool) (signed char)-83)) && (((/* implicit */_Bool) var_13)))))))));
}

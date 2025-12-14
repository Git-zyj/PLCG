/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115375
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned int) 406053964)) : (3417402544U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (var_0)))) / (((/* implicit */int) var_9)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] [(_Bool)1] [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((int) min((arr_8 [i_0] [i_1 + 2] [i_2] [i_3]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_13 [(short)5] [i_1] [(unsigned short)0] [i_3])), ((unsigned short)13354)))))));
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_2 + 1])))) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) (unsigned char)175))))) ? (((((((/* implicit */int) (unsigned short)13351)) >= (((/* implicit */int) arr_14 [i_4] [i_1] [i_3] [i_0] [i_4 - 2])))) ? (arr_10 [i_2 + 3] [i_1] [i_4 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((2580884605U) >= (var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((((/* implicit */int) var_5)) % (-539331791))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((((/* implicit */_Bool) (unsigned short)36523)) ? (((/* implicit */long long int) ((unsigned int) ((unsigned char) (unsigned short)13351)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_10 [i_0 + 1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((arr_3 [i_1 - 2] [i_0 - 1]) | (((/* implicit */long long int) arr_10 [(signed char)7] [i_1] [1ULL])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [i_0 + 1] [i_1 - 2])))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_18 = var_12;
                            arr_22 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */signed char) arr_18 [i_0 - 1] [i_0 - 1]);
                            arr_23 [i_6] [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [4U] [i_0 - 1] [(unsigned short)2] [i_1] [i_5] [i_6])) || (((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_14))))))))) - (((unsigned int) arr_12 [i_1 - 1] [i_1 + 2] [i_6] [i_6] [i_5] [i_0 + 1])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((var_12) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (var_1)))) ? (((/* implicit */int) ((var_5) || (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_5))))));
    var_20 = ((/* implicit */unsigned short) var_11);
    var_21 = ((/* implicit */long long int) var_6);
}

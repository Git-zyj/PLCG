/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183017
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))) : (((arr_1 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 - 1])) || (((/* implicit */_Bool) arr_0 [i_3 - 1])))) ? (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [(short)0] [i_1]))) : (var_1))), (((/* implicit */unsigned int) arr_10 [i_0] [14LL] [i_3 - 1] [i_0]))))) : (arr_3 [i_3 - 1])));
                                arr_16 [1] [(unsigned short)13] [i_1] [i_2] [i_3 + 2] [i_3] [i_3] = ((/* implicit */signed char) min((max(((!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1])))), ((!((_Bool)1))))), ((!(((/* implicit */_Bool) var_4))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_5] [0U] [i_5] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)46880)), ((+((+(((/* implicit */int) (short)12940))))))));
                            arr_23 [(unsigned char)3] [i_5] [i_1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_5])) <= ((((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -3865936528965476508LL))))) : ((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_6]))))))));
                            arr_24 [i_0] [i_5] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14291)) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_1])) : (arr_11 [i_0] [i_1] [i_5] [i_6])))) ? (((/* implicit */int) arr_5 [(short)20])) : (((((/* implicit */_Bool) (unsigned short)14291)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)21312))))))) ? (((((/* implicit */_Bool) (unsigned short)21312)) ? (((/* implicit */unsigned long long int) 11)) : (17169546299174051741ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5385)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = var_0;
}

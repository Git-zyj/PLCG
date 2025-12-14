/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160019
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
    var_10 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (var_6)));
    var_11 *= ((/* implicit */int) min((((unsigned short) (unsigned short)4)), (((/* implicit */unsigned short) var_2))));
    var_12 = ((/* implicit */int) ((min((((((/* implicit */_Bool) (unsigned short)65520)) ? (var_6) : (((/* implicit */long long int) 627110389)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32445))) : (var_4)))))) + ((~(((((/* implicit */long long int) ((/* implicit */int) (short)-21816))) | (var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned char)18] [i_0] [i_0] [i_0]))))) & (arr_9 [i_0] [i_0] [i_1] [i_2 + 2] [i_0] [(_Bool)1])))) ^ (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 2])))))) & (((long long int) 1637362543239295448LL))))));
                            var_14 = ((/* implicit */long long int) ((arr_7 [10ULL] [i_1] [i_2 + 1] [i_2 - 2]) & (((/* implicit */int) ((signed char) arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 2])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 15; i_4 += 2) 
                {
                    for (int i_5 = 3; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_21 [i_5] [i_5 - 2] [i_4] [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) (+(((min((arr_1 [i_1]), (((/* implicit */long long int) arr_4 [i_6])))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-21827)) : (arr_17 [i_6] [18] [i_4] [18] [18]))))))));
                                arr_22 [i_0] [i_1] [i_4] [i_5 + 2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_5 - 1])) ? (((/* implicit */int) ((unsigned char) arr_0 [i_4 + 4]))) : (((/* implicit */int) min((arr_4 [i_5 + 2]), (arr_4 [i_5 + 1]))))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (var_1)))), (var_9)))) ? (((((/* implicit */unsigned long long int) arr_13 [i_1] [i_5 + 1] [i_1])) + (arr_12 [i_5 - 3] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) arr_18 [i_6]))));
                                var_16 = ((/* implicit */int) ((long long int) (!(arr_14 [i_5 + 2] [i_6] [i_4 + 3] [i_1]))));
                                arr_23 [i_0] [i_5] [7ULL] [7ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5 - 3] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            {
                arr_30 [i_8] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_8] [i_8] [i_7])) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (((arr_13 [i_7] [i_8] [i_7]) ^ (arr_11 [i_7] [i_7] [i_8] [i_7]))))))));
                var_17 = ((/* implicit */int) (~(((long long int) arr_5 [i_7 + 1] [i_7 - 1] [i_7] [i_7 + 1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            arr_36 [i_7 - 2] [i_8] [i_9] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                            var_18 -= max((min((((/* implicit */long long int) 327885178U)), (arr_13 [i_10 + 1] [i_10 + 1] [i_7 - 1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_10 + 1])) ^ (((/* implicit */int) arr_8 [i_7 + 1] [i_10] [i_10 + 1] [i_10 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

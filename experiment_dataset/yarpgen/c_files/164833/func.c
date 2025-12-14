/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164833
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                                var_13 = ((/* implicit */short) arr_8 [i_0] [i_0] [(unsigned char)2] [i_0]);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) var_6);
                    var_15 = ((/* implicit */unsigned char) ((min((arr_6 [i_0] [i_2 + 2] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7619091699013504182ULL)) ? (var_1) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_1] [i_0]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_9 [i_1] [i_0] [i_1] [i_2 + 1]))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 2]) > (arr_2 [i_2 - 2] [i_0] [i_2 + 1]))))) - (((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_0] [i_2 + 1])) ? (arr_2 [i_2 - 2] [i_0] [i_2 + 1]) : (arr_2 [i_2 - 2] [i_0] [i_2 + 1])))));
                    var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_0] [(signed char)17] [i_0] [i_2 + 3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_3))) * (((/* implicit */int) var_2)))))));
    var_19 += ((/* implicit */short) min((max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)93)), ((unsigned short)3)))), (2296510041U))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 511U)) ? (33553920) : (var_4)))))));
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (short i_6 = 3; i_6 < 11; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    arr_20 [i_7] [i_6] [i_7] = (i_7 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2476268990U)) ? (((((arr_2 [i_5] [i_7] [i_5]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))))) - (arr_3 [i_5] [11]))) : (((/* implicit */long long int) ((arr_6 [i_7] [i_6 - 2] [i_7]) - (arr_6 [i_7] [i_6 + 1] [i_7]))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2476268990U)) ? (((((arr_2 [i_5] [i_7] [i_5]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))))) + (arr_3 [i_5] [11]))) : (((/* implicit */long long int) ((arr_6 [i_7] [i_6 - 2] [i_7]) - (arr_6 [i_7] [i_6 + 1] [i_7])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 10; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_14 [i_7] [i_6])) + (max((arr_15 [(unsigned char)0] [(unsigned char)0]), (((/* implicit */int) arr_8 [i_7] [i_6] [i_6] [i_6])))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1818698283U)))) ? (max((((/* implicit */long long int) (signed char)115)), (-4732298760049189165LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_6)))) || ((!(((/* implicit */_Bool) (unsigned short)63))))))))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_8])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) % (((var_4) >> (((var_7) - (5608848111049311268LL)))))))) ? ((-(((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (signed char)-93))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_24 [i_8] [(unsigned char)2])), (var_4)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_5] [i_5] [i_5] [(short)13] [i_5])), (var_9)))) : (((/* implicit */int) ((unsigned char) arr_12 [i_5] [i_6] [i_7] [i_8] [5] [i_9]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

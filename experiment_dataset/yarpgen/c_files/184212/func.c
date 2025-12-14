/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184212
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? ((~(((/* implicit */int) (signed char)-33)))) : ((-(var_6))))));
                                var_11 = min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 3605198249U))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)511)) && (((/* implicit */_Bool) arr_4 [5U] [i_3] [i_4])))))))), (max((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_5 = 4; i_5 < 14; i_5 += 3) 
                {
                    var_12 = ((/* implicit */int) ((((long long int) ((signed char) var_2))) > (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43611)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [(signed char)14] [i_0])) : (((/* implicit */int) (unsigned short)23910))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_3)))))));
                    var_13 = ((/* implicit */long long int) (((((+(var_5))) % (((/* implicit */int) ((signed char) arr_16 [(signed char)5] [i_1] [i_0] [i_0]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_5 - 2] [(unsigned short)10])))))));
                }
                /* LoopNest 3 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_27 [i_8] [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)23)) ? (arr_14 [i_0 - 1] [i_1] [(short)12]) : (arr_14 [0ULL] [i_1 + 1] [(short)6])))));
                                arr_28 [0ULL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned short)23910)))))) | ((((-(((/* implicit */int) (signed char)0)))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_25 [0U] [0U] [(signed char)12] [(signed char)12] [i_8])) : (((/* implicit */int) var_0)))) - (222)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_4))));
}

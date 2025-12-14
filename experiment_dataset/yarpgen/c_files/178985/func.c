/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178985
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [4])))))) ? (((/* implicit */int) arr_7 [i_2] [4ULL] [i_0 + 1])) : ((~(((/* implicit */int) var_13)))))))))));
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0 - 1] [(_Bool)1] [i_0 + 1])))) - (((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_1] [(short)6])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) (unsigned char)110);
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned char) arr_8 [i_1] [i_1] [i_2 - 2] [i_1]))))) && (((/* implicit */_Bool) (unsigned char)22)))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (2147483647)))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min(((+(arr_5 [i_2] [i_2] [i_2 - 2]))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_7 [i_4] [i_2] [i_2])))))))));
                                arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_4] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)32767))))));
                            }
                        } 
                    } 
                    arr_15 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((((/* implicit */int) (signed char)75)) + (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))) * (((/* implicit */int) ((_Bool) var_17)))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        for (short i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23963)) ? (902213950U) : (((/* implicit */unsigned int) -1810059607))))) * (((((/* implicit */_Bool) arr_21 [i_7] [i_5] [i_7])) ? (arr_21 [i_5] [(short)0] [i_5]) : (arr_21 [i_7] [i_5] [i_7]))))))));
                    var_26 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_5))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(signed char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_21 [i_6] [i_6 - 1] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_18 [i_6 + 2] [i_5]), (((/* implicit */short) (_Bool)1)))))) : (1309475488U)))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_6);
}

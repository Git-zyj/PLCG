/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13017
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
    var_10 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) 0LL))));
    var_11 -= (~((~(min((var_3), (((/* implicit */long long int) var_6)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_10 [i_3] [i_3] = var_9;
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) min((arr_11 [i_0] [i_0] [i_3] [i_3] [i_3]), (arr_11 [i_0] [i_0] [i_0] [i_3] [i_4]))))))) | (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_2 + 2])) ? (arr_12 [i_0 - 1] [i_2 - 1]) : (((/* implicit */long long int) 3880225119U))))));
                            var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (min((var_5), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_3] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [11U])))))))))));
                            var_13 = ((/* implicit */long long int) min((var_13), (((((((/* implicit */long long int) 3880225119U)) & (arr_9 [i_0] [i_0]))) ^ (((arr_9 [i_1 - 1] [i_2 + 1]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_14 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_7 [i_2])) ? (5544618507270856074LL) : (((long long int) arr_0 [i_3]))))));
                            var_15 = ((((16828509682466847536ULL) + (((/* implicit */unsigned long long int) ((long long int) -7219664123758593737LL))))) - (((/* implicit */unsigned long long int) var_1)));
                        }
                        var_16 = ((/* implicit */short) min(((~((~(arr_2 [i_0] [i_0] [i_3]))))), ((~(((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (var_2) : (((/* implicit */long long int) arr_13 [i_0 + 2] [i_0] [i_0]))))))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 414742177U)) & (((((/* implicit */long long int) var_9)) | (((var_7) | (var_3)))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((max((414742166U), (31U))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) & (384U))) - (360U)))))), (((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_5))) << (((arr_2 [i_0 + 2] [i_0 + 1] [i_0 - 1]) - (1765647330692468088LL)))))));
        var_18 = ((/* implicit */signed char) (+(min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))));
    }
    for (short i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (signed char i_7 = 3; i_7 < 9; i_7 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) min(((+(arr_7 [i_7 + 3]))), (arr_7 [i_5])));
                    var_20 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_5]))))), ((((!(((/* implicit */_Bool) 4294967253U)))) ? (arr_2 [i_5] [(signed char)13] [i_7]) : (((/* implicit */long long int) arr_17 [i_5])))));
                }
            } 
        } 
        arr_25 [i_5] [i_5] = ((/* implicit */short) min((var_3), (((/* implicit */long long int) arr_21 [i_5] [i_5 + 1]))));
    }
    for (short i_8 = 1; i_8 < 10; i_8 += 4) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned int) arr_23 [i_8 + 2] [2LL]);
        arr_30 [i_8] = ((/* implicit */unsigned int) ((short) ((long long int) ((((/* implicit */_Bool) arr_2 [i_8 - 1] [11U] [i_8])) ? (((/* implicit */long long int) arr_5 [i_8 + 2])) : (arr_9 [i_8 + 2] [i_8])))));
        arr_31 [i_8] [i_8] = (~(arr_12 [i_8] [i_8]));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118330
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
    var_20 = min(((~(-845446238046966072LL))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_14))))) == (((/* implicit */int) var_4))))));
    var_21 = ((/* implicit */unsigned int) var_6);
    var_22 = ((/* implicit */_Bool) (unsigned short)33461);
    var_23 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_12))));
                                arr_11 [i_4] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_1 + 2] [i_1] [(unsigned char)13] [i_3])), (arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3 + 1])))) ? (max((arr_2 [i_1 + 2]), (((/* implicit */long long int) var_11)))) : ((~(min((var_2), (((/* implicit */long long int) arr_6 [i_3 + 2] [i_3 + 2] [i_2] [i_3])))))));
                                arr_12 [i_0] [i_3 - 1] = ((long long int) ((((/* implicit */_Bool) -845446238046966072LL)) ? (var_6) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)87)), (-845446238046966072LL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [13U] [i_3] [13U] [i_0])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_10 [i_0 - 1]))))) || (((/* implicit */_Bool) ((unsigned char) (~(var_9)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (long long int i_7 = 4; i_7 < 21; i_7 += 2) 
                        {
                            {
                                arr_22 [i_6] = ((/* implicit */unsigned long long int) (unsigned short)1023);
                                var_25 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [(unsigned short)13] [i_0 - 2])) && (((/* implicit */_Bool) arr_0 [17LL] [i_0 - 1])))), ((!(((/* implicit */_Bool) var_18))))));
                                var_26 = ((/* implicit */unsigned char) var_19);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

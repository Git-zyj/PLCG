/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126128
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
    for (int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 |= (~(((((/* implicit */_Bool) 1731346996U)) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 2]))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) ^ (max((arr_5 [i_0 + 2]), (arr_5 [i_0 - 1])))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 4; i_4 < 19; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((1731346996U) * (arr_1 [i_4])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_9))))));
                                arr_14 [i_3 + 1] [i_0] [i_0] [(_Bool)1] [i_3] [i_3] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 134217727LL)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) 15640921787597166068ULL))))))) : (((/* implicit */int) (short)17719))));
                                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4028075186853015036LL))));
                                var_19 = ((/* implicit */unsigned short) (~(max(((-(arr_13 [i_4] [i_4]))), (((/* implicit */unsigned int) arr_8 [i_0 + 2] [i_1] [i_3]))))));
                            }
                            for (unsigned int i_5 = 3; i_5 < 19; i_5 += 1) 
                            {
                                var_20 = min((((/* implicit */unsigned long long int) arr_10 [i_5 - 2])), (((unsigned long long int) arr_18 [i_0 - 3] [i_3] [i_0] [i_5 - 1] [i_5 + 2])));
                                var_21 *= ((/* implicit */unsigned short) max((((unsigned int) arr_12 [i_0 + 4] [i_3 - 1] [i_5 - 3])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)62)))))));
                                var_22 *= ((/* implicit */unsigned char) ((signed char) min((((arr_12 [i_0] [i_1] [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)5]))))), ((!(((/* implicit */_Bool) var_11)))))));
                            }
                            for (unsigned int i_6 = 2; i_6 < 19; i_6 += 1) 
                            {
                                arr_21 [i_0] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_0 - 2])), (3006877451080339529LL)))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_6)) & (((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))))))))));
                                arr_22 [i_0] = ((/* implicit */int) var_12);
                            }
                            arr_23 [i_0] [i_0] [i_2] [i_3 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_23 = ((/* implicit */signed char) (((+(arr_1 [i_1]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0 + 4] [i_1] [13LL])) : (((/* implicit */int) var_3)))))));
                    var_24 = ((/* implicit */unsigned char) (~(arr_13 [i_0] [i_0])));
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) 1162561829U));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_2))));
    var_26 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_9));
    var_27 = ((/* implicit */_Bool) ((long long int) var_0));
}

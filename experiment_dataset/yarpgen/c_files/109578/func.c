/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109578
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
    var_13 = ((/* implicit */signed char) ((int) (+((((_Bool)1) ? (var_2) : (4294967274U))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */unsigned int) ((max((((/* implicit */int) (_Bool)1)), (arr_2 [i_0] [i_1] [i_0]))) + ((-(((/* implicit */int) (signed char)-16))))))) <= ((~(min((((/* implicit */unsigned int) var_9)), (arr_4 [i_2]))))))))));
                            var_15 = ((/* implicit */short) arr_2 [i_0] [i_1] [i_2]);
                            var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */_Bool) (~((+(0ULL)))))) ? (((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) : (arr_5 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) ((arr_4 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    arr_12 [16LL] [i_4] [i_4] [i_0] = var_1;
                    arr_13 [i_4] [(short)5] [i_4] = ((/* implicit */int) (((~(((unsigned long long int) 7)))) * (((max((18446743936270598144ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_4])))) % (max((((/* implicit */unsigned long long int) (_Bool)1)), (10192747753658041909ULL)))))));
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_4])))) ? ((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_4] [i_4])))) : (((/* implicit */int) max((arr_9 [i_0] [i_1] [i_1] [i_1]), (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) arr_16 [i_0] [i_1] [i_4] [i_5] [i_6])), (-2114881785164110825LL)))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -753390730)) ? (-1568111309) : (((/* implicit */int) (short)-23529)))), ((-(1476075465))))))));
                            }
                        } 
                    } 
                }
                arr_20 [(short)11] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-4439))))) ? (min((max((576443160117379072ULL), (((/* implicit */unsigned long long int) 2217945440U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13)) ? (836170761U) : (((/* implicit */unsigned int) arr_2 [i_1] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0]) / (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_0]))))) : (arr_18 [i_0] [i_1] [i_1] [i_0] [10LL] [i_1])))));
                var_20 += ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [14LL] [i_1])))) ? (min((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_1])), (arr_15 [i_0] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65525))))))))));
                arr_21 [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)0)))) | ((~(arr_15 [i_0] [i_0] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) 2431924008U);
}

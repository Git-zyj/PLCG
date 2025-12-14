/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172799
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0 + 2])), (arr_4 [i_0 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0 + 2]) < (var_0))))) : ((+(arr_1 [i_0 + 2]))));
                    var_12 = ((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [6ULL])) ? (((/* implicit */unsigned long long int) var_9)) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))) : (arr_0 [i_1])))) ? (min((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_4 + 2]))) : (-1468854299238786569LL))), ((~(arr_4 [0LL]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189)))));
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [8LL] [i_0])) : (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_2] [i_3]))))))))) >= (var_0)));
                                var_15 ^= ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)9)), (max((((/* implicit */unsigned short) (unsigned char)179)), (arr_9 [i_0] [i_1] [i_0] [i_2])))))) / (min((-1332049187), (((/* implicit */int) (unsigned char)123))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 12; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_5 - 1] [i_6] = ((/* implicit */unsigned short) 1332049186);
                                var_16 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2937076456295213473LL)))))) <= (-1LL)))), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) min((arr_8 [6U] [i_2] [i_2] [i_2]), (((/* implicit */long long int) var_4)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) var_1);
    var_18 = ((unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))), ((+(var_0)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166126
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
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (max((((((/* implicit */_Bool) -311222156)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 936048188)))), (arr_3 [i_0 + 1] [i_0 - 2])))));
                arr_7 [i_0] [0ULL] [11U] = ((/* implicit */int) max((min((arr_5 [i_0 + 1] [i_0 - 2]), (arr_5 [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-24)), ((short)0))))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) -841738197)), (-2321474914878060750LL)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2]))))) : ((~(max((arr_1 [i_0]), (((/* implicit */long long int) arr_4 [i_0 - 1] [i_1])))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    arr_14 [i_3] = ((/* implicit */long long int) ((((arr_9 [i_2 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26))))) | ((~(arr_9 [i_2 - 1])))));
                    var_14 += ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 414542161763530563ULL))))), (((arr_10 [2ULL] [i_3 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
                    var_15 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) % (max((28ULL), (((/* implicit */unsigned long long int) (short)-24)))))) > (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)119)) & (((/* implicit */int) arr_11 [i_3])))) - (((/* implicit */int) arr_12 [(signed char)20] [(signed char)20])))))));
                    var_16 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)27), (((/* implicit */short) arr_13 [(short)6] [i_3])))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_11 [i_2 - 2]), (((/* implicit */short) (_Bool)1)))))) * (((8ULL) ^ (((/* implicit */unsigned long long int) arr_9 [i_2])))))));
                }
            } 
        } 
    } 
}

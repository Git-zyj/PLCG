/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106754
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
    var_10 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((int) ((unsigned long long int) 9305931191098966601ULL)))), (min((((((/* implicit */unsigned long long int) var_6)) + (9305931191098966601ULL))), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)0)), (897192875U)));
        arr_3 [11U] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) ((_Bool) var_8))) - (((/* implicit */int) min((arr_1 [i_0 + 2] [i_0 + 2]), (arr_1 [19ULL] [19ULL])))))));
    }
    var_11 = ((/* implicit */unsigned char) ((((long long int) min(((unsigned short)15529), (((/* implicit */unsigned short) (_Bool)0))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) || (((/* implicit */_Bool) min((0ULL), (24ULL))))))))));
    var_12 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned short)7382)))))) < (((14184473336615273058ULL) >> (((((/* implicit */int) var_1)) - (13985))))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((unsigned long long int) arr_7 [i_2] [i_3] [i_4])) < (min((arr_10 [i_1] [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_3 + 1] [i_4]))))))), (min((((/* implicit */unsigned char) ((_Bool) (short)32767))), (((unsigned char) arr_10 [9ULL] [(_Bool)1] [(_Bool)1])))))))));
                            arr_14 [i_4] [i_3 + 1] = ((/* implicit */long long int) ((((long long int) ((((/* implicit */int) (unsigned short)15512)) & (((/* implicit */int) (signed char)34))))) == (((/* implicit */long long int) ((int) min((arr_10 [i_3 + 2] [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((457800876U) >> (((2147483640) - (2147483611))))), (((/* implicit */unsigned int) min((arr_9 [i_1] [12]), (((/* implicit */unsigned char) (_Bool)0)))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)11218))))) - (min((arr_6 [i_1] [i_2]), (((/* implicit */unsigned long long int) var_1))))))));
                var_15 = ((/* implicit */short) ((_Bool) min((((signed char) arr_8 [(signed char)20] [i_2] [i_2])), (((/* implicit */signed char) ((((/* implicit */_Bool) 3847988983610464162ULL)) && (arr_1 [i_1] [i_1])))))));
                var_16 = min(((unsigned short)61094), ((unsigned short)15511));
            }
        } 
    } 
}

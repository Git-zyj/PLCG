/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180305
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [(unsigned char)20] [i_0] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_3 + 1] [i_1])), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (63ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_5)))) ? (max((var_10), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2504947939U)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (short)-19365))))))))));
                                var_12 &= ((/* implicit */long long int) (((~(max((-1LL), (((/* implicit */long long int) arr_6 [(signed char)17] [i_1] [i_1] [(signed char)12])))))) != (((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) 8191U)))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((9223372036854775807LL) / (((/* implicit */long long int) 8178U))))), ((~(arr_5 [i_0] [i_1])))));
                var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)32752)), (arr_5 [i_0] [i_1])));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_13 [i_0] [i_5 + 1] [i_1] [3LL] [i_5 + 1])), (arr_7 [i_1] [i_5 + 1] [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_1] [i_5 + 1] [i_1] [i_1] [(short)4])))))));
                            var_15 ^= ((/* implicit */long long int) arr_6 [i_5] [i_0] [i_0] [i_5 + 1]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) max(((-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_8 [i_1])))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 8191U)) ? (arr_10 [i_0] [i_1] [i_0] [(unsigned char)12] [i_1]) : (((/* implicit */long long int) 4294959089U))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((((var_5) << (((((/* implicit */int) var_0)) - (179))))) << ((((+(8191U))) - (8129U))))) < (((/* implicit */unsigned long long int) var_10))));
}

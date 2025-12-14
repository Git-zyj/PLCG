/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135439
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((0) / (((/* implicit */int) (short)-11439)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [(short)20] [(short)0] [i_1]))))))))) - (max((((/* implicit */long long int) arr_4 [(unsigned short)20])), (((-1LL) / (((/* implicit */long long int) -3)))))))))));
                var_20 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_1 [(unsigned char)8])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)-32751)) ? (max((((/* implicit */unsigned long long int) 681451308U)), (5ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-22516))))))))));
                            arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((max((arr_2 [i_1] [i_2 + 1] [i_1]), (arr_2 [i_1] [i_2 + 1] [i_1]))), (arr_2 [i_1] [i_2 - 3] [i_1])));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)-13413)) | (arr_8 [i_1] [i_1] [(short)4] [i_0 + 4])))))), (((((/* implicit */_Bool) arr_2 [i_1] [(short)10] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22525))) ^ (0LL)))) : ((-(5319864900019143584ULL)))))));
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)-22525);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22532))) == (5319864900019143602ULL)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
}

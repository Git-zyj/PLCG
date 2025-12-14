/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177817
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_1] [i_0]);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (916364330)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_2]))) : (((((/* implicit */long long int) -916364330)) / (16376LL)))))) ? (9952310465355977469ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (12902688070015040345ULL) : (((/* implicit */unsigned long long int) -3158211412764459277LL)))))))))));
                }
            } 
        } 
        var_14 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3870))) / (12902688070015040345ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((+(((/* implicit */int) arr_5 [(short)8] [i_4] [(short)8])))) / ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_9 [i_3]))))))))))));
                arr_15 [i_4] = ((/* implicit */long long int) max((min(((short)17633), (((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_3] [i_4]))))))), (((/* implicit */short) var_7))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172339
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_7)) : (var_3))), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) var_18)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) max(((unsigned short)4), (((/* implicit */unsigned short) (_Bool)1))));
        arr_3 [i_0] = max((((/* implicit */long long int) (unsigned short)57904)), ((-((-(arr_1 [i_0 + 2]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            {
                var_21 ^= ((/* implicit */short) arr_8 [i_1 - 1] [i_2] [i_2]);
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 18; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            arr_13 [i_1] [i_2] [3U] [3U] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(arr_6 [i_1])))) >= (max((((/* implicit */long long int) ((((/* implicit */_Bool) 174633137996625950ULL)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)128))))), (((long long int) arr_5 [i_1]))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)127), (arr_8 [i_1] [i_3] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) || ((!(((/* implicit */_Bool) 3455901152275150625ULL)))))))) : ((((+(arr_7 [i_3] [i_2] [i_1]))) / (((/* implicit */long long int) ((/* implicit */int) (short)-6524)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

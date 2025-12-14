/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178794
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
    var_20 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) 6353228111869363488LL);
                    arr_8 [i_0] [(signed char)1] = ((((/* implicit */long long int) 1278117903U)) & (-2368720093355711830LL));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) var_17);
                        var_22 = ((/* implicit */long long int) 2249484511U);
                        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((6353228111869363493LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (-8184117133004856303LL)))) ? (((long long int) 0U)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((8184117133004856318LL), (-6353228111869363512LL))))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((8184117133004856280LL), (((/* implicit */long long int) (unsigned short)19154))))) ? (max((((var_6) ^ (arr_14 [3] [i_4] [i_2] [i_4] [i_4] [i_2]))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [7ULL])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_12 [i_4] [i_1] [i_1])))) ? (max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (signed char)-2)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1261))))))));
                        var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [(unsigned short)10]) | (((/* implicit */long long int) ((/* implicit */int) max(((short)-2289), (((/* implicit */short) (signed char)47))))))))), (5382433095330661679ULL)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            arr_18 [i_5] [i_4] [i_2] [(short)1] [i_0] = ((/* implicit */unsigned int) (+(arr_17 [i_1] [i_0 + 1] [i_0] [i_0 + 1] [i_0])));
                            arr_19 [i_4] [18U] [18U] [i_4] [i_1] [i_0] = ((/* implicit */signed char) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]);
                        }
                        arr_20 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                        arr_21 [i_4] = ((/* implicit */unsigned int) ((short) 8184117133004856334LL));
                    }
                }
            } 
        } 
    } 
}

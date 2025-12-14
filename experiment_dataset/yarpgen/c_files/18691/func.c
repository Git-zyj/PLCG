/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18691
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
    var_18 = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) (_Bool)0)))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((long long int) 12251192460204796096ULL))), (12251192460204796072ULL))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) arr_2 [i_2] [i_1] [i_0]);
                            arr_10 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)43))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_3 [11LL] [11LL] [(signed char)3]) : (((/* implicit */unsigned long long int) arr_0 [i_2] [4U])))) : (((/* implicit */unsigned long long int) (~(arr_0 [7] [10])))))) | (((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned char)5] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_21 = min((8563476082879340271LL), (2270454459250827978LL));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1952183660U))));
}

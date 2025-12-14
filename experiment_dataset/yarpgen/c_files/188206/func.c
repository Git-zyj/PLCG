/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188206
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((int) var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9ULL)) ? (-4034195331500299903LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_6 [i_1] |= ((((/* implicit */int) var_0)) == (arr_3 [i_0] [i_0]));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) min((((int) 1023U)), (((/* implicit */int) var_3))));
        var_20 *= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_2] [i_2]))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((signed char) ((var_17) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [12U])) ? (arr_3 [(signed char)2] [i_2]) : (arr_1 [i_2] [i_2]))))))))));
        var_22 *= ((/* implicit */_Bool) ((int) ((-4034195331500299903LL) / (((/* implicit */long long int) 7)))));
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
    {
        var_23 -= ((/* implicit */_Bool) min((max((0ULL), (((/* implicit */unsigned long long int) 152211617U)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_3] [6U])))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) (signed char)-22);
    }
}

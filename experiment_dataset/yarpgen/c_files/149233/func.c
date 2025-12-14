/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149233
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) max((arr_3 [i_1 + 3] [i_1 - 1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65024)))))));
                    var_16 = ((/* implicit */long long int) max((max(((-(((/* implicit */int) (short)8514)))), (((/* implicit */int) (short)21362)))), (((((/* implicit */_Bool) max((arr_7 [i_2] [i_2] [i_1 + 1] [i_0]), (((/* implicit */unsigned long long int) (short)-8529))))) ? ((-(((/* implicit */int) (short)8514)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8514))) == (arr_3 [i_2] [(unsigned char)7]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            {
                var_17 -= ((/* implicit */unsigned short) (!(((((arr_12 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_3])) >> (((2646102856238952904ULL) - (2646102856238952882ULL))))))))));
                arr_16 [i_3 - 1] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (short)10936)), (2191266784971895014LL)))))) || (((/* implicit */_Bool) max((((arr_13 [7ULL]) ^ (arr_10 [3LL]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_14 [i_3])), (arr_9 [i_3]))))))))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) arr_10 [i_3])) ? (-1153783017) : (((/* implicit */int) arr_14 [i_3])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65024))) == (arr_9 [i_3])))))))))));
            }
        } 
    } 
}

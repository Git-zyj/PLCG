/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171198
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
    var_11 ^= ((/* implicit */short) ((((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_10))))) + (((((/* implicit */int) var_5)) - (((/* implicit */int) var_8)))))) + (((1376056048) - (1245429242)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65515)) ? (-1245429234) : (((/* implicit */int) arr_0 [i_0] [i_0])))) | (min((-1), (((/* implicit */int) arr_0 [i_0] [i_0]))))))))))));
        var_13 &= ((/* implicit */_Bool) var_6);
        var_14 = ((/* implicit */short) max((-2473897128167657439LL), (((/* implicit */long long int) 1245429257))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            {
                var_15 = ((/* implicit */short) arr_6 [i_1] [i_2] [i_1]);
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned long long int) arr_7 [i_1 + 1] [i_2])))));
            }
        } 
    } 
}

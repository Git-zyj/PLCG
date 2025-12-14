/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101626
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
    var_11 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_6))))) ? (461053319431174992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (461053319431174992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_1 - 1] = ((/* implicit */long long int) 461053319431174992ULL);
            var_13 = ((/* implicit */unsigned char) 17985690754278376623ULL);
            var_14 = ((/* implicit */unsigned char) (!((!((_Bool)1)))));
        }
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (signed char i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */short) arr_2 [i_0] [i_0]);
                        var_16 = (+(arr_2 [i_2 - 2] [i_2 - 1]));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0])) + (arr_14 [i_0] [i_0] [i_0])));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)255))) ? ((~(arr_9 [13]))) : (((/* implicit */long long int) -1529121539)))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100742
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (short)28669)))));
        var_18 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))), (-4869573654935945666LL)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) 807913362U))));
            arr_4 [i_0] [(unsigned short)5] [10U] = ((/* implicit */unsigned int) (-(min((-4869573654935945666LL), (((/* implicit */long long int) (signed char)67))))));
        }
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_20 = ((unsigned char) 804529969);
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 612468070U))));
                        var_22 = arr_9 [i_0] [i_2] [(unsigned char)2] [i_4];
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_10))))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_0))))) : (438381894)));
}

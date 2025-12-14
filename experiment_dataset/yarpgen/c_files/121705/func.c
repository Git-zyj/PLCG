/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121705
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
    /* vectorizable */
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) (((-(var_6))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_2)))))));
                        arr_12 [(unsigned short)9] [i_1] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(3387343565595959072ULL)))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_5)) - (29308))))))));
                    }
                } 
            } 
        } 
        var_10 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) <= (((/* implicit */int) var_5))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 7; i_4 += 1) 
        {
            var_11 = ((/* implicit */unsigned int) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
            arr_16 [i_0] [i_0] = ((/* implicit */long long int) var_6);
        }
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) < (var_8))))) < ((~(var_8)))));
    }
    var_13 ^= (~(((/* implicit */int) var_5)));
}

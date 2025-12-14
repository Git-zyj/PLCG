/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174566
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_10 += ((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1]);
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 8; i_3 += 4) 
                {
                    {
                        arr_15 [i_0 - 1] [10U] [7ULL] [i_3 + 3] [i_3 - 1] = ((signed char) (signed char)31);
                        arr_16 [i_0] [i_0] [i_0] [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2])))))) <= (arr_7 [i_0] [i_1 - 1] [i_1 - 1])))), ((+(((arr_11 [(unsigned char)9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_11 = ((/* implicit */short) var_9);
                            var_12 = ((/* implicit */signed char) arr_8 [6] [i_1]);
                            var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                    }
                } 
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned int) arr_8 [2U] [i_0]);
    }
    var_14 = ((/* implicit */unsigned int) min((var_14), (var_4)));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((int) (_Bool)1))) < (137438953471LL)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) min((137438953471LL), (((/* implicit */long long int) (unsigned short)17784))))))))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (var_4)));
}

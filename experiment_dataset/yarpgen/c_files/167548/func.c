/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167548
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) 15967109766001983595ULL);
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            var_10 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (760179370821506832ULL)));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_11 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((min((((/* implicit */int) var_0)), (-2021265285))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 2]))))))))));
                        var_13 = ((/* implicit */long long int) max((var_13), (min((((/* implicit */long long int) ((_Bool) var_9))), (((((/* implicit */long long int) min((var_3), (((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)0]))))) - (((-4410519556512626735LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))))))))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_5))));
                    }
                } 
            } 
        }
    }
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_16 = (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_13 [i_4]))))))));
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4]))));
        var_18 = ((/* implicit */_Bool) min((var_18), ((_Bool)0)));
        arr_16 [5U] [i_4] = ((/* implicit */unsigned char) arr_4 [i_4] [(signed char)4] [i_4]);
        var_19 = ((/* implicit */short) min((((/* implicit */long long int) max((arr_15 [i_4]), (arr_15 [i_4])))), (((18014398509481983LL) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4])))))));
    }
}

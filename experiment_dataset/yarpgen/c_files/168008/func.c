/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168008
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_9 [i_0] [i_1] [i_2 - 1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) arr_1 [i_1] [(short)9]);
                    }
                } 
            } 
            arr_10 [i_0] [i_0] [i_1] = (_Bool)1;
            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1]))) / (arr_0 [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_8)));
            arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) arr_7 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]));
        }
        var_13 ^= ((/* implicit */unsigned short) (!((((-(((/* implicit */int) var_2)))) >= (((/* implicit */int) ((short) 0U)))))));
    }
    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 4) 
    {
        arr_14 [i_4 - 2] = ((/* implicit */_Bool) min(((short)15360), (((/* implicit */short) (!(((/* implicit */_Bool) min((arr_12 [i_4 - 1]), (((/* implicit */unsigned long long int) (signed char)13))))))))));
        var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)183)) ? ((~(((/* implicit */int) (unsigned short)45393)))) : (((/* implicit */int) ((unsigned char) 16720122317772807918ULL))))), ((+((-(((/* implicit */int) arr_13 [i_4]))))))));
    }
    var_15 = ((/* implicit */unsigned int) (-(0)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170133
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
    var_19 = ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) arr_2 [(unsigned short)6] [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                arr_9 [i_1] [i_1] = ((/* implicit */signed char) arr_7 [(unsigned short)19] [i_1] [i_1] [i_2]);
            }
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_1 - 1] [i_1] [i_1] [16LL] [i_1] = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0]);
                            arr_18 [i_1] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [16ULL] [i_4] [16ULL]);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */int) arr_5 [i_1 - 1]);
        }
        for (short i_6 = 4; i_6 < 19; i_6 += 3) 
        {
            var_24 = arr_14 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_6 - 2] [i_6];
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0]);
            var_25 -= (-(((/* implicit */int) arr_6 [i_0])));
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 16; i_8 += 1) 
                {
                    {
                        arr_27 [i_6] [14LL] [i_7] [14LL] [i_8 + 4] [i_8] &= ((/* implicit */signed char) arr_3 [i_8]);
                        arr_28 [i_6 - 2] [i_6 - 2] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0]);
                        var_26 = arr_24 [i_0] [i_0] [i_0] [i_0];
                        var_27 = ((/* implicit */unsigned char) arr_19 [i_6 - 2] [i_7 - 1] [i_8 + 1]);
                    }
                } 
            } 
        }
        var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : ((-(var_3))))))));
}

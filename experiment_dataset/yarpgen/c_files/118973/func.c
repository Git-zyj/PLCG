/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118973
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
    var_10 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */signed char) var_0);
                        arr_10 [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) ((arr_5 [(_Bool)1] [i_2 - 1] [i_1] [i_0 - 1]) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1))))));
                        var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) (signed char)-102))))) || (((/* implicit */_Bool) (unsigned char)37))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_13 |= ((/* implicit */signed char) (unsigned char)22);
                        arr_19 [(unsigned short)6] [i_4] [(unsigned short)6] [i_0] = ((/* implicit */int) arr_15 [i_0] [i_5] [i_0] [i_6]);
                        arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) (+(var_4)));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 3; i_7 < 21; i_7 += 3) 
                        {
                            var_14 = ((((/* implicit */int) arr_18 [i_6] [i_4] [i_4] [i_0] [i_7 - 1])) + (((/* implicit */int) arr_18 [i_0] [i_0] [i_5] [i_0] [i_7 - 1])));
                            var_15 = (+(var_0));
                        }
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_16 -= ((/* implicit */unsigned int) var_6);
                            arr_26 [i_0 - 1] [i_4] [i_5] [i_4] [i_4] [i_0] [i_8] = ((/* implicit */signed char) arr_22 [i_0]);
                        }
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (_Bool)1)), (-9223372036854775794LL))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)234)), (var_2)))))));
}

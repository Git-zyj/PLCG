/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117347
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (unsigned char)1);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_18 = arr_0 [i_0];
                            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (((/* implicit */int) (_Bool)1))))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) arr_4 [i_3] [i_0 + 1] [i_0 + 1])))) : (((((/* implicit */int) arr_4 [i_2] [i_0 + 1] [i_0])) + (((/* implicit */int) arr_4 [i_3] [i_0 - 1] [i_0])))))))));
                            var_21 = ((short) arr_4 [i_0] [(unsigned short)16] [i_0 - 1]);
                        }
                    } 
                } 
                var_22 |= ((/* implicit */_Bool) (-(((/* implicit */int) min((((unsigned char) (unsigned char)255)), (((unsigned char) var_9)))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((unsigned short) (~(((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_24 ^= ((/* implicit */unsigned short) ((unsigned char) max((arr_7 [i_0 + 1] [(unsigned char)5] [i_4 - 1]), ((short)-4096))));
                                var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (((_Bool)1) && ((_Bool)1))))))) ? (max(((+(((/* implicit */int) arr_0 [(unsigned char)10])))), (((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_0 + 1] [i_5])))) : (((/* implicit */int) max((((/* implicit */unsigned short) max((arr_14 [i_0] [(unsigned short)5] [i_4] [(unsigned short)5] [i_4]), ((unsigned char)13)))), (max((((/* implicit */unsigned short) (_Bool)1)), (arr_12 [i_0 + 1] [i_4] [i_5] [i_0 + 1]))))))));
                                var_26 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_15 [i_5] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4 + 2] [i_4 + 1] [i_4])) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_15))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_27 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_7 [(short)4] [i_1] [i_7 - 1]))))))))) ^ (max((((/* implicit */long long int) (_Bool)1)), (max((var_10), (((/* implicit */long long int) arr_9 [i_0] [i_1]))))))));
                            var_28 = ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) ((short) (short)20608))) : (((/* implicit */int) (short)-28659))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) var_5);
}

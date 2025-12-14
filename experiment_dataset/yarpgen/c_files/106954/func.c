/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106954
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
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
    var_13 = ((/* implicit */_Bool) ((var_5) << (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)132))));
        arr_3 [(unsigned char)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0]))));
    }
    for (short i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) ((((_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)157))))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) arr_4 [i_1 + 2]);
        arr_8 [i_1] = ((/* implicit */_Bool) var_1);
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) var_8);
                    var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */short) (unsigned char)222)), (var_8)))), (((((/* implicit */int) arr_14 [i_2] [i_3 + 1] [i_4] [i_2])) ^ (((/* implicit */int) (unsigned char)250))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned char) var_1);
                                arr_23 [i_2] [(_Bool)0] [i_2] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)222))));
                                var_18 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)156)))) / (((/* implicit */int) arr_16 [i_6] [i_6] [i_3 + 1])))));
                                arr_24 [i_2] [i_3 + 1] [i_4] [i_6] = ((_Bool) (short)-1338);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) var_3);
                    var_20 = ((/* implicit */unsigned char) ((((_Bool) var_11)) && (((/* implicit */_Bool) var_11))));
                }
            } 
        } 
        arr_25 [i_2] [i_2] = ((/* implicit */unsigned char) var_11);
        arr_26 [i_2] = (((-(((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_4))))))) > (((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_0))))) : (((/* implicit */int) (unsigned char)167)))));
    }
    var_21 += ((/* implicit */short) var_9);
}

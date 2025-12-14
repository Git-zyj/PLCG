/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180594
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_18 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_6)) - (40)))))) ? (((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned char)233)) | (((/* implicit */int) (unsigned char)176)))))) - (((/* implicit */int) var_11))));
                            arr_9 [i_3] [(unsigned char)2] [i_2] [(unsigned char)2] [i_0] |= ((/* implicit */unsigned char) var_5);
                        }
                    } 
                } 
                arr_10 [i_0 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
                arr_11 [(unsigned char)3] [i_0] = ((/* implicit */_Bool) (((-(((((/* implicit */int) var_0)) * (((/* implicit */int) var_1)))))) + (((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 3; i_4 < 14; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6 + 2] [i_5] [i_4] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) (((+((+(((/* implicit */int) var_13)))))) != ((~(((((/* implicit */int) var_13)) & (((/* implicit */int) var_8))))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_3))));
                                arr_20 [i_4] [i_4] [(_Bool)1] [i_4] [(unsigned char)9] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_10)))) - (((/* implicit */int) var_13))));
                                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) var_1);
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (unsigned char)76))))))) ? ((+(((((/* implicit */int) var_2)) / (((/* implicit */int) var_8)))))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) var_9)))))))));
                        arr_23 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) var_5);
                    }
                    for (unsigned char i_8 = 2; i_8 < 13; i_8 += 2) 
                    {
                        var_24 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (var_13)));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) * (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) var_9)))) : (((var_2) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_17)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))));
                    }
                    for (unsigned char i_10 = 3; i_10 < 14; i_10 += 3) 
                    {
                        arr_34 [i_4] [i_4] [(_Bool)1] [i_4] = var_7;
                        var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    }
                    var_29 = ((/* implicit */unsigned char) var_17);
                }
            }
        } 
    } 
    var_30 = var_5;
    var_31 = var_8;
    var_32 = var_4;
}

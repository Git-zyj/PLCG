/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147107
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
    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)56))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(var_7)))) != (((/* implicit */int) (!(var_8)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_5))))))));
        var_12 = var_5;
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
            var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((var_4) && ((_Bool)1)))) != (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_15 [(unsigned short)14] [(unsigned short)14] [i_3] [i_3] = ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) * ((((-(((/* implicit */int) var_5)))) * (((/* implicit */int) var_10))))));
                        arr_16 [i_3] [i_3] [i_3 - 1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) (((((((_Bool)1) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (signed char)-77)))) + (((/* implicit */int) (signed char)-124)))) != ((+(((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))));
                        arr_17 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_1))));
                        arr_18 [i_3] = var_7;
                        arr_19 [i_3] [i_3] = (!((_Bool)1));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_14 = (!((_Bool)1));
                        arr_22 [i_0] [i_0] [(_Bool)1] [i_3] = (unsigned short)56477;
                        arr_23 [i_0] [(unsigned short)17] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        arr_26 [i_0] [i_0] [i_2] [i_3] [i_3] [i_6] = ((/* implicit */signed char) var_3);
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_15 = var_4;
                            arr_30 [i_0] [(signed char)5] [i_3] [(unsigned short)17] = ((/* implicit */signed char) (!((((-(((/* implicit */int) var_7)))) >= (((/* implicit */int) var_10))))));
                        }
                        var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                        arr_31 [i_0] [i_0] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_8))))))) ? (((/* implicit */int) (unsigned short)15360)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)42713)) != (((/* implicit */int) (unsigned short)50367)))))))));
                        arr_32 [i_6] [i_3 - 1] [i_3] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((var_0) ? (((/* implicit */int) (unsigned short)9047)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
    }
}

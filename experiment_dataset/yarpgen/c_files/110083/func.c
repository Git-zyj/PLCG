/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110083
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
    var_18 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58984)))))))));
    var_19 += (_Bool)0;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) != ((+(((((/* implicit */int) (unsigned short)1)) / (((/* implicit */int) (_Bool)1))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((min((((/* implicit */int) min(((_Bool)1), (var_16)))), (((((/* implicit */int) (unsigned short)58982)) * (((/* implicit */int) (_Bool)0)))))) < (((/* implicit */int) (((+(((/* implicit */int) var_12)))) > (((var_13) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (!((_Bool)1))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)50786))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_0)))) * ((+(((/* implicit */int) var_15))))))) ? (max((((var_14) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_14)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (min((var_12), (((/* implicit */unsigned short) var_3)))))))));
                                var_21 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                var_22 = ((/* implicit */_Bool) max(((unsigned short)6550), (((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) var_11))))))));
                            }
                            var_23 = ((/* implicit */unsigned short) ((min(((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))) <= (((/* implicit */int) min((((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) var_1)))), (var_9))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))))) % (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_25 -= var_4;
                arr_16 [i_0] = (unsigned short)0;
            }
        } 
    } 
    var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)63106)) ^ (((/* implicit */int) (unsigned short)9)))), ((-(((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3586)))) ^ (((var_14) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))))) : (((((((/* implicit */_Bool) (unsigned short)4088)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */int) var_14)) | (((/* implicit */int) (_Bool)1))))))));
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((var_17) ? (((/* implicit */int) (unsigned short)39142)) : (((/* implicit */int) var_6)))) : (((var_15) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) == (((var_9) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_10)))))))));
}

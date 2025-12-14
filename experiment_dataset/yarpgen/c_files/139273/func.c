/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139273
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [(short)22] [i_0] [(short)22] = ((/* implicit */unsigned int) var_9);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [2] [i_1] [(_Bool)0] [i_3] |= ((/* implicit */signed char) ((((/* implicit */int) ((arr_5 [i_2 - 3]) >= (((/* implicit */long long int) ((/* implicit */int) var_18)))))) / (((/* implicit */int) ((short) (short)18025)))));
                        arr_13 [i_0] [i_0] [(unsigned char)19] [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((short) arr_2 [i_0] [i_2 + 1] [i_3]));
                        arr_14 [i_0] [i_1] [(unsigned short)22] [i_3] = ((/* implicit */short) min((2785427342295852778LL), (((/* implicit */long long int) (_Bool)1))));
                        arr_15 [i_3] [i_3] [i_2] [(_Bool)1] = (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [(signed char)4]) - (((/* implicit */long long int) arr_8 [i_2 - 2] [i_1 - 1] [i_1 - 1]))))));
                        arr_16 [i_0] [i_1] [i_2] [(short)8] [i_3] = ((/* implicit */unsigned short) arr_4 [i_0] [9U] [i_0]);
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        arr_19 [i_0] [i_0] [i_2 - 2] [(short)19] = (!(((/* implicit */_Bool) min((((((/* implicit */int) var_14)) << (((((/* implicit */int) (signed char)-112)) + (125))))), ((~(((/* implicit */int) (_Bool)1))))))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)18490))));
                        arr_21 [i_0] [i_0] [i_4] = ((/* implicit */short) ((unsigned int) (signed char)72));
                    }
                    for (int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        arr_24 [(short)18] [i_1] [i_2] [i_5] |= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned short)32465))));
                        arr_25 [i_0] [i_0] [22U] [(_Bool)1] [i_0] [(short)7] = ((/* implicit */signed char) max((max((((/* implicit */short) arr_2 [i_2 - 2] [i_5 - 1] [i_5])), ((short)5611))), (((/* implicit */short) ((_Bool) arr_6 [i_0] [i_1] [i_1 - 1])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            arr_29 [i_0] [(short)5] [i_0] [i_5] [(_Bool)0] [(_Bool)1] = ((/* implicit */int) var_18);
                            arr_30 [(unsigned short)2] [(unsigned short)2] [i_2] [20] [i_2 - 3] [i_2 - 2] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_0] [12U] [12U] [i_0] [4U] [(unsigned char)12])) == (((/* implicit */int) ((502048884) >= (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_34 [i_0] [i_0] [i_1] [i_0] [i_0] [i_7] = ((/* implicit */int) 2372469942U);
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_2] [(unsigned short)13] [i_7] [i_2]))))) : (((((/* implicit */_Bool) 1235351638)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) 2499748699U);
    var_20 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? ((-(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_16)))))));
}

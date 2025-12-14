/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104379
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (((long long int) (_Bool)1))))) ? ((+(((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_4))))))));
    var_11 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))) : (4294967295U))));
            var_12 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_0 [i_0 + 3])))), (((/* implicit */int) arr_0 [i_0]))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (4480705027711990722LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232)))));
            var_14 *= ((unsigned char) var_7);
            /* LoopSeq 3 */
            for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                var_15 = ((/* implicit */long long int) var_8);
                arr_10 [i_3] [i_2] = ((/* implicit */unsigned char) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 2])))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0 - 1])) % (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                arr_14 [i_4] [i_2] [3LL] = ((/* implicit */short) var_8);
                arr_15 [i_2] [(unsigned char)11] = ((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_0 + 2] [i_4])) ? (((/* implicit */long long int) var_3)) : (4480705027711990701LL));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_17 = ((/* implicit */_Bool) -4480705027711990694LL);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned short i_7 = 1; i_7 < 9; i_7 += 4) 
                    {
                        {
                            arr_23 [i_5] [i_2] [i_2] [i_2] [(short)5] = ((/* implicit */_Bool) ((int) 5589462735355575728ULL));
                            var_18 = (+(3202863659476846455ULL));
                            arr_24 [i_5] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0 + 2] [i_7 + 2]))));
                            arr_25 [(short)8] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) + (-4480705027711990715LL)))) ? (((/* implicit */long long int) (~(arr_8 [i_2] [i_5] [i_7 + 3])))) : (-4097108792719848720LL)));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            arr_28 [(short)11] [i_8] = ((/* implicit */long long int) var_6);
            var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_0)) << (((((/* implicit */int) (unsigned short)188)) - (185)))))));
            arr_29 [i_8] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)1))));
        }
        var_20 = ((/* implicit */_Bool) ((unsigned int) ((long long int) max((((/* implicit */short) (unsigned char)131)), (arr_27 [i_0] [i_0])))));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_8))));
}

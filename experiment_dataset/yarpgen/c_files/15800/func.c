/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15800
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_10 = ((/* implicit */int) ((unsigned short) arr_1 [i_0]));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned char)11])) / (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)33812))))))) && (((((/* implicit */long long int) 819383881)) != (6802477988374299198LL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_12 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))))) != (((/* implicit */int) ((short) (unsigned short)34509)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            var_13 = var_7;
            var_14 = ((/* implicit */unsigned int) (+(-1514804911)));
            var_15 = ((/* implicit */unsigned short) -2856277479181544694LL);
            var_16 = ((/* implicit */unsigned int) var_5);
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_17 = ((/* implicit */long long int) 819383874);
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_2])))));
            }
            for (long long int i_4 = 3; i_4 < 16; i_4 += 2) 
            {
                var_19 = ((/* implicit */signed char) (short)-11104);
                var_20 &= ((/* implicit */long long int) var_4);
                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(819383877)))) != (((unsigned int) arr_11 [i_1] [i_2] [i_4 + 2] [i_4 - 1]))));
            }
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) -819383870)) && (((/* implicit */_Bool) arr_3 [i_2] [i_1])))))));
                var_23 = ((/* implicit */unsigned short) arr_1 [i_1]);
                var_24 += ((/* implicit */int) ((short) -2673274595794125738LL));
                var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -7858341791537727261LL)) ? (-819383852) : (((/* implicit */int) (short)-1024))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7858341791537727264LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1716877251U)));
            var_27 = ((/* implicit */unsigned char) 9U);
            var_28 = ((/* implicit */unsigned long long int) var_2);
        }
    }
    var_29 = ((/* implicit */unsigned int) max((((((var_5) && (((/* implicit */_Bool) 2387799533538007820LL)))) ? ((~(14297497249065890150ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) var_6))));
    var_30 = ((/* implicit */_Bool) var_2);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166862
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
    var_13 = ((/* implicit */short) -2147483640);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            arr_7 [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [(unsigned short)8])) ? (((((/* implicit */_Bool) -1812483202)) ? (max((var_0), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((89511056) / (((/* implicit */int) arr_1 [i_1] [(unsigned short)0]))))))) : (((((/* implicit */_Bool) (~(arr_6 [i_0])))) ? (((7923998883848383414ULL) - (10522745189861168202ULL))) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
            var_14 = ((short) max((((/* implicit */unsigned long long int) ((int) (_Bool)0))), (((arr_4 [i_0]) << (((7923998883848383414ULL) - (7923998883848383372ULL)))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62588)) ? ((((_Bool)1) ? (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0])), (7393524189165513874ULL))) : (arr_3 [i_0]))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 + 1] [i_1 - 1] [i_2] [i_0])) ? (var_8) : (10522745189861168201ULL)))));
                        var_15 = ((/* implicit */unsigned short) 8756948977362745490ULL);
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
        {
            var_16 -= ((/* implicit */unsigned long long int) (_Bool)0);
            var_17 += ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
            var_18 &= (~((~((~(((/* implicit */int) (_Bool)1)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_19 ^= arr_11 [(signed char)20];
            arr_22 [i_0] [i_0] = ((/* implicit */_Bool) (short)21587);
            arr_23 [(_Bool)1] [i_0] = ((/* implicit */int) var_10);
        }
        var_20 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1713926220U)) : (max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0 - 1])), (7393524189165513874ULL)))))) && ((_Bool)1));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_2) * (7923998883848383414ULL))) >> ((-(((/* implicit */int) (signed char)-1))))))) ? (((/* implicit */unsigned int) 914273902)) : (var_7)));
}

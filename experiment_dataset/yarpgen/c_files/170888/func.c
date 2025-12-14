/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170888
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(-9081952590079159750LL))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [8U] = ((/* implicit */short) min((((((/* implicit */int) arr_1 [i_0] [i_0])) << (((max((((/* implicit */int) (_Bool)1)), (var_7))) - (1555189342))))), ((~(((/* implicit */int) (short)14555))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) && (arr_3 [i_0]))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((int) (short)14555)))));
        arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_6))))))), ((~(((/* implicit */int) (short)14555))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_11 [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((1030500375) ^ (2130062357)))))) ? (((long long int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)60)) > (((/* implicit */int) (short)-3044))))))));
            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (-(var_0))))) ? (min(((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))), (((/* implicit */int) var_9)))) : (-2021622559)));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((((int) (~((-9223372036854775807LL - 1LL))))) + (((/* implicit */int) var_9)));
                        arr_20 [i_0] [i_0] [(_Bool)1] [i_0] = (~(arr_2 [i_0]));
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((_Bool) var_17)) ? (var_12) : ((+(((/* implicit */int) arr_1 [i_2] [(_Bool)1]))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            arr_25 [i_4] [i_4] = ((/* implicit */int) var_0);
            arr_26 [i_4] = ((((/* implicit */unsigned int) (~(var_12)))) < (((unsigned int) arr_18 [i_0] [15LL])));
            arr_27 [4U] [4U] [4U] = arr_24 [12] [i_4] [i_4];
        }
    }
}

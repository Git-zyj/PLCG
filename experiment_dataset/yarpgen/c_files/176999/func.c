/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176999
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_14 [i_3] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_4 = 4; i_4 < 12; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        arr_25 [i_0] [i_0] [i_0] [(unsigned short)12] [i_0] [i_0] &= ((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) >> (((((/* implicit */int) (unsigned short)36252)) - (36246)))));
                        arr_26 [i_0] [i_6] [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (var_11))) >> (((((((/* implicit */int) var_1)) | (((/* implicit */int) (_Bool)1)))) + (127)))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (_Bool)1))) << ((((-(((/* implicit */int) (_Bool)1)))) + (1)))))) ? (((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (var_19))), ((((_Bool)0) && (((/* implicit */_Bool) 14233973837852402175ULL))))))) : ((+(((/* implicit */int) (!((_Bool)1))))))));
}

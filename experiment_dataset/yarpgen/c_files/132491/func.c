/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132491
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
    var_19 = ((unsigned char) min((((var_12) | (((/* implicit */int) var_17)))), (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) max((2956154850U), (((/* implicit */unsigned int) min((arr_4 [i_0 - 2] [i_1] [i_0 - 2]), (((((/* implicit */_Bool) 1519796619667060376ULL)) && (((/* implicit */_Bool) 16926947454042491239ULL)))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_2] [11U] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_5 [(signed char)20] [3ULL])))))));
                        var_21 = ((/* implicit */unsigned int) min((min((arr_9 [i_2 + 1] [i_2 + 2] [i_0 + 2] [i_0 - 2]), (((/* implicit */long long int) (signed char)79)))), ((~((-(arr_5 [i_0 + 2] [i_1])))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 24; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        arr_19 [i_5] [i_5] = ((/* implicit */signed char) (unsigned char)109);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))) == (((unsigned int) min((4294967295U), (((/* implicit */unsigned int) var_15)))))));
                        arr_20 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_0] [i_4] [i_5 - 1] [18])), ((((_Bool)0) ? (((/* implicit */unsigned int) var_7)) : (520002075U)))))) ? ((+(((/* implicit */int) arr_14 [i_6])))) : (((/* implicit */int) min(((short)22575), (((/* implicit */short) (unsigned char)129)))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15))) * (8598968307298538037ULL))))))))));
    }
    var_24 = ((/* implicit */unsigned char) var_9);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169116
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
    var_11 = ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) (_Bool)1))));
    var_12 -= ((/* implicit */short) max(((~(1044876118U))), ((+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_13 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (!((_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) / (((/* implicit */int) var_6)))) ^ ((~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((1935811927U) | (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)30904))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)(-127 - 1)), (((/* implicit */signed char) var_2))))) || (((/* implicit */_Bool) arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) (_Bool)0);
                        var_15 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_2 [i_3])) ? (10705452053476202237ULL) : (((/* implicit */unsigned long long int) var_10)))))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 - 1] [i_0] [(unsigned char)13])) ^ (min((((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) arr_10 [i_3 + 1] [i_2] [i_1 + 1])) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_9 [i_0] [i_0 + 1]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_17 -= ((/* implicit */unsigned long long int) arr_17 [i_4]);
        arr_20 [i_4] &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55301))) : (6520286184828815406ULL)));
        var_18 &= ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_4] [i_4])) >= (((/* implicit */int) arr_19 [i_4]))));
        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_4] [i_4])) | (((/* implicit */int) arr_18 [i_4] [i_4]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_18 [12ULL] [i_4])) : (((/* implicit */int) arr_18 [i_4] [i_4])))) : (((/* implicit */int) arr_19 [i_4]))));
    }
}

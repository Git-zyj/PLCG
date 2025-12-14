/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186060
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = arr_2 [i_0];
        arr_4 [i_0] [(unsigned char)3] = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_19 = max((var_16), (arr_3 [i_0] [11]));
                        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)91)))), (((/* implicit */int) arr_10 [i_2] [i_0] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))))) : (min((((((/* implicit */unsigned long long int) 2038561844)) | (14280086897682454226ULL))), (((/* implicit */unsigned long long int) var_3))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_4 = 1; i_4 < 24; i_4 += 2) 
    {
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43665))) : (4294967295U)));
                var_22 ^= ((/* implicit */unsigned char) ((((((var_10) == (((/* implicit */unsigned int) 2038561844)))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)26559)) | (((/* implicit */int) (signed char)-6))))))) ? (-2038561845) : (min((var_3), (((/* implicit */int) arr_20 [i_4 + 1]))))));
                arr_21 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_18 [i_5] [i_5 + 3])))))));
            }
        } 
    } 
}

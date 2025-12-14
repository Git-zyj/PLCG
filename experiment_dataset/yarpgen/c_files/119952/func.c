/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119952
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28184)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) < ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) : (2959394177U)))));
                    arr_9 [(unsigned char)0] [i_1] [i_2] = ((/* implicit */short) ((((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))))) <= (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 4) 
    {
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_15))))))) || (((/* implicit */_Bool) (+(max((arr_11 [i_3]), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 3; i_5 < 23; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        arr_19 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned short) max((min((var_8), (((/* implicit */unsigned long long int) arr_10 [i_3])))), (((/* implicit */unsigned long long int) var_12))));
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_17 [i_3 - 1] [i_3 + 1])) && (((/* implicit */_Bool) var_13)))) ? (((arr_17 [i_3 + 1] [i_3 - 1]) - (arr_17 [i_3 - 1] [(unsigned short)8]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_17 [i_5 - 3] [i_6]))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            var_19 ^= ((unsigned char) min((((/* implicit */unsigned short) arr_13 [i_3 - 1] [i_5 - 1])), (var_16)));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_16 [i_7] [(_Bool)1]))));
                        }
                    }
                } 
            } 
        } 
    }
}

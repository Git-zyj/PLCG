/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148591
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)32141)) ? (((/* implicit */int) (short)-32142)) : (((/* implicit */int) var_13)))) * ((~(((/* implicit */int) (unsigned short)34720))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((15010373505781333323ULL) & (3436370567928218293ULL)))) ? (15010373505781333312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                        arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (unsigned char)120))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_9 [i_0] [i_4] [i_0])))) ? (((((/* implicit */_Bool) 15010373505781333322ULL)) ? (var_12) : (((/* implicit */int) (unsigned short)43021)))) : (((/* implicit */int) (short)-1))));
        }
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
        {
            arr_19 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) (unsigned char)255))));
            arr_20 [i_5] &= (((_Bool)1) ? (1080213271U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
        }
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) 803674298)) ? (((/* implicit */int) (_Bool)0)) : (1018604532)))));
    }
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_4))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157593
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)255)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (min((((/* implicit */unsigned int) (unsigned char)11)), (var_2))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((unsigned short) var_0));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 3635579862U)) & (arr_3 [i_0])));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 2])))));
            arr_7 [(short)3] = ((/* implicit */unsigned long long int) 87753084627060079LL);
            arr_8 [i_0] [i_0] [(signed char)12] = ((/* implicit */long long int) var_10);
        }
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            var_17 ^= ((/* implicit */unsigned char) (signed char)127);
            var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_0] [i_2 - 2] [i_2]))));
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
        {
            arr_15 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_3 [i_3])) ^ (arr_5 [i_0] [i_3] [i_3])));
            var_19 = ((/* implicit */unsigned char) arr_4 [i_0] [i_3]);
        }
        for (int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
        {
            arr_19 [i_0] [i_4] [i_0] = ((/* implicit */short) var_3);
            arr_20 [12ULL] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        }
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned int i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                {
                    arr_25 [i_0] [14ULL] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)51338)) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned int) (~(2147418112))))));
                    arr_26 [i_0] [i_5] [0ULL] = ((/* implicit */short) ((unsigned char) ((short) arr_3 [i_0])));
                }
            } 
        } 
        arr_27 [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 2097151ULL)) ? ((-(((/* implicit */int) min(((short)-8278), (((/* implicit */short) (signed char)104))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11)))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-110)), (var_0)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_9))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151497
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 1] = ((/* implicit */_Bool) var_4);
                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-24))));
                var_18 ^= ((/* implicit */unsigned int) arr_2 [i_0 + 1]);
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_0 [1U] [(short)9]))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    var_20 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned short) (unsigned char)12))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(unsigned short)5])) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_5 [i_1]))))) : ((+(var_6)))))));
                    var_21 = ((/* implicit */short) ((signed char) (_Bool)1));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_14 [i_5] = ((/* implicit */short) ((signed char) arr_10 [i_3] [i_3] [i_3]));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 19; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_10 [i_4] [i_5] [(short)1]))));
                                arr_19 [i_7] [i_4] [i_5] [i_6 - 3] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)19961)), (var_5)))) ? (max((((((/* implicit */int) (signed char)21)) + (-1763138690))), (((/* implicit */int) ((((/* implicit */int) (signed char)-121)) == (((/* implicit */int) (unsigned short)26763))))))) : (((/* implicit */int) ((signed char) arr_10 [i_3] [i_3] [i_3])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)171)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5]))))) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_8 [i_3])))))));
                }
            } 
        } 
    } 
}

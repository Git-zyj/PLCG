/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151348
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [(short)11] [i_0] = ((/* implicit */int) (short)32767);
                var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_3 [i_0] [(short)8])) : (506494585)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)241)) ? (506494595) : (((/* implicit */int) (short)-32762))))) : (((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [1ULL]))) : (0U))))), (((/* implicit */unsigned int) arr_1 [i_1] [(short)10]))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned short) ((unsigned char) var_9));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 134217727LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) (unsigned char)32)))))) : ((+(min((((/* implicit */unsigned int) arr_11 [(unsigned short)6] [i_3])), (arr_7 [(_Bool)1])))))));
                var_23 = ((/* implicit */int) min((var_23), (min((((/* implicit */int) arr_6 [i_2])), (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) (unsigned short)0))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */short) max((((long long int) (short)-1)), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_4 - 1] [i_5])))))));
                            arr_20 [i_2] [i_3] [(unsigned short)8] [i_4] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)1475))))));
                        }
                    } 
                } 
                arr_21 [i_2] [i_2] [10LL] |= ((/* implicit */unsigned long long int) ((arr_17 [2] [i_3] [i_2] [2]) ? (((arr_15 [0U] [i_3]) ? (((/* implicit */int) arr_15 [4] [i_3])) : (((/* implicit */int) arr_15 [6LL] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_3] [i_3])))))));
            }
        } 
    } 
}

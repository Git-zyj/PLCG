/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101611
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
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((((int) arr_4 [i_0 - 1] [i_0 - 2] [i_0])), (((/* implicit */int) ((short) arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 3])))));
                arr_7 [i_0] = ((/* implicit */signed char) var_6);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 1])) ^ (((/* implicit */int) arr_5 [i_0 + 1]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_6 [(signed char)6])))))));
                            var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)1023), (((unsigned short) (short)32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8675))) : (8063796181193885787ULL)));
                            arr_16 [i_0] |= ((/* implicit */short) (((~(((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_2 - 1])))) < (((/* implicit */int) arr_13 [i_0] [i_0 - 2] [i_0 - 1] [i_2 - 1]))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */_Bool) ((int) arr_8 [i_1] [i_0] [i_0]));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            {
                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_19 [i_5] [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) : (((arr_19 [i_5 + 1] [i_5 - 1]) >> (((var_1) - (3749774131U)))))));
                var_16 = ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
}

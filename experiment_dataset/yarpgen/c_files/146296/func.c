/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146296
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_2))));
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((unsigned short) (signed char)-64));
                                var_15 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_3 - 1] [i_3])))) % (((/* implicit */int) ((signed char) arr_6 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3])))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                var_17 = ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 4; i_5 < 8; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)117))))) ? ((+(((/* implicit */int) arr_11 [i_7] [i_6] [i_7] [i_7])))) : (((/* implicit */int) arr_16 [i_7]))))) / ((~(arr_12 [i_6] [i_6]))))))));
                    arr_19 [i_5] [i_6] [i_6] &= (short)3840;
                }
            } 
        } 
    } 
}

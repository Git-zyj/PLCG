/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133814
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) -501775288);
                            arr_10 [(_Bool)1] [(_Bool)1] [i_2 - 3] [i_3] = ((/* implicit */unsigned char) (unsigned short)22876);
                            var_19 = ((/* implicit */signed char) 924584249U);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */short) arr_17 [8U] [8U] [8U] [i_6]);
                                var_21 -= ((/* implicit */unsigned short) (+(4294967270U)));
                                var_22 = ((/* implicit */unsigned short) 4294967278U);
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) 1083654709U))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 ^= ((/* implicit */unsigned int) (unsigned char)63);
}

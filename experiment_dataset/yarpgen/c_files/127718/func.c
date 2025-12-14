/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127718
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                var_15 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((((arr_7 [i_2] [i_2 - 2] [i_2]) || (((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_9))))))) ? (((unsigned long long int) (short)-19990)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3)) * (((/* implicit */int) ((((/* implicit */int) (short)19990)) <= (((/* implicit */int) arr_4 [i_0] [i_0]))))))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (short)15)) >= (((/* implicit */int) (short)19990)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (18014398509481728LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19990)))))))))) <= (min((min((18014398509481759LL), (((/* implicit */long long int) arr_2 [i_0])))), (((((/* implicit */_Bool) (short)15)) ? (17557826306048LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3])))))))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~((+(17557826306048LL)))))) >= (((((((/* implicit */int) var_12)) >= (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19990))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)9868)) > (((/* implicit */int) var_13)))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((17557826306048LL) <= (18014398509481731LL));
    var_20 = ((/* implicit */unsigned short) var_11);
    var_21 = ((/* implicit */unsigned char) ((long long int) (short)-19990));
}

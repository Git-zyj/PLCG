/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125696
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
    var_11 -= ((/* implicit */int) (signed char)0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) (+((+(((((/* implicit */int) (short)3)) % (((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_1 - 3]), (arr_1 [i_1 - 1])))) ? (((/* implicit */long long int) min(((-(arr_10 [i_0] [i_1 - 2] [(short)1] [i_3]))), (((/* implicit */int) (_Bool)0))))) : ((((!(((/* implicit */_Bool) (unsigned short)44061)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)180), (((/* implicit */unsigned char) (signed char)51)))))) : (arr_4 [i_1 - 2] [i_1])))));
                            var_13 = min((881572887), (-358035479));
                            var_14 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0])))) & (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */unsigned long long int) 125738241)) : (9025702953339175536ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [8ULL])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 4; i_4 < 24; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (short i_6 = 3; i_6 < 23; i_6 += 3) 
            {
                {
                    arr_21 [i_4] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) ((long long int) min((((short) -4LL)), ((short)27353))));
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_19 [i_6 - 1] [i_4 - 1] [i_4])), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))));
                }
            } 
        } 
    } 
}

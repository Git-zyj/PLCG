/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168554
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-32341)) <= (((/* implicit */int) (short)7440))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(((unsigned int) ((unsigned long long int) arr_1 [(short)1]))))))));
                var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-32341)))) + (0LL)));
                arr_6 [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_1]))));
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) arr_4 [i_2]);
                    var_24 = ((/* implicit */signed char) arr_0 [i_1]);
                    var_25 = ((/* implicit */unsigned char) 0LL);
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [i_1]);
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (0ULL)));
    var_27 = ((/* implicit */int) var_11);
    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_6))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    arr_19 [i_4] [i_3] [1] [i_5] = ((/* implicit */signed char) 18446744073709551615ULL);
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+(((int) (-(arr_8 [i_5] [i_5] [i_5] [i_5])))))))));
                    arr_20 [i_3] [i_4] [i_5] = 0ULL;
                    var_30 += ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-32341))));
                }
            } 
        } 
    } 
}

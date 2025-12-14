/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121428
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_7))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) < (-3948337298657677748LL)));
                        }
                        var_18 -= ((/* implicit */_Bool) (signed char)(-127 - 1));
                        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (unsigned char)95)))));
                        arr_14 [(_Bool)1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) var_10);
                        var_20 = ((((/* implicit */int) (short)5537)) - (((/* implicit */int) arr_10 [i_3] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        var_21 = arr_8 [i_5] [i_2];
                        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (((unsigned long long int) (-2147483647 - 1)))));
                        var_23 = ((/* implicit */signed char) 522574526U);
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2] [(short)2])) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    }
                    var_25 = ((/* implicit */int) max((var_25), ((+(((/* implicit */int) min((arr_3 [i_0] [i_1]), (((/* implicit */short) ((unsigned char) (unsigned char)155))))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_14))));
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        for (short i_7 = 2; i_7 < 17; i_7 += 3) 
        {
            {
                arr_22 [13U] [13U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */unsigned long long int) (-(((int) (unsigned char)127))))) : (13628932029431149965ULL)));
                var_27 = ((/* implicit */short) 3772392756U);
            }
        } 
    } 
}

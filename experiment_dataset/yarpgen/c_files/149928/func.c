/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149928
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
    var_11 |= var_10;
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) 12717505626241724604ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned long long int) max(((unsigned short)25527), ((unsigned short)25527)));
                                var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((12717505626241724619ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))), ((unsigned char)68)));
                                arr_12 [i_0] [i_1] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_1] [i_4 - 1] = min((((((/* implicit */int) var_6)) << (((((-711742733) + (711742761))) - (7))))), (((/* implicit */int) ((short) (unsigned short)33561))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = ((unsigned long long int) min((((12717505626241724629ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25517))))), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_3] [i_4]))));
                                var_15 = ((/* implicit */signed char) arr_8 [i_3] [i_4 + 1] [i_4 + 1] [i_4] [i_4]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_5 = 3; i_5 < 23; i_5 += 3) 
                {
                    var_16 = ((/* implicit */signed char) ((12717505626241724610ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_1] [0ULL] [i_5 - 2] [i_5 - 3] [i_5 - 2]))))));
                    var_17 = ((/* implicit */unsigned int) -711742733);
                    arr_16 [i_5] [i_1] [i_5] = ((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)170)), (((short) var_7))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned long long int) var_9)))));
                                var_19 |= ((/* implicit */short) arr_17 [i_0] [i_1] [i_1] [i_7]);
                            }
                        } 
                    } 
                    arr_24 [i_5] [i_5] [i_5 - 1] [i_5] = ((/* implicit */long long int) ((_Bool) var_1));
                }
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((unsigned char) (unsigned char)170)))) | (((/* implicit */int) (unsigned char)170))));
            }
        } 
    } 
}

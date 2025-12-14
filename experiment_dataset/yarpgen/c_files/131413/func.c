/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131413
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((min((var_5), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2047)) ? (((/* implicit */int) (unsigned short)10799)) : (((/* implicit */int) (unsigned short)10784))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) (unsigned short)10773);
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_0] [9ULL] = ((/* implicit */long long int) (unsigned char)214);
                                arr_13 [(unsigned short)6] [i_1] [(unsigned short)2] [i_3] [i_4] [i_1] [i_0] |= (_Bool)1;
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_2))));
                                var_14 = ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = (~((-(max((4094532004045446216LL), (var_0))))));
                                arr_20 [(unsigned char)1] [i_2] [i_6] = ((/* implicit */long long int) var_9);
                                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)54751))))))));
                                var_16 = ((/* implicit */int) 8215119455202967367LL);
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */int) var_8);
                }
            } 
        } 
    } 
}

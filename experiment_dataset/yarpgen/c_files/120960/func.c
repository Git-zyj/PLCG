/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120960
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) >= ((-(((((/* implicit */int) var_0)) & (((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((min((var_3), (((/* implicit */long long int) arr_1 [i_0 - 2])))) > (((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_8 [i_0] [i_1] [(_Bool)1] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2 + 3] [i_0 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 2] [i_0 - 3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) | (4294967281U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) var_6);
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) + (-6233314637838316630LL)));
                                arr_17 [i_6] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned char) ((long long int) max((((/* implicit */unsigned long long int) var_3)), (13154828041656107448ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((unsigned short) var_11));
    var_20 = ((/* implicit */unsigned char) (unsigned short)27303);
}

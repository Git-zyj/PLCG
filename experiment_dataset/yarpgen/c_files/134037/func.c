/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134037
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
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) ((8510449578457134284ULL) > (((/* implicit */unsigned long long int) 11U)))))))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (((-(((/* implicit */int) var_15)))) * ((-(((/* implicit */int) var_8)))))))));
    var_20 = ((/* implicit */_Bool) min(((unsigned char)79), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned short)9704)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned char)233))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (3395486002U)));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) % (4677373501191037358LL)));
                    var_23 += ((/* implicit */unsigned char) max((max(((short)-13723), (((/* implicit */short) (signed char)-113)))), (min((((/* implicit */short) (signed char)-29)), ((short)-21558)))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19677))) * (0U))))));
                    arr_13 [2] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)79))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 7; i_5 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) (unsigned short)14948);
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) 17623410956181702887ULL))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144222
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+((+((~(((/* implicit */int) (_Bool)1)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_18 = (!((((+(((/* implicit */int) (short)-815)))) == ((-(((/* implicit */int) var_10)))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))))) != (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_2] [i_3])))))))));
                                arr_12 [i_4 + 2] [i_3] [i_2] [i_1] [i_3] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) arr_2 [i_0] [i_0])) < (((/* implicit */int) (unsigned char)255)))) || (((493089621194600400LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)-2472)))))))) << (((/* implicit */int) ((1602623356U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((arr_7 [i_1] [i_1] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 9; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_2))))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) >= (((/* implicit */int) (unsigned char)194))))) % ((-(((/* implicit */int) var_16)))))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), ((((_Bool)1) && (((/* implicit */_Bool) (short)-4096))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

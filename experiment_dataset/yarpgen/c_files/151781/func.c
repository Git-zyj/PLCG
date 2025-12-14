/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151781
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)58336)) ? (-4146952673196340764LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)58336)), (4294967295U)))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)58336), (((/* implicit */unsigned short) var_2))))))));
                var_13 = (-(((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) (unsigned short)58336))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) max((var_14), (arr_10 [i_2 - 2] [i_3 - 1] [i_4] [i_4])));
                                arr_14 [i_3] [i_3] [i_2 + 1] [i_3] [i_4] = ((min((((/* implicit */long long int) var_7)), ((-(var_4))))) < (((/* implicit */long long int) ((int) var_12))));
                                var_15 = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [4] = ((/* implicit */_Bool) (+(max((((int) var_9)), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_16 = ((int) var_11);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119667
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
    var_10 = ((/* implicit */unsigned short) (signed char)-75);
    var_11 = ((/* implicit */unsigned char) var_4);
    var_12 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (var_4) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))) : (1818364760U)))) && (((/* implicit */_Bool) (signed char)5)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)))))))));
                            arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_5 [i_2] [i_2 + 2] [i_2]))))));
                            var_14 = ((/* implicit */unsigned int) ((short) arr_2 [i_3] [i_3]));
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])) != (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((5958524381021865806ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 2]))))))) : ((~(((((/* implicit */_Bool) var_7)) ? (4294967295U) : (((/* implicit */unsigned int) var_4))))))));
                var_15 = ((/* implicit */unsigned int) var_2);
            }
        } 
    } 
}

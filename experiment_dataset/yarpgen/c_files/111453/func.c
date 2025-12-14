/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111453
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
    var_18 &= max((((/* implicit */unsigned short) min((((/* implicit */signed char) ((_Bool) var_6))), (var_4)))), (var_17));
    var_19 = ((/* implicit */unsigned char) var_13);
    var_20 = ((/* implicit */unsigned int) 4689368923977128334LL);
    var_21 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24720))))) != (((/* implicit */unsigned int) (+(((/* implicit */int) (short)24792)))))))), (min((((/* implicit */unsigned int) var_7)), (max((var_8), (((/* implicit */unsigned int) var_3))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) arr_13 [i_0] [i_1] [i_2])), ((((-(((/* implicit */int) var_16)))) / (((/* implicit */int) max((((/* implicit */short) (unsigned char)62)), (var_12))))))));
                            arr_15 [i_1] [9LL] &= max(((+(min((1651879722U), (1518846851U))))), (((/* implicit */unsigned int) var_5)));
                            arr_16 [i_0] [i_1] = ((/* implicit */long long int) max((max((((/* implicit */int) ((short) var_3))), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_13)))))), (((/* implicit */int) ((unsigned char) var_10)))));
                        }
                    } 
                } 
            }
        } 
    } 
}

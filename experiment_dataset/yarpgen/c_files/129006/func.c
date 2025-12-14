/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129006
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
    var_11 = ((/* implicit */unsigned int) (-((+(((int) var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (~(((max((var_8), (((/* implicit */unsigned long long int) arr_1 [(_Bool)1])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((unsigned short) ((signed char) arr_6 [i_0] [(unsigned short)0] [i_2 + 1] [i_3 - 1]))))));
                            arr_10 [i_0] [i_0] [i_2 + 1] = ((/* implicit */long long int) ((int) min((var_9), (var_9))));
                            arr_11 [i_0] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_7 [i_0] [8LL])))))));
                            arr_12 [0] [i_0] [(unsigned char)2] [i_3 - 1] = ((/* implicit */_Bool) arr_9 [6U] [i_1 + 2] [(_Bool)1] [i_1] [6LL]);
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) & (((long long int) var_8))))))))));
                var_15 -= ((signed char) 1225759191);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) arr_17 [i_4]);
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((long long int) min((var_10), (((/* implicit */unsigned short) arr_16 [i_4] [i_4]))))))));
            }
        } 
    } 
}

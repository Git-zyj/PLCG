/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121327
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
    var_11 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) / ((-(9223372036854775807LL))))) / (((/* implicit */long long int) 4294967295U))));
    var_12 = (+(((/* implicit */int) (_Bool)1)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_0 - 2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */_Bool) ((int) -36341445))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -76170278)) ? (((/* implicit */int) (unsigned char)5)) : (36341453)))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_0 [i_0] [i_2])) / (((/* implicit */int) (_Bool)1)))) % (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 4] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2])))))) ^ ((+(((/* implicit */int) arr_2 [i_0 - 1] [i_1 + 1]))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((arr_3 [i_2] [i_1]) - (((/* implicit */int) ((_Bool) 376929473U)))));
                }
            } 
        } 
    } 
    var_13 = (+(-1207138901));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(5348585679795271932LL))) << (((((arr_12 [i_4]) + (3796293024054295430LL))) - (63LL)))))) ? (56408058) : (((/* implicit */int) arr_5 [i_3] [i_4] [i_4]))));
                arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-769615009) != (((/* implicit */int) (short)-125)))))) % (3918037823U)));
            }
        } 
    } 
}

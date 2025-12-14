/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181422
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
    var_18 |= ((/* implicit */unsigned short) 576390383559245824LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_0]));
                    var_20 = ((/* implicit */short) (+((-2147483647 - 1))));
                }
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) var_2));
                arr_8 [i_0] [i_1] [i_1] = ((long long int) (unsigned short)58787);
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min(((-(((/* implicit */int) min(((short)-22737), (((/* implicit */short) var_4))))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22065))) > (1644330456378989203LL)))))))));
            }
        } 
    } 
    var_22 = 17642951592929660382ULL;
    var_23 = ((max((((/* implicit */int) ((signed char) var_9))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-31078)) : (((/* implicit */int) (short)-31101)))))) - ((~(((/* implicit */int) (short)31082)))));
}

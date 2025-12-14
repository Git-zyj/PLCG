/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161595
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
    var_18 = ((/* implicit */signed char) var_8);
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
    var_20 = ((unsigned char) ((((/* implicit */int) ((_Bool) var_12))) <= (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 7; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 6; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] &= ((/* implicit */long long int) (unsigned short)34804);
                                var_21 = ((/* implicit */_Bool) ((unsigned short) ((signed char) var_1)));
                                var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_3 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13489))))))));
                            }
                        } 
                    } 
                } 
                var_23 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(signed char)1] [i_0] [i_1] [i_1] [i_1] [i_1])) >> (((max((1325621983791252907LL), (((/* implicit */long long int) (_Bool)1)))) - (1325621983791252882LL)))));
            }
        } 
    } 
}

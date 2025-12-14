/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111066
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
    var_20 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (signed char)-120)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)178)))))));
                            arr_11 [(unsigned short)7] [i_1] [i_2 - 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_17)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
            }
        } 
    } 
    var_23 = ((((/* implicit */unsigned int) (((((~(1043526284))) + (2147483647))) >> ((((~(((/* implicit */int) var_8)))) + (64370)))))) % ((~(var_16))));
}

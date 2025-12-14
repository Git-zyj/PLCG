/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10581
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
    var_11 = (_Bool)1;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) 17261647453496764701ULL);
                var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))) ^ (arr_4 [i_1] [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                arr_11 [i_2] [(unsigned short)10] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_2]);
                var_14 &= ((/* implicit */unsigned char) (~(arr_8 [i_2])));
                arr_12 [i_3] [(unsigned char)2] &= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 5601427056473038012LL)))))), ((((!(((/* implicit */_Bool) 5601427056473038012LL)))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (short)-10413))))))));
            }
        } 
    } 
}

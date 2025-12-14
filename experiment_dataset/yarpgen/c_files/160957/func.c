/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160957
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_14)), (arr_4 [i_0] [i_0 - 1]))) >> (((min((((/* implicit */long long int) (short)-13890)), (-4545652336711339054LL))) + (4545652336711339058LL)))))) || (((/* implicit */_Bool) ((unsigned char) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (short)13887)))))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)13899)) ? (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (_Bool)0)))))) : (max((-4545652336711339054LL), (((/* implicit */long long int) ((((/* implicit */int) (short)13898)) <= (((/* implicit */int) var_5)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_15 = max((3125886519U), (((/* implicit */unsigned int) (short)-13899)));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)13899)) ? (((((/* implicit */_Bool) min((arr_14 [i_2] [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned short)44085))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [(unsigned short)11] [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_2]))))) : (max((((/* implicit */unsigned long long int) (short)13899)), (var_3))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) (signed char)59)))) ? ((-(4398012956672LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)13889))))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            {
                var_17 ^= ((/* implicit */unsigned char) (unsigned short)25948);
                /* LoopNest 2 */
                for (signed char i_6 = 3; i_6 < 14; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_28 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (((-(arr_18 [i_6 + 1]))) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-13890)), (4398012956672LL))))));
                            arr_29 [i_4] [i_5] [11ULL] [8LL] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [13ULL] [i_4]))) <= (((((/* implicit */_Bool) ((unsigned short) (unsigned short)27794))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27794)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned short)42571))))) : (((((/* implicit */_Bool) (short)13887)) ? (-4545652336711339054LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42476)))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) (~(min(((~(((/* implicit */int) (unsigned short)58798)))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)30573))))))));
            }
        } 
    } 
}

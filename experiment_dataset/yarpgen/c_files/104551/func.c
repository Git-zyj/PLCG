/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104551
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
    var_14 = var_7;
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) arr_7 [i_1] [i_2] [i_3]);
                                var_17 += ((/* implicit */signed char) (-(max((min((((/* implicit */unsigned long long int) arr_5 [(unsigned short)10])), (5963662308633588133ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U)))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((12483081765075963482ULL) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 6393769194539590808ULL)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41726)) << (((((/* implicit */int) (signed char)-37)) + (38)))))) ? (35993612646875136ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))));
                    arr_13 [i_0] [i_0] [i_2] = (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) / (((/* implicit */int) (unsigned short)79))))));
                }
            } 
        } 
    } 
}

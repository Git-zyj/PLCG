/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167886
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) 288225978105200640LL);
                                var_13 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */int) var_7)) << (((458752U) - (458740U))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                                var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-70)), (((unsigned int) var_3)))))));
                                var_15 &= var_5;
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) var_6);
                                var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_17 [i_6 + 1] [i_0] [i_0] [i_1 + 2])) : (((/* implicit */int) ((unsigned char) 4294508573U)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)-70)), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (var_2))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-710721046) : (((/* implicit */int) (_Bool)1)))))))));
    var_19 = ((/* implicit */unsigned char) var_9);
}

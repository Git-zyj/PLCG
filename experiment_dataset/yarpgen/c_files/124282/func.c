/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124282
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) (+(arr_9 [(signed char)10] [i_1] [i_1] [i_3] [i_1] [i_0])));
                            var_17 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)52181))))));
                            var_18 = ((/* implicit */unsigned short) (+((+(2697812864U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) arr_6 [i_4]);
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_5] [i_4])))))));
                            var_21 = ((/* implicit */short) (+(arr_5 [(short)11] [i_4])));
                            arr_16 [6] [i_1] [4LL] [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((unsigned short) (short)32747)))))));
                            var_22 -= ((/* implicit */short) arr_4 [i_0]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_10 [i_0] [i_1] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) ((signed char) var_5))))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) (~((+(9126679734945856338ULL)))));
    var_26 = var_9;
}

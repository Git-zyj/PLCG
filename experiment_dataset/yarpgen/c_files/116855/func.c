/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116855
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), (arr_7 [(_Bool)1] [19ULL] [i_2] [i_3]))))));
                            var_12 &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1)))) / ((-(-4194304)))));
                            var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_5 [i_0 - 1]) || (((/* implicit */_Bool) var_4)))))));
                        }
                    } 
                } 
                var_14 -= ((/* implicit */signed char) var_6);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) (-(var_3)))))));
                var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (int i_7 = 4; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)7)))), (arr_12 [i_6])))) ? (((/* implicit */int) min((arr_11 [(_Bool)1] [(_Bool)1] [i_6] [i_6]), ((!(((/* implicit */_Bool) -6272949780431872559LL))))))) : (((/* implicit */int) ((signed char) arr_13 [i_4 + 3])))));
                            arr_25 [11U] [11U] [i_6] [i_6] [1] = ((/* implicit */signed char) arr_16 [i_4] [i_4]);
                        }
                    } 
                } 
            }
        } 
    } 
}

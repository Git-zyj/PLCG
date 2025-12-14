/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161321
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) max((max((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))), (((((/* implicit */int) (short)-6220)) / (((/* implicit */int) (unsigned char)216)))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_2] [i_3] = ((/* implicit */short) min((((/* implicit */long long int) (signed char)-80)), (4454906277465272364LL)));
                            var_12 = ((/* implicit */int) min((((/* implicit */long long int) 992)), (-281474976710656LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) var_8)), (((((/* implicit */int) var_8)) & (((/* implicit */int) var_3))))))) & (max((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_4))), (((/* implicit */long long int) var_5))))));
                            arr_19 [i_0 + 1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_10))) ^ (((/* implicit */int) var_3))))) : (max((var_4), (((/* implicit */long long int) var_2))))));
                            arr_20 [i_5] [i_5] [i_5] [20ULL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) < (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        {
                            var_14 = ((signed char) var_9);
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) max((min((var_5), (var_11))), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_2)))))))) | (((/* implicit */int) ((unsigned char) ((unsigned long long int) var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_11);
}

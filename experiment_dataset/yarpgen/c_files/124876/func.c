/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124876
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
    var_11 = ((/* implicit */unsigned char) var_0);
    var_12 ^= (~(15));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned short) min((-2006326927), (((/* implicit */int) (short)-1))));
        var_14 = ((/* implicit */unsigned char) (+(var_5)));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (short i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) 29)) ? (2006326926) : (-2))))));
                                arr_17 [i_5] [i_4] [i_3] [i_2 + 3] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) min((var_9), (((/* implicit */unsigned short) var_7))))), (max((((/* implicit */long long int) var_3)), (1329507883828790978LL)))));
                            }
                        } 
                    } 
                } 
                var_16 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)5267)))))));
                arr_18 [i_1] [i_1] = ((/* implicit */_Bool) var_8);
                arr_19 [i_1] [i_2 + 1] = ((/* implicit */short) max((2006326922), ((((-2147483647 - 1)) + (((/* implicit */int) var_8))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_0), (((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned char)63), (((/* implicit */unsigned char) (signed char)-1))))))))));
}

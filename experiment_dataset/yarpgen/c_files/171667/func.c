/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171667
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
    var_12 = ((/* implicit */short) 2984442931U);
    var_13 = var_6;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [(_Bool)0] [i_0] [13U] [(_Bool)0] = ((/* implicit */unsigned char) -6516044602532601912LL);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1880808214)) ? (2382995113U) : (1911972182U)));
                                var_15 ^= ((/* implicit */unsigned long long int) (!((_Bool)1)));
                                arr_12 [i_2] [i_1] [i_2] [i_3] [4] [i_0] = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)15186)), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((4395046601510071076ULL) < (((/* implicit */unsigned long long int) 2382995113U)))))) : (4689109936970168817LL)));
                }
            } 
        } 
    } 
}

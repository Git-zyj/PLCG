/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135259
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
    var_14 |= ((/* implicit */_Bool) (~((+(var_12)))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1897741621078044318LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (33554432U)))), (((var_13) >> (((/* implicit */int) var_7)))))))));
    var_16 = ((/* implicit */_Bool) 1233526442);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) 1233526420);
                var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3584)) || (((((/* implicit */int) (short)16506)) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)210)) > (32764))))))));
                arr_5 [i_1] = max(((+(arr_2 [i_0] [i_1]))), (((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)))));
                var_19 = min((arr_1 [i_0] [i_1]), (((((/* implicit */long long int) ((/* implicit */int) (short)16506))) + (((long long int) (short)(-32767 - 1))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */int) ((unsigned long long int) min((((((/* implicit */int) (unsigned short)18561)) & (((/* implicit */int) (unsigned short)46979)))), (min((((/* implicit */int) (unsigned char)0)), (7936))))));
                            var_21 = ((/* implicit */int) arr_1 [i_1] [i_1]);
                            var_22 = ((/* implicit */int) 13087994585896139138ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((3523721469561114495LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
}

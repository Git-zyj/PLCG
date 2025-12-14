/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131891
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
    var_20 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_2]))) > (10ULL))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_19))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) var_11))))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27702)))));
                                var_23 |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)27703))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((short) arr_4 [i_0] [i_2] [i_3])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) min((var_25), ((unsigned short)27711)));
                }
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)65535));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((long long int) (short)(-32767 - 1)))))) ? (((/* implicit */int) ((((long long int) var_19)) > ((-(-9223372036854775788LL)))))) : (((int) var_6)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)27703)), (4294967285U)));
    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (signed char)120))));
    var_29 &= ((/* implicit */long long int) var_10);
}

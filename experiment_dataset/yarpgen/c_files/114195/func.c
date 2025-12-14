/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114195
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
    var_13 = ((/* implicit */signed char) 171140006);
    var_14 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned short) max(((+(171139984))), ((~(((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */int) var_5))))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    arr_10 [(short)16] [i_1] [i_1] [i_1] = ((/* implicit */short) 171140017);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3879056338U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_6 [i_0 - 3] [i_1]))))) : (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)30832)), (854646588U)))) == (arr_8 [i_0] [i_0 - 3] [i_2 - 1]))))));
                    var_17 = ((/* implicit */signed char) (-(-6764972935472575428LL)));
                }
                for (long long int i_3 = 3; i_3 < 14; i_3 += 4) 
                {
                    var_18 = ((/* implicit */unsigned long long int) max((1507952147U), (((/* implicit */unsigned int) (short)27975))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_8 [i_0] [i_0] [i_0]))));
                }
                for (short i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    var_20 += max((var_8), (((/* implicit */unsigned short) (_Bool)0)));
                    arr_16 [i_1] [i_1] = ((/* implicit */_Bool) 9018139113842484922LL);
                }
                for (short i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((5124243906299037770ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) << (((((arr_18 [i_0] [i_0] [i_5]) + (1251802243))) - (20))))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned int) (unsigned short)20906)))));
                }
                arr_20 [i_0] |= ((/* implicit */unsigned short) max((2249600790429696LL), (((/* implicit */long long int) (~(((/* implicit */int) (short)-18720)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)3034)), (2787015145U)));
}

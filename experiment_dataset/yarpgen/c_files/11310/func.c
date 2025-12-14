/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11310
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
    var_13 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_7)), (((long long int) var_6)))), (((/* implicit */long long int) var_9))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22183))) == (var_10))) ? (((((/* implicit */_Bool) (unsigned short)20624)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_12))) : (((/* implicit */long long int) var_9))))) ? (((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143)))));
    var_15 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) (-(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) >= (((/* implicit */int) ((_Bool) var_9)))));
        var_16 = ((/* implicit */unsigned short) 388944020);
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (unsigned short)44911))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) max((min((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2 + 2] [i_1])) ? (((/* implicit */int) (unsigned short)43352)) : (((/* implicit */int) (unsigned short)44939))));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) arr_7 [i_2 + 1]);
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (long long int i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((_Bool) -388944035));
                            var_19 = ((/* implicit */unsigned short) var_4);
                            arr_20 [i_1] [(unsigned char)6] [2LL] [i_3] [i_5 - 1] &= ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_6 [i_1] [i_1]))))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 2601551291367225434ULL))));
                            arr_21 [i_1] [i_2 - 1] [i_5] [i_3] [i_5] [i_3] [i_5 + 1] = ((/* implicit */unsigned short) 3410143948610119599ULL);
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_2 + 1])) * (((/* implicit */int) arr_0 [i_2 + 3] [i_2 + 3])))))));
        }
    }
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_24 [i_6 - 1] = ((/* implicit */short) ((unsigned int) arr_22 [i_6 - 1]));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (12032510108603036597ULL)));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144328
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) min((min((71959903), (((/* implicit */int) (unsigned char)214)))), (((((/* implicit */_Bool) (unsigned short)59268)) ? (((/* implicit */int) arr_7 [i_1] [i_1 - 2] [i_2])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 1] [i_2 + 1]))))));
                    arr_8 [i_1] [(unsigned char)10] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_1] [i_0] [i_1] [i_1]))));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [(unsigned short)5]))) : (min((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0] [i_1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (0U)))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8192)) / (((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))))) * (min((arr_4 [i_1]), (((/* implicit */unsigned long long int) (short)8192))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)36228)))) - (7987)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4270043859U)));
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((unsigned long long int) (unsigned short)40636))));
        arr_11 [(short)7] = ((/* implicit */int) (_Bool)0);
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 4294966272U)), (max((arr_10 [(unsigned char)19] [i_3]), (((/* implicit */unsigned long long int) (unsigned char)246)))))))));
        arr_12 [i_3] [i_3] = ((unsigned short) ((unsigned short) ((unsigned char) arr_10 [i_3] [i_3])));
    }
    var_15 = ((/* implicit */short) ((((int) 586742302)) >> (((/* implicit */int) min(((unsigned short)53728), ((unsigned short)9))))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 67043328U)))) == (min((((/* implicit */unsigned int) (((_Bool)0) ? (403311424) : (16)))), (var_3))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110396
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
    var_14 = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (signed char)94))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-71))));
                    var_17 = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
                    var_18 += ((/* implicit */unsigned char) min((931338809084466004ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                    var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)1)), (2330557016U)));
                    var_20 = ((/* implicit */short) (unsigned char)249);
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (short)-5681)) : (2147483647)));
    var_22 = ((/* implicit */unsigned short) var_3);
}

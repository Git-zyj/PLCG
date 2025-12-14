/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126878
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
    var_14 = ((/* implicit */_Bool) ((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) var_11);
        var_16 += ((/* implicit */unsigned char) var_11);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = var_2;
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) 4610861012979720812ULL);
            var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((long long int) (_Bool)1))))));
            var_20 = ((/* implicit */unsigned char) var_7);
        }
        var_21 = ((/* implicit */signed char) max((var_21), ((signed char)-114)));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */_Bool) arr_3 [i_3] [0LL] [i_3]);
        arr_13 [i_3] = ((/* implicit */unsigned long long int) var_13);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_22 = ((((/* implicit */long long int) max((max((var_11), (((/* implicit */unsigned int) (signed char)-106)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)113)) && (((/* implicit */_Bool) 6964005583722304473ULL)))))))) & ((+(((((/* implicit */_Bool) (signed char)106)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
        arr_16 [i_4] [i_4] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4194303) >= (((/* implicit */int) (unsigned char)64)))))) > (max((var_4), (((/* implicit */unsigned long long int) (unsigned char)82)))))));
    }
    var_23 = ((/* implicit */unsigned int) ((long long int) var_13));
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((int) ((((((/* implicit */_Bool) (unsigned short)46918)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22971))) : (6907631145619794231ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (1718972395) : (((/* implicit */int) var_8)))))))))));
}

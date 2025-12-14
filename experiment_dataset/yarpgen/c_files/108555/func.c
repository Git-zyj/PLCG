/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108555
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
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_9)) + (1842976266236034570ULL)))))));
    var_20 = ((/* implicit */long long int) var_15);
    var_21 = ((/* implicit */unsigned char) min((8058593616469648828LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned short)42989)))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned short)42989)) ^ (-612888376))) : ((~(((/* implicit */int) (unsigned short)9145))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((134217216), (((/* implicit */int) (signed char)-1))));
        arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((signed char) (~(3595330482049522682LL))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_6 [10LL]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42)))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2])) < (((/* implicit */int) (unsigned short)22546))));
            var_24 = ((/* implicit */_Bool) ((int) (!(arr_5 [i_2]))));
        }
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)216))))));
        arr_15 [(_Bool)1] [(unsigned short)17] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        arr_16 [i_3] = ((/* implicit */long long int) arr_14 [i_3] [i_3]);
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (((~(((/* implicit */int) (!(((/* implicit */_Bool) -8025843436893870822LL))))))) * (min(((~(((/* implicit */int) (unsigned char)64)))), (((/* implicit */int) arr_14 [i_3] [i_3])))))))));
        var_27 ^= ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((((((/* implicit */int) (unsigned char)106)) % (((/* implicit */int) arr_13 [i_3])))) * (((/* implicit */int) arr_14 [i_3] [i_3])))) : (((/* implicit */int) ((14802362441025916236ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [(unsigned short)1] [i_3])), (arr_13 [i_3])))))))));
    }
    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned short) -1LL);
        var_28 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_18 [i_4] [i_4])) > (((/* implicit */int) (unsigned short)65535))))) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)33875)) : (((/* implicit */int) (unsigned char)47))))))));
    }
}

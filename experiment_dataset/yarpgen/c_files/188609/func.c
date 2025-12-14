/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188609
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 20; i_1 += 4) /* same iter space */
        {
            var_14 = -7989606247371905577LL;
            var_15 = ((/* implicit */_Bool) var_4);
            var_16 |= ((/* implicit */int) max((min((((((/* implicit */unsigned long long int) -1385480150)) | (var_6))), (((/* implicit */unsigned long long int) ((arr_2 [i_1 - 2] [i_0]) ^ (((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) var_6)) ? (((0ULL) | (1120885399932575415ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)9975)) : (((/* implicit */int) arr_5 [i_0])))))))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) (short)9999))))) ^ (max((((/* implicit */unsigned long long int) var_12)), (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) < (max((var_0), (((/* implicit */unsigned long long int) var_1))))))))));
        }
        for (short i_2 = 2; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */short) -1LL);
            var_19 = ((/* implicit */int) max((var_6), (max(((~(var_3))), (((/* implicit */unsigned long long int) ((short) 7989606247371905567LL)))))));
        }
        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65527))));
        arr_12 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (((var_9) << (((11416008588102917817ULL) - (11416008588102917817ULL)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) (-((+(18446744073709551615ULL)))));
        var_22 &= ((/* implicit */short) (unsigned char)10);
        var_23 *= ((/* implicit */short) (((-(var_8))) % (((((/* implicit */_Bool) 0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) < (134217727U)));
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_18 [14U] = ((/* implicit */int) arr_4 [i_4] [i_4]);
        var_26 ^= var_3;
    }
}

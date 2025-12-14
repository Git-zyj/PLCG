/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102053
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
    var_14 = ((/* implicit */signed char) var_13);
    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = (!(((/* implicit */_Bool) var_8)));
            var_17 -= (~(2327944500382863285ULL));
            var_18 |= (+(var_7));
            var_19 = ((2862287634242177181ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
            var_20 &= var_13;
        }
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (+(929955174U)));
            var_22 = ((/* implicit */short) max((var_8), (((/* implicit */long long int) var_1))));
            var_23 = ((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)1))))));
            var_24 = min((((((/* implicit */_Bool) ((2558044900224613114ULL) - (2558044900224613114ULL)))) ? (((/* implicit */unsigned long long int) 15U)) : (((unsigned long long int) (short)9658)))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (_Bool)0))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_25 ^= ((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_5)))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8))) / (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))))) ? (((unsigned int) ((((/* implicit */_Bool) (short)-5380)) && (((/* implicit */_Bool) (short)0))))) : ((~(14U)))));
        }
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 3) 
        {
            var_27 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */unsigned int) 1582570325)) : (var_2)))) ? (((/* implicit */unsigned long long int) 2097088U)) : (max((9000600452809417459ULL), (((/* implicit */unsigned long long int) -6989614671931659208LL))))))));
            var_28 = ((/* implicit */_Bool) min((var_28), (((((/* implicit */_Bool) -8093013132103047661LL)) && (((/* implicit */_Bool) 18446744073709551615ULL))))));
            var_29 &= ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_9)))), (((/* implicit */int) (_Bool)1))));
        }
        var_30 = ((/* implicit */unsigned int) min((var_30), (((0U) << (((min((((/* implicit */long long int) var_4)), (var_10))) & (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) var_12)))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_31 = (_Bool)0;
        var_32 -= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        var_33 = ((long long int) var_11);
        var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
    }
}

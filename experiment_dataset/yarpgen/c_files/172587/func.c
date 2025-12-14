/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172587
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_17)))) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((8577446077582307270LL), (-1LL))))))) : (((((/* implicit */int) ((unsigned char) var_14))) / (((/* implicit */int) ((_Bool) var_3)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */long long int) 1073740800U)) > (-1LL)))), ((-(((/* implicit */int) (short)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_7)))) && (((((/* implicit */int) var_1)) < (((/* implicit */int) var_5)))))))) : (var_13)));
    var_21 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_22 -= ((/* implicit */unsigned short) (((!(max(((_Bool)0), ((_Bool)1))))) ? (((/* implicit */int) var_17)) : ((~((((_Bool)1) ? (((/* implicit */int) (unsigned short)31835)) : (((/* implicit */int) (signed char)-14))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)25863))));
                        var_24 = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (signed char)-120)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 24; i_4 += 4) 
                    {
                        var_25 = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)16)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)101)) && (((/* implicit */_Bool) (signed char)75))));
                        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1369282542)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12))))));
                        var_28 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) var_15);
                        var_30 = ((/* implicit */unsigned long long int) var_14);
                        var_31 = ((/* implicit */unsigned short) ((unsigned char) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-59))) : (-4153979212204615451LL))) >= (-5780042082336888732LL))));
                    }
                    var_32 ^= ((/* implicit */long long int) max((((((((/* implicit */_Bool) -4090084931210309415LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)55405)))) + (((/* implicit */int) (signed char)-59)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -530498815)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))) : (var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 67108863U)), (var_13)))))))));
                    var_34 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1503369277) | (((/* implicit */int) (short)-26589))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1)))))))) : (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)12)))), (((((/* implicit */int) (signed char)63)) & (((/* implicit */int) var_4))))))));
                }
            } 
        } 
        var_35 &= ((/* implicit */unsigned int) (((~(-2037127787))) < (((/* implicit */int) var_2))));
    }
}

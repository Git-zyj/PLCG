/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168266
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
    var_18 = ((/* implicit */signed char) ((var_16) / (((/* implicit */int) ((unsigned char) var_2)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(3534810406309996445LL))))));
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
    }
    for (int i_1 = 2; i_1 < 24; i_1 += 2) 
    {
        var_21 = ((/* implicit */long long int) (~(((((((/* implicit */int) (unsigned char)167)) << (((/* implicit */int) (_Bool)1)))) << ((((~(1750977696))) + (1750977717)))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (int i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [5LL] [5LL] [10ULL] [i_5])) ? ((-(var_14))) : (var_14)));
                            var_23 = (i_3 % 2 == 0) ? (((/* implicit */_Bool) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) 38243077)) ? (((/* implicit */int) (unsigned char)158)) : (-2147483624)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_3]))) : (((var_14) / (((/* implicit */long long int) var_12)))))) + (9223372036854775807LL))) << (((/* implicit */int) ((var_17) > (((/* implicit */unsigned long long int) max((-197170399914421334LL), (-5929276428219037333LL)))))))))) : (((/* implicit */_Bool) ((((((((((/* implicit */_Bool) ((((/* implicit */_Bool) 38243077)) ? (((/* implicit */int) (unsigned char)158)) : (-2147483624)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_3]))) : (((var_14) / (((/* implicit */long long int) var_12)))))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((/* implicit */int) ((var_17) > (((/* implicit */unsigned long long int) max((-197170399914421334LL), (-5929276428219037333LL))))))))));
                            arr_13 [i_1] [i_1] [i_3] [i_5] = (-(((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) < (1891967630)))));
                            var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_1 - 2] [i_1 - 2])), (var_14)))) ? (((/* implicit */int) arr_1 [i_3])) : ((+(-162411804)))))));
                        }
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (short)4080))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8740944085837328509ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (var_0)))))))));
                        var_26 = ((/* implicit */int) var_15);
                        var_27 = ((/* implicit */unsigned int) arr_1 [i_3 - 1]);
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1])))))));
        var_29 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) 682856441)) * (3224671329U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))) : ((-(-7534398115729453909LL))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 849045423)) ? (1959588428186588286ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))))));
    }
    var_30 = ((/* implicit */int) var_13);
}

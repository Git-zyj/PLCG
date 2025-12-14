/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150142
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_0 [(short)3])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((unsigned long long int) 153368329)) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))))), (min((144097595889811456ULL), (((/* implicit */unsigned long long int) (signed char)37))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_17 = ((((/* implicit */_Bool) 4294967295U)) ? (1948757872U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55944))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((0), (((/* implicit */int) (signed char)-79))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 43297060))))))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (short)28290)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7538))) : (7365572918455564216LL))))) : (((((-1815265534056297239LL) != (((/* implicit */long long int) 1254428078)))) ? (arr_8 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                        arr_12 [i_0] [i_2] [i_2] [(signed char)0] [6LL] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) -3273354610294012488LL)) ? (7989806475665732025ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7515)))));
                    }
                    arr_13 [i_0] [4LL] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_2] [i_1] [i_0]), (min((arr_4 [i_0] [i_1] [i_0]), ((short)-7538)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((short) (short)7538)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_10 [(unsigned char)6] [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-28290)))))) : ((-(5ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (short i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (9695213040164545048ULL)))) && ((!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)60024))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) 1649050049U)) : (9988822139193066063ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68)))))))));
                                var_20 &= ((/* implicit */signed char) ((min((((arr_10 [i_0] [i_1] [i_2] [i_2]) ? (-7757858025186190454LL) : (-174258088839943663LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_2])), (arr_17 [i_0] [i_1] [(_Bool)1])))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (-(9988822139193066063ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_5 - 2] [i_5 + 2] [i_5] [i_5 + 1] [i_5 + 1]))) : (arr_3 [i_5 + 2]))))));
                                arr_20 [10] [4U] [(unsigned short)10] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9541))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) -1121238726))))))) : ((-(((/* implicit */int) ((signed char) var_12)))))));
    var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((int) 10456937598043819591ULL))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (min((var_6), (((/* implicit */unsigned int) var_10)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_14))) ? ((+(((/* implicit */int) (short)-6246)))) : ((-(((/* implicit */int) var_15)))))))));
}

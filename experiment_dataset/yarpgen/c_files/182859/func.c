/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182859
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
    var_20 = ((/* implicit */signed char) var_15);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) 5ULL)) ? (-852561747) : (((/* implicit */int) (signed char)1)))) + (((((/* implicit */int) (signed char)1)) * (((/* implicit */int) (short)-22603)))))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((268435455U) << (((((/* implicit */int) (signed char)-45)) + (45)))))) ? (636438949) : (((/* implicit */int) (signed char)-106))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (((+(((4611686018427387904ULL) ^ (0ULL))))) != (((/* implicit */unsigned long long int) -852561736)))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((10934616683217774715ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)1701))))) ? (((852561757) << (((636438950) - (636438949))))) : (((((/* implicit */int) (short)-22602)) ^ (((/* implicit */int) (signed char)124)))))))));
                                var_25 = ((/* implicit */signed char) (-((-(((/* implicit */int) (short)22610))))));
                                arr_16 [i_1] [i_2] [i_3] [i_4 - 1] [i_4] = (~(((((/* implicit */_Bool) ((0ULL) + (((/* implicit */unsigned long long int) 852561721))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)22598))))) : (1288338416U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [8U] = ((/* implicit */short) (~(((/* implicit */int) (short)22602))));
        var_26 = ((/* implicit */signed char) ((636438959) - (((/* implicit */int) ((((/* implicit */_Bool) -636438937)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22602)) ? (1125899772624896LL) : (((/* implicit */long long int) 461343886))))))))));
        var_27 = ((/* implicit */unsigned char) (short)-8058);
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(1367520737))) | (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-83)) == (((/* implicit */int) (_Bool)1))))) >> (((852561754) - (852561729)))))) : (2185873678U)));
}

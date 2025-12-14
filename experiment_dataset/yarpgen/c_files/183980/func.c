/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183980
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
    var_19 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)6114)))) + ((-(-653560086)))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_15 [(signed char)2] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) arr_8 [i_4] [(signed char)15] [i_3 + 2] [i_2] [i_1] [(signed char)11])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-56))))))));
                                arr_16 [i_1] [i_1 - 2] [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_0 - 3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-1)) / (((/* implicit */int) (short)-1))))) <= (((8455366083495365352LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(min((((/* implicit */int) (short)6114)), (1017958494))))))));
                                var_22 |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (short)8139)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_28 [i_7] [i_1] [(unsigned char)17] [(unsigned short)15] [i_1 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_16)), ((unsigned short)39901)))) != ((+(((/* implicit */int) var_16))))))) >= ((~(var_1)))));
                                arr_29 [i_1] [i_6] [i_5] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-21792))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-15036)))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) (short)6114))))))) ? (((((/* implicit */int) ((((/* implicit */int) (short)23489)) >= (((/* implicit */int) (short)17289))))) * (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_13))))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) (short)-10011)))) : ((+(((/* implicit */int) var_5))))))));
    var_25 = ((/* implicit */signed char) min((min((max((var_6), (((/* implicit */unsigned long long int) (signed char)111)))), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)3833))))) ? ((+(((/* implicit */int) (signed char)111)))) : ((+(((/* implicit */int) var_14)))))))));
}

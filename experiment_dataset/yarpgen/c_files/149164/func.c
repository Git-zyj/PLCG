/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149164
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
    var_19 = ((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */int) var_1)) != (-2000542772)))) | (((/* implicit */int) var_15)))), (((/* implicit */int) var_0))));
    var_20 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_21 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((2000542785) << (((/* implicit */int) (_Bool)0)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((2000542771), (min((min((var_6), (((/* implicit */int) arr_2 [i_0])))), (2000542782)))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_7)) ? (-2000542772) : (((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) ((_Bool) (signed char)15))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_23 += ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) 2000542782))))) ? (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)1584))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_12)) : (var_14))))));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((-2000542782) + (2147483647))) >> (((var_2) + (1200385201)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_0])))))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((int) var_14)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            arr_14 [i_0] [i_0] [i_0] = var_3;
            arr_15 [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_12 [i_0]), (arr_12 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((arr_7 [i_0] [i_3]), (((/* implicit */unsigned long long int) ((int) var_16)))))));
        }
        for (int i_4 = 1; i_4 < 8; i_4 += 1) 
        {
            var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_4]))))) : (var_13)))) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) arr_10 [i_4] [i_0]))));
            var_27 = ((/* implicit */signed char) (+(arr_5 [i_0])));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        var_28 = ((/* implicit */short) min(((~(((unsigned int) 2000542746)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (unsigned short)22)))))));
        var_29 = ((/* implicit */unsigned int) (~(((((((/* implicit */int) (short)-32059)) + (2147483647))) << (((((((/* implicit */int) arr_20 [i_5] [i_5])) + (44))) - (11)))))));
        var_30 = ((/* implicit */signed char) -2000542752);
        arr_22 [i_5] |= ((/* implicit */short) (((!(((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned short) (short)6975))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10417))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -2000542777)) : (8740695149867820490ULL)))));
    }
}

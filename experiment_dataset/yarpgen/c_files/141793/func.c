/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141793
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
    var_19 = (-(min((var_5), (((/* implicit */unsigned long long int) 3279337548U)))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) (unsigned short)65526)))) : ((~(((/* implicit */int) (unsigned short)10)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_21 ^= ((/* implicit */unsigned short) (-((+((+(((/* implicit */int) var_15))))))));
                    var_22 = ((/* implicit */unsigned long long int) (((-(var_17))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19268)) + (((/* implicit */int) (short)-19268))))) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) var_2)))))));
                    arr_6 [i_2] = ((/* implicit */short) ((unsigned int) min(((unsigned short)3382), (((/* implicit */unsigned short) var_16)))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) (unsigned short)3404))))) : (min((((/* implicit */int) arr_1 [i_0] [i_0 - 4])), (arr_2 [i_0] [i_0 + 3] [i_0])))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)1792)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (short)19274)))), ((~(((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (unsigned short)65499)) << (((var_6) - (378815824U))))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) (unsigned short)62157))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    arr_9 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3382)) ? (((/* implicit */int) arr_1 [i_0] [i_3 - 2])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_0 + 3]))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (short)18759)) % (((/* implicit */int) (signed char)109)))) : (((/* implicit */int) (unsigned char)224))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_1 [i_0] [i_0]))));
                    var_27 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))));
                }
                for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    arr_12 [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-29383))))) ? (((unsigned long long int) arr_1 [i_1 + 2] [i_0 - 2])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3378)) & (((/* implicit */int) (short)19268))))));
                    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_2 [i_0] [i_1 - 1] [i_4 + 2]) >> (((/* implicit */int) (unsigned short)8))))) ? (((var_12) >> (((((/* implicit */int) (unsigned char)185)) - (181))))) : (min((arr_4 [i_0 + 1] [i_0 + 1] [6] [i_0 - 2]), (((/* implicit */unsigned long long int) (unsigned short)7)))))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1 + 1] [i_4 - 1])), (var_18)))) - (26160)))));
                }
                for (unsigned char i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((min((arr_16 [i_5] [i_5 + 1] [i_1 + 1] [i_0 + 3]), (arr_16 [i_1 - 1] [i_1] [i_1 + 3] [i_0 - 4]))) >= (min((var_5), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)11)))))))));
                    var_30 = ((/* implicit */unsigned short) var_9);
                }
                var_31 = ((/* implicit */unsigned char) arr_11 [i_0]);
                var_32 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(-767119916))))))));
            }
        } 
    } 
    var_33 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) max((((/* implicit */short) var_16)), ((short)-256)))))));
}

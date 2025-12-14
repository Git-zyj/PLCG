/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108992
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
    var_15 = ((/* implicit */signed char) ((unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (var_14))))));
    var_16 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((int) (signed char)24)), (arr_1 [i_0 + 1] [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_8)) >= (((/* implicit */int) var_11)))) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [(unsigned char)6] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)67))))))))));
        var_18 -= ((/* implicit */unsigned char) min((max((((/* implicit */int) ((((/* implicit */int) (signed char)-67)) < (((/* implicit */int) (unsigned char)243))))), ((+(((/* implicit */int) (signed char)-71)))))), (((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))))));
        var_19 = (-(((/* implicit */int) (unsigned char)252)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) arr_1 [i_0] [i_1]);
            var_21 -= arr_0 [i_0];
            arr_5 [(short)0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1])) >= ((-(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
        }
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            arr_9 [i_2] [8U] [i_0] = ((/* implicit */signed char) var_12);
            arr_10 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0 - 1] [i_2 + 3]))));
            arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0 + 1] [i_2 + 3]) : (var_7)));
        }
    }
    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3] [i_3]))))) ? (((/* implicit */int) arr_7 [i_3] [16U])) : (((((/* implicit */int) var_4)) - (((/* implicit */int) (_Bool)1)))))))));
        arr_14 [(short)5] [(signed char)14] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (arr_1 [i_3] [i_3]))));
    }
    for (unsigned short i_4 = 3; i_4 < 18; i_4 += 3) 
    {
        var_23 |= ((((/* implicit */int) ((_Bool) arr_16 [i_4] [i_4 - 2]))) % (min((((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */int) arr_16 [i_4] [i_4])) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) -8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)32762)))))));
        var_24 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) max((((/* implicit */short) var_8)), ((short)32762)))) : (((/* implicit */int) ((unsigned char) var_2))))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4 + 1] [(short)5])) || ((!(var_11))))))));
        arr_17 [i_4] = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) var_5)))))) < ((((~(((/* implicit */int) arr_16 [i_4] [i_4 + 1])))) << (((var_6) - (705366823U)))))));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 2) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((((((((/* implicit */int) (unsigned short)2047)) == (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)90))))) : ((+(var_14))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32763))))) ? (((/* implicit */int) max((var_10), (((/* implicit */short) var_1))))) : (((/* implicit */int) max((arr_15 [i_4]), (((/* implicit */short) var_13)))))))))))));
            arr_21 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((int) (_Bool)1))), (min((11590795U), (((/* implicit */unsigned int) (_Bool)1))))));
        }
        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            arr_24 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((unsigned char)147), ((unsigned char)252)))), (131071U)));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_18 [i_4 - 1] [i_4] [i_4]))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_0))));
            arr_25 [(unsigned char)5] [i_6] [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (unsigned char)255)) : (-224552278))))) ? (((((int) (_Bool)1)) * (((((/* implicit */int) var_2)) * (((/* implicit */int) var_8)))))) : ((+((-(((/* implicit */int) var_8))))))));
            var_27 |= ((/* implicit */short) var_12);
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 18; i_7 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) ((short) ((var_7) >= (((/* implicit */int) var_5)))));
            arr_29 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_4] [i_4 - 3] [i_4 - 3]))) | (var_6)));
        }
        arr_30 [i_4] = ((/* implicit */short) var_12);
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((4194303U), (((/* implicit */unsigned int) var_4))))) || ((!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_13))))))));
}

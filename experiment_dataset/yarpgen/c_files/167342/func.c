/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167342
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0]))));
        var_13 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_1))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_9 [(unsigned short)0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1725743381)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1725743381))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) -673239286004838722LL))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */short) ((int) (-((-(var_0))))));
    }
    var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(min((-1725743381), (((/* implicit */int) (unsigned char)65))))))) * (((unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (var_10))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)95))) : (var_0)));
                arr_18 [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_9)))) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)24350))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 19413664U)) ? (var_3) : (((/* implicit */unsigned int) var_8))))) ? (max((((/* implicit */long long int) var_4)), (var_0))) : (((/* implicit */long long int) arr_11 [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_2]))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_16 [i_2] [(unsigned short)0] [i_2])) ? (((/* implicit */int) arr_14 [i_2] [i_3])) : (-1662767906))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_21 [i_4] = ((/* implicit */unsigned int) var_8);
        arr_22 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1725743381)) ? (var_6) : (((/* implicit */long long int) 1725743380))))))) ? (((/* implicit */unsigned long long int) min((arr_15 [i_4]), (((/* implicit */unsigned int) arr_1 [i_4]))))) : (((((/* implicit */_Bool) (unsigned short)24349)) ? (((var_7) | (((/* implicit */unsigned long long int) 2402080425U)))) : (((/* implicit */unsigned long long int) 1725743373))))));
        arr_23 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((11621822407974339865ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned int) var_8)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) > (var_0))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))))));
        arr_24 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)205)), (var_9)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58441))) : ((~(19413664U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (unsigned short)6867))))) ? (((var_7) >> (12ULL))) : (((/* implicit */unsigned long long int) arr_5 [8U]))))));
    }
}

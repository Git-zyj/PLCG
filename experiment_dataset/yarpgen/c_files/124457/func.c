/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124457
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
    var_10 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), ((+(var_0)))))) ? (min((((((/* implicit */_Bool) var_3)) ? (2647090971U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((424178739U) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((2648253990U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? ((~(-1620449137))) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1])))) >> (((((((/* implicit */_Bool) -490816315)) ? (((/* implicit */int) (unsigned short)15941)) : (((/* implicit */int) (_Bool)1)))) - (15928)))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 3554437117U)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((unsigned char) (+(8950042594523696493LL)))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])) >> (((((/* implicit */int) (signed char)-65)) + (90))))) << (((((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_2] [(signed char)21] [i_0])), ((short)-28934)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1 - 1] [(unsigned short)16] [i_1]))))) - (3261074147U)))));
                    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((((/* implicit */int) arr_8 [i_0] [i_1 - 1] [(unsigned short)10] [i_2])) >> (((((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2])) - (10))))) : ((-(((/* implicit */int) arr_4 [i_0])))))) >> (((((/* implicit */int) ((unsigned short) ((3412444303U) | (var_3))))) - (52960)))));
                    var_13 = ((/* implicit */_Bool) max((((int) ((var_8) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)39))))), (((((/* implicit */_Bool) var_6)) ? ((+(2147483647))) : (((/* implicit */int) arr_7 [i_0] [i_1 - 1]))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    var_14 = ((/* implicit */int) 1143634495U);
                    arr_14 [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) (-(arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    var_15 ^= (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-29823)), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((1516802205U) << (((/* implicit */int) arr_7 [i_1] [i_4 + 1])))))));
                    var_16 = ((/* implicit */_Bool) var_9);
                    var_17 = ((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned short)62055)), (4294967291U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_1 - 1]))))));
                    var_18 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)8)) >> (((max((0U), (((/* implicit */unsigned int) arr_1 [i_1 - 1] [i_0])))) - (15157U)))))) : (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)8)) >> (((((max((0U), (((/* implicit */unsigned int) arr_1 [i_1 - 1] [i_0])))) - (15157U))) - (3147U))))));
                }
                var_19 ^= ((/* implicit */_Bool) ((int) max((((/* implicit */long long int) var_6)), (31LL))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100318
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
    var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) var_2))), (((((/* implicit */_Bool) (unsigned short)5)) ? (var_18) : (((/* implicit */unsigned int) var_10))))))) ? (var_15) : (((/* implicit */int) var_0))));
    var_21 = min((((_Bool) (signed char)16)), (((_Bool) (~(((/* implicit */int) (_Bool)0))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) max(((unsigned short)34795), (max(((unsigned short)5), (((/* implicit */unsigned short) arr_1 [i_0] [i_0 - 1]))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned short)7859))));
                arr_5 [(_Bool)1] [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            {
                arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) max((arr_3 [i_2] [i_2]), (((/* implicit */signed char) (_Bool)1))))), (arr_1 [i_3] [i_3])))) | (((/* implicit */int) ((signed char) arr_10 [(short)14])))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (signed char i_5 = 2; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_23 = (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_3] [0] [i_3])) : (((/* implicit */int) arr_2 [i_3] [i_4] [i_3]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_5])) : (((/* implicit */int) arr_9 [i_5] [i_4])))) : (((/* implicit */int) arr_13 [(signed char)1] [(signed char)1] [(unsigned char)2] [i_5 - 2])))));
                            var_24 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)7846)))) ^ (max((arr_14 [(unsigned char)5] [i_3 + 3] [i_3] [i_3 + 1] [i_5 + 2]), (((/* implicit */int) (short)-15888))))));
                            arr_16 [1LL] [(unsigned short)6] [i_3] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) (unsigned short)57676)) : (((/* implicit */int) arr_6 [i_2]))))))), ((+(((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_2] [i_4] [i_2] [i_2] [i_5 - 2]))) : (var_2)))))));
                            var_25 += ((/* implicit */_Bool) (~(((((((/* implicit */int) arr_6 [9])) == (((/* implicit */int) var_9)))) ? (((/* implicit */int) (short)14336)) : (((int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

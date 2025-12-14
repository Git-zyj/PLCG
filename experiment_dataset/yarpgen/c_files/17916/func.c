/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17916
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 + 2] = (short)-16325;
                arr_6 [i_0] [i_0] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 2])) * ((+(((/* implicit */int) arr_1 [i_1] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 1])) * (((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)1240)) : (((/* implicit */int) (unsigned char)160)))))) : (((/* implicit */int) ((((/* implicit */int) (short)-2)) > (((/* implicit */int) (short)16325)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
    var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) max(((short)1240), ((short)31397)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-32757))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (unsigned char)95)))), (((((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) / (((/* implicit */int) (short)19009))))))) ? ((+(((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (short)10))))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) arr_3 [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    {
                        arr_21 [i_3] = ((/* implicit */unsigned char) (short)-31416);
                        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)90))))) ? (((/* implicit */int) arr_15 [i_6] [i_5] [i_4 - 2])) : (((/* implicit */int) arr_13 [i_3]))));
                    }
                } 
            } 
        } 
        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_15 [(signed char)4] [i_3] [(signed char)4]))))) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_3])) : (((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3]))))));
    }
    var_17 -= ((/* implicit */short) (+(((/* implicit */int) (short)-32767))));
}

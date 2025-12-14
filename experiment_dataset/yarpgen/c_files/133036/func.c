/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133036
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) (unsigned short)65535)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) -608662997798805270LL)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)4095)))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((short) ((((/* implicit */int) (signed char)47)) ^ (((/* implicit */int) (unsigned char)140))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_5 [0ULL] [0ULL])) : (((/* implicit */int) (unsigned short)30821))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30821))) : (((unsigned int) arr_5 [i_1] [(signed char)5])))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) == (((/* implicit */int) arr_0 [i_1])))))));
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (short)-11023)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_0])))));
                            arr_16 [i_1] [i_1] [(_Bool)1] [(unsigned short)9] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (2944466683414365809ULL) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_2] [i_3] [i_2]))))) ? ((~(((/* implicit */int) arr_2 [i_4])))) : ((-(((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [(signed char)12] [i_0] [(signed char)2]))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((_Bool) ((unsigned int) ((int) var_13)))))));
}

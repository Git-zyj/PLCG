/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117992
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (unsigned short)2)))) && (((/* implicit */_Bool) var_8))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5059)) || (((/* implicit */_Bool) (unsigned short)5059)))))));
                                var_11 = ((unsigned short) (unsigned short)7155);
                            }
                            for (unsigned short i_5 = 3; i_5 < 22; i_5 += 3) 
                            {
                                arr_18 [i_0] [i_0] [i_0] = arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = min(((unsigned short)2324), ((unsigned short)57228));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned short) (unsigned short)57228);
                                var_12 = ((/* implicit */unsigned short) max((var_12), (max(((unsigned short)23768), ((unsigned short)128)))));
                            }
                            var_13 = ((unsigned short) (unsigned short)37889);
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                                var_14 = var_2;
                                var_15 = ((unsigned short) (unsigned short)0);
                            }
                            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                            {
                                var_16 = ((unsigned short) ((((/* implicit */int) arr_2 [i_3 + 1])) != (((/* implicit */int) arr_0 [i_3 + 2]))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)46572)))) * (((((/* implicit */int) (unsigned short)65524)) & (((/* implicit */int) (unsigned short)0)))))))));
                            }
                            for (unsigned short i_8 = 3; i_8 < 20; i_8 += 2) 
                            {
                                arr_31 [i_0] [i_0] [i_0] [i_8] [i_8] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)49149)))) > ((~(((/* implicit */int) (unsigned short)43402)))))))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29802)) ? (((/* implicit */int) (unsigned short)14550)) : (((/* implicit */int) (unsigned short)48989))))) ? (((((/* implicit */_Bool) (unsigned short)40113)) ? (((/* implicit */int) (unsigned short)35428)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (unsigned short)26496)) ? (((/* implicit */int) (unsigned short)55752)) : (((/* implicit */int) (unsigned short)62168))))))) ? (((/* implicit */int) (unsigned short)5059)) : (((/* implicit */int) max(((unsigned short)35428), ((unsigned short)49211)))))))));
                                arr_32 [i_2] [i_8] = var_5;
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65533)) ^ (((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
            }
        } 
    } 
    var_20 = var_5;
    var_21 = (unsigned short)30665;
}

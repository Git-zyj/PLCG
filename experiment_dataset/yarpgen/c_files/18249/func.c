/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18249
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_15)));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_19 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18015290368336502443ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                            arr_18 [i_0] [i_1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_2] [i_3] [i_4])) : (((/* implicit */int) (unsigned short)49964))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) var_3);
                arr_19 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((short) var_9));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_17)))) ? ((~(((/* implicit */int) arr_2 [i_1])))) : ((-(((/* implicit */int) (short)12973)))));
                var_23 = ((/* implicit */unsigned char) (signed char)-16);
            }
            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0]))));
        }
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            arr_26 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) : (var_11)));
            var_25 = ((/* implicit */int) var_15);
            var_26 = ((((/* implicit */int) var_6)) + (arr_22 [i_0] [i_0] [i_0] [(short)1]));
            /* LoopSeq 1 */
            for (long long int i_7 = 2; i_7 < 24; i_7 += 3) 
            {
                var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (4747761779023637611ULL)));
                arr_31 [i_6] [12LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) var_3)) : ((-(var_5)))));
                var_28 = ((/* implicit */int) var_11);
            }
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 1865091809)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))));
        }
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) ((unsigned char) -692767483)))));
    }
    var_31 = ((/* implicit */unsigned int) var_6);
    var_32 = ((/* implicit */_Bool) (+(var_17)));
    var_33 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))));
}

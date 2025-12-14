/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128749
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
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)0)), (var_16)))), (max((var_19), (((/* implicit */unsigned long long int) var_16)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) (-(((unsigned long long int) max((-1), (((/* implicit */int) (short)-32759)))))));
                arr_7 [i_0] = (!(((/* implicit */_Bool) arr_4 [i_0])));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483630)) ? (((/* implicit */unsigned int) 1833767427)) : (((unsigned int) 2147483617)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) 8231222169425802392ULL))))))));
                                var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1])) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_1] [6ULL] = ((/* implicit */unsigned char) arr_8 [(_Bool)0] [i_1] [(_Bool)0] [(_Bool)0]);
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_13 [i_5] [i_2] [i_2] [i_2] [i_2] [i_1] [i_0]))));
                        var_25 = ((/* implicit */unsigned short) var_10);
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_16 [i_6] [8LL] [i_2] [(short)2])))));
                            arr_20 [i_0] [i_1] = ((/* implicit */int) ((unsigned char) (short)9199));
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */_Bool) ((short) -6434484529614501882LL));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_15)) - ((-(arr_0 [(unsigned short)2])))));
                            arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) var_19);
                        }
                    }
                    var_29 = ((/* implicit */int) ((var_13) + (((/* implicit */unsigned long long int) 9076301161573845976LL))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) var_18);
    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_15)))))))));
}

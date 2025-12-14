/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132074
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
    var_10 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) var_6)), (arr_0 [i_0] [i_0 - 2]))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) max(((short)3), ((short)3)))) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (min((((/* implicit */unsigned int) (short)-21731)), (arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)11))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-21731))))))))))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 109594555U))) || ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1]))))));
    }
    for (long long int i_1 = 3; i_1 < 8; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (-5307953092549078008LL))) ? (((/* implicit */int) (short)-11)) : (((/* implicit */int) (!(((/* implicit */_Bool) 109594556U))))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (short i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_2] [i_3] [i_4])), (max((5917002190197087779LL), (((/* implicit */long long int) (unsigned char)239)))))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) -5307953092549078005LL)) ? (14594864940577997431ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (7797077612596649135ULL) : (((/* implicit */unsigned long long int) 4185372755U))))))))))));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (arr_14 [i_3 + 2] [i_3 - 1] [i_5 - 3] [i_5] [i_5] [i_3 + 2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        arr_18 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */long long int) arr_17 [i_6] [i_6])) : (-5917002190197087779LL)));
        arr_19 [i_6] = ((/* implicit */unsigned int) -691991324);
    }
}

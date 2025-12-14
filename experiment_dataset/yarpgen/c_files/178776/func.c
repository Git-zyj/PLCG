/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178776
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
    var_17 = ((/* implicit */signed char) min(((unsigned short)65535), (max(((unsigned short)65535), (((/* implicit */unsigned short) var_6))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((var_9) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) var_3)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32423))) % (3937664028U)));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        arr_11 [i_0] = ((/* implicit */short) (-((~(((/* implicit */int) var_3))))));
                        arr_12 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1724299078795563213ULL)) && (((/* implicit */_Bool) ((unsigned char) (signed char)-5)))));
                    }
                }
                arr_13 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((1091805470640464686ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2048))))))))) || (((((((/* implicit */_Bool) var_12)) ? (11977413316178262177ULL) : (((/* implicit */unsigned long long int) -1LL)))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */int) (unsigned char)242)))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (var_14)))))));
    var_19 = ((/* implicit */unsigned char) max(((+(max((((/* implicit */long long int) (short)-10792)), (var_8))))), (((/* implicit */long long int) (unsigned char)130))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113973
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
    var_20 = ((/* implicit */short) ((signed char) ((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (short)31)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 += ((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_22 = ((/* implicit */signed char) min((max((((/* implicit */unsigned short) arr_1 [12ULL])), ((unsigned short)0))), (((/* implicit */unsigned short) var_0))));
            var_23 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) 1)) : (arr_2 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) (signed char)-31))))))));
        }
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(max((min((var_14), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) arr_2 [i_0])))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-1)))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_19)), (arr_6 [19U] [i_2] [i_0])))) ? (-1033919723) : (((((/* implicit */int) arr_0 [i_2])) * (((/* implicit */int) var_2)))))) : (((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_8)))) / (((/* implicit */int) ((_Bool) var_4)))))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)8219)) == (((/* implicit */int) (short)17))))) % (((/* implicit */int) ((unsigned short) (signed char)-79))))))));
                    var_26 = ((/* implicit */_Bool) ((short) min(((short)-7838), (arr_1 [i_2]))));
                    var_27 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-23003)) : (((/* implicit */int) (short)224)))) : (((((/* implicit */int) (_Bool)1)) & (arr_6 [i_0] [(short)6] [i_3])))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3] [i_3])) ? (1ULL) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_2] [i_2]))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_4])), (min((min((((/* implicit */unsigned int) (short)0)), (arr_8 [i_4] [i_4]))), (3172804105U)))));
        var_29 = ((/* implicit */short) min((var_29), (arr_13 [i_4])));
    }
    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (unsigned char)1))));
}

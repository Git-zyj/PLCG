/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16487
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
    var_18 = var_0;
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                    arr_7 [i_0] [i_2] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [i_2])) : (var_15))) : (((((/* implicit */int) (signed char)-71)) ^ (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) ((unsigned short) arr_6 [i_2] [i_2 - 2] [i_2])))));
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)87))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) || ((_Bool)1))))))))));
                    var_21 += ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) ((short) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) < (5129381521265598949ULL)))), (max(((((_Bool)1) ? (((/* implicit */int) (short)21388)) : (((/* implicit */int) (unsigned char)67)))), (((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */int) (_Bool)1))))))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-1410523688) : (((/* implicit */int) ((unsigned short) (unsigned char)196)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1051560678U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)186))))))) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)9)), (473582783209241696ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-2686499013207914459LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
}

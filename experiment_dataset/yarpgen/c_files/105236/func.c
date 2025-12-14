/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105236
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
    var_16 ^= ((/* implicit */unsigned short) var_6);
    var_17 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) (short)0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) 675019735)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), ((+(((/* implicit */int) var_14)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0] [i_0])) > (-675019736))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (675019737))) : (arr_0 [i_0] [i_0])));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_20 ^= ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned char) 7ULL));
        var_21 |= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_1)))));
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_22 &= ((/* implicit */short) ((unsigned short) ((-675019736) * (((/* implicit */int) (_Bool)1)))));
        var_23 = ((/* implicit */unsigned short) (~(0U)));
        var_24 = ((/* implicit */unsigned long long int) (unsigned char)138);
        var_25 = ((/* implicit */signed char) arr_3 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-9183), (((/* implicit */short) max((((/* implicit */unsigned char) var_8)), ((unsigned char)72))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) | (min((((/* implicit */long long int) arr_7 [i_2])), (-267460678530346023LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned char)178))))))))));
        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((675019728) <= (((/* implicit */int) arr_6 [i_2] [i_2])))) || (((/* implicit */_Bool) (short)860)))))));
        var_28 *= ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
        arr_8 [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2]))))) : (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (var_15)))))) ? (((/* implicit */int) min((min((arr_7 [i_2]), (((/* implicit */signed char) var_8)))), (((signed char) -17))))) : (((/* implicit */int) arr_5 [(unsigned short)20] [2U]))));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
            {
                {
                    arr_19 [6] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_13 [i_3])))))), (((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */short) (signed char)115)), ((short)9191)))), (((unsigned short) 1208550157U)))))));
                    var_29 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)24900)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_12 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (max((((/* implicit */long long int) var_0)), (var_6)))))));
                }
            } 
        } 
        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)30041)))))));
    }
}
